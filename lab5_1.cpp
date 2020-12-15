#include<iostream>
using namespace std;

int main(){
    int number;
    int i=1;
    int even = 0;
    int odd = 0;
    while (i!=0){
    	cout << "Enter an integer: ";
    	 cin >> number;
    	  if((number%2==0)and(number!=0))
              {
                even++;
				}
                else if(number!=0){ odd++;
               }
    	 if(number==0){
		
                i--;
         }
    }
    cout << "#Even numbers = "<< even<<"\n";
    cout << "#Odd numbers = "<< odd;
    return 0;
}