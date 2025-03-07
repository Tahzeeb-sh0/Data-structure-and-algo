#include <iostream>
using namespace std;
int main(){

int num = 5;
int arr[7] = {3,-4,5,4,-1,7,-8};
int maxsum = INT_MIN;

for (int st = 0; st < num; st++)
{  
    int currsum = 0;
    for (int end = st; end < num; end++)
    {  

        currsum += arr[end];
        maxsum = max(maxsum , currsum); 

        if (currsum < 0)
        {
         currsum = 0;
        }
        

                  
      }      

}
cout<<maxsum<<endl;


int a=1;
int b = a;
cout<<a<<endl;

return 0;
}

