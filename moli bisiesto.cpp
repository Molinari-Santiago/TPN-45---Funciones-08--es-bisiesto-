#include<iostream>
using namespace std;
bool AnioDoblesiesta (int a);
int main(){
int n;
cout<<"ingrese un anio"<<endl;
cin>>n;

if(AnioDoblesiesta ( n)==true){
	cout<<"No";
}
if(AnioDoblesiesta ( n)==false){
	cout<<"Si";
}


return 0;}
bool AnioDoblesiesta (int a){
bool flag=true;
if(a%4==0){
	flag=false;
}
return flag;
}