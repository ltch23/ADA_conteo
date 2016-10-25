#include <iostream>
#include <vector>

using namespace std;

int main()
{


long long in;
// cin>>in; 
//num=100;
//int cont=0; int if1=0;int else1=0;

cout<<"num\tcont\tdescom"<<endl;

// for(long long num=0;num<=in;num++)
// {
long long num=153808593750;
// long long num=10986328125;

vector<int>  m_vector;
	int i=9;
	int cont=0; int if1=0; int if2=0;int if3=0; int if4=0;int else1=0; int else2=0;
	long long tmp=num;
	while(tmp>1){
		cont++;

		if(tmp<10) i=tmp,if1++;	

		if (tmp%i==0){
			tmp=tmp/i;
			m_vector.push_back(i);
			if2++;
			if(tmp%i==0) {if3++;continue;}
			else i=9,else1++;
			}
		else{
			else2++;
			if(i==2){
				cont=0;
				m_vector.push_back(0);
				if4++;
				break;
			}
			i--;
			}
	}
//cout<<'\t';
cout<<num<<"\t"<<cont<<"\t";	
cout<<if1<<"\t"<<if2<<"\t";	
cout<<if3<<"\t"<<else1<<"\t";	
cout<<if4<<"\t"<<else2<<"\t";	

for (int i=m_vector.size()-1;i>=0;i--)
	cout<< m_vector[i]<<" ";
m_vector.clear();
cout<<endl;


// }


/*cout<<"if1: "<<if1<<endl;
cout<<"else1: "<<else1<<endl;
*/	return 0;
}