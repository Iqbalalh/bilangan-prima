#include <iostream> 
using namespace std;
int main(){
	//iqbal al hafidzu
	int a;
	int b;
	bool c=true;
	cin>>a;

  if(a==0||a==1) {
    c=false;
  }
  else{
    for(b=2;b<=a/2;b++){
      if(a%b==0) {
        c=false;
        break;
      }
    }
  }
  if(c)
    cout<<a<<" adalah bilangan prima";
  else
    cout<<a<<" bukan bilangan prima";

 return 0;
}
