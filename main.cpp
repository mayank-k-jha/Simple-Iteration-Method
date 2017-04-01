#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x=1;int xf=0;
    float f_x=2*x-log10(x)-7;
    for(xf=1;;xf++){
       f_x=2*xf-log10(xf)-7;
        if(f_x>0){
            break;
        }
        }
     x=--xf;
    //thus f_x becomes positive at x=xf
    //Now finding value of phi such that |phi_x'|<1
   //thus phi(x)=(log10(x)+7)/2;
    float result[100];result[0]=x;
    int loc=0;
    for(int i=1;;i++){
        result[i]=(log10(result[i-1])+7)/2;
        result[i]=(result[i]*1000000)/1000000;   //rounding off to 6 decimal places
        if(result[i]==result[i-1]){loc=i;break;}
    }
    cout<<"\n\n  Thus Root = "<<result[loc]<<" "<<x<<endl;
    return 0;
}
