#include <iostream>

using namespace std;

void time (int a , int b , char c , string d)
{
    if ((a==12&&b>0&&(d=="pm"||d=="PM")))
    {
          cout<<"Not allowed"<<endl<<endl;
    }

    else if (d=="AM"||d=="am")
    {

          if (a==10||a==11 &&b>=10)
          {
          cout<<a<<c<<b<<" "<<d<<endl<<endl;
          cout<<a<<b<<" hours"<<endl<<endl;
          }
          else if (a>0&&b>=10)
          {
          cout<<a<<c<<b<<" "<<d<<endl<<endl;
          cout<<"0"<<a%12<<b<<" hours"<<endl<<endl;
          }
          else if (a==10||a==11 &&b<10)
          {
          cout<<a<<c<<"0"<<b<<" "<<d<<endl<<endl;
          cout<<a<<"0"<<b<<" hours"<<endl<<endl;
          }
          else if (a>0&&b<10)
          {
          cout<<a<<c<<"0"<<b<<" "<<d<<endl<<endl;
          cout<<"0"<<a%12<<"0"<<b<<" hours"<<endl<<endl;
          }
    }

    else if (d=="PM"||d=="pm")
    {
          if (a>0&&b>=10)
          {
          cout<<a+12<<c<<b<<" "<<d<<endl<<endl;
          cout<<a+12<<b<<" hours"<<endl<<endl;
          }
          else if (a>0&&b<10)
          {
          cout<<a+12<<c<<"0"<<b<<" "<<d<<endl<<endl;
          cout<<a+12<<"0"<<b<<" hours"<<endl<<endl;
          }
    }

}



int main()
{
    int a,b;
    char c;
    string d;
    cout<<endl<<"This program shows time in 24 mode and shows it in 4 digits "<<endl;
    cout<<endl<<"********************************************************************************"<<endl;
    cout<<"The program will stop if hours>12 or minutes>59 "<<endl<<endl<<"or when you press any letter"<<endl<<endl;
    cout<<"********************************************************************************"<<endl<<endl;
    for (int i=0;i<=20&&i!='e';i++){
    cout<<"Please write time in form HH:MM PM or AM : ";
    cin>>a>>c>>b>>d;
    cout<<endl;
    if (a>12||b>59||a=='e')
    {
    cout<<"Now exit"<<endl;
    break;
    }
    time(a,b,c,d);
    }
}
