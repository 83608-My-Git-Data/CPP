#include<iostream>

using  namespace std;

struct Date{

    
    int day;
    int month;
    int year;


    void initdate()
    {
        day=01;
        month=01;
        year=2001;

    }

    void acceptdate()
  {
    cout<<"enter the day  :";
    cin>>day;
    cout<<"enter the month  :";
    cin>>month;
    cout<<"enter the year  :";
    cin>>year;
  }

  void display()
  {
    cout<<"date:"<<day<<"-"<<month<<"-"<<year;
    
  }
  bool isleapyear()
  {
    if(year%4==0)
    {
      return true;
    }
    else{
      return false;
    }
  }
};




int main()
{
    Date d1;

    int choice;
    bool a;


  
do{
        cout<<"\n0.exit"<<endl;
        cout<<"1.initdate"<<endl;
        cout<<"2.acceptdate"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.bbolisleapyear";
        cout<<"enter the choice";
              cin>>choice;

        switch(choice)
        {
            case 0:
            cout<<"thankyou";
            break;

            case 1:
            d1.initdate();
            break;

            case 2:
            d1.acceptdate();
            break;

            case 3:
            d1.display();
            break;

            case 4:
           a= d1.isleapyear();
            if(a)
            {
              printf("true");
            }
            else
            {
              printf("false");
            }
            break;

            default:
            cout<<"wrong choice";
            break;


        }

}while(choice!=0);

    
    return 0;

}