#include<iostream>
using namespace std;
int main(){

 int a,i=0,f=1;
 cin>>a;
 int count=0;
 int d[100];

 while(a){
 	d[i]=a%10;
 	count++;
 	a/=10;
 	i++;
 }

 for(i=0;i<count;i++){
 	if(d[i]!=d[count-i-1]){
 		f=0;
 		cout<<"Not a palindrome number\n"<<endl;
 		break;
 	}
 }

 if(f)
 	cout<<"palindrome number"<<endl;

return 0;
}