#include<iostream>
using namespace std;

class Product {
    private : 
    int id;
    string title;
    double price;
    double discount;

    public :
    virtual void accept() {
        cout<<"id is : ";
        cin>>id;
        cout<<"title is : ";
        cin>>title;
        cout<<"price is : ";
        cin>>price;
    }

    virtual void display() {
        cout<<"id is = "<<id<<endl;
        cout<<"title is = "<<title<<endl;
        cout<<"price is = "<<price<<endl;
    }

    double getPrice() {
        return this->price;
    }
    void setPrice(double discount) {
        this->discount = discount;
    }


};

class Book : public Product {

    private : 
    string author;

    public : 
    void accept() {
        Product::accept();
        cout<<"Enter author name";
        cin>>author;
         Product::setPrice(0.1);  
    }

    void setPrice() {


    }

    virtual void display() {
        cout<<"Author is - "<<author<<endl;
        Product::display();

    }  

};

class Tape : public Product {

    private : 
    string artist;

    public : 
    void accept() {
        Product::accept();
        cout<<"artist is : ";
        cin>>artist;
        Product::setPrice(0.05);
       
        

    }
    virtual void display () {
        cout<<"artist is : "<<artist<<endl;
        Product::display();
    }

    

};

 int main () {

    Product *arr[3];
    int index = 0;
    int choice;
    int totalPrice = 0;
    do {
        cout<<"0 : Exit"<<endl;
        cout<<"1. Buy tape"<<endl;
        cout<<"2. Buy book"<<endl;
        
        cout<<"3. Total Price"<<endl;
        cin>>choice;

        switch(choice) {
            case 0 :
            cout<<"Thank you for visiting candyShop"<<endl;
            for(int i = 0; i < index; i ++){
                delete arr[i];
                arr[i] = NULL;
            }
            break;

            case 1:
            if(index < 3){ 
            arr[index] = new Tape;
            arr[index]->accept();
            index ++;
            }else{
                cout<<"out of storage"<<endl;
            }
            break;

            case 2:
            if(index < 3){
            arr[index] = new Book;
            
            arr[index]->accept();
            index ++;
            }else{
                cout<<"out of storage"<<endl;
            }
            break;

           

            case 3:
            
            for (int i = 0; i < index; i ++){
                totalPrice += arr[i]->getPrice();

            }
            cout<<totalPrice<<endl;
            break;

            default :
            cout<<"Enter wrong choice"<<endl;


        }
    } while( choice != 0);



    return 0;

 }  