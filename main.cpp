#include <iostream>

using namespace std;

int main()
{
    int myArray[10] = {0};
    double average = 0.0;
    int sum = 0;


    cout<< "Enter 10 integers to find their average"<<endl;

    for(int n = 0; n<10; n++){
        cin>>myArray[n];
    }
    for(int n =0; n< 10; n++){
        sum+=myArray[n];
        average=sum/10;
    }

    cout<<"The average of the integers is: "<<average<<endl;

   // cout << "Hello world!" << endl;
    return 0;
}
