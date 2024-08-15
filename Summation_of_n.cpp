#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cout<<"Enter the number for summation = ";
    cin>>num;
    for (int counter=1;counter<=num;counter++) {
        sum=sum+counter;
    }
    cout<<"the summation for "<<num<<" is = "<<sum<<endl;
    cout<<endl<<"EXIT? (1=yes/0=no), Type '0' to continue or '1' to exit... > ";
    int yesno;
    cin>>yesno;
    if (yesno == 1) {
        cout<<endl<<endl<<"THANKYOU FOR USING ME... "<<endl;
        Sleep(2000);
        cout<<"EXITING...";
        Sleep(1000);

    }
    if (yesno == 0) {
        main();
    }

    return 0;
}