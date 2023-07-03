#include<iostream>
using namespace std;
bool Aniobisiesto(int a);
int main(){
int n;
cout<<"ingrese un anio"<<endl;
cin>>n;

if(Aniobisiesto ( n)==true){
	cout<<"No";
}
if(Aniobisiesto ( n)==false){
	cout<<"Si";
}


return 0;}
bool Aniobisiesto(int a){
bool flag=true;
if(a%4==0){
	flag=false;
}
return flag;
}
