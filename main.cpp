#include <iostream>

using namespace std;

int main()
{
  int option_no;
    cout<<"Arithmetic operations:"<<endl;
    cout<<"\n\nEnter the operations to be performed."<<endl;
    cout<<"1.ADDITION"<<endl<<"2.SUBTRACTION"<<"\n3.MULTIPLICATION"<<endl<<"4.DIVISION"<<endl;
     cout<<"\nEnter option:";
     cin>>option_no;
     int x,y;
     switch(option_no)
     {
        case 1:
    cout<<"\nAddition operation"<<endl<<"\nEnter two numbers:";
    cin>>x>>y;
    cout<<x<<"+"<<y<<"="<<(x+y);
    break;
       case 2:
    cout<<"\nSubtraction operation"<<endl<<"\nEnter two numbers:";
    cin>>x>>y;
    cout<<x<<"-"<<y<<"="<<(x-y);
    break;
     case 3:
    cout<<"\nMultiplication operation"<<endl<<"\nEnter two numbers:";
    cin>>x>>y;
    cout<<x<<"*"<<y<<"="<<(x*y);
    break;
    case 4:
       cout<<"\nDivision operation"<<endl<<"\nEnter two numbers:";
       cin>>x>>y;
       cout<<x<<"/"<<y<<"="<<(x/y);
    break;

   default:
    cout<<"\nInvalid option";
}
cout<<"\n\n"<<endl;
    return 0;
}

