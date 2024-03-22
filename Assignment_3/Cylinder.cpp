#include<iostream>
using namespace std;

class Cylinder {
    private:
    static const double pi;
    double radius;
    double height;

    public:

    Cylinder()  : radius(1), height(1) {}

    Cylinder(double radius, double height) : radius(this->radius), height(this->height) {}

    void displayVolume(){ cout<<"Volume Of Cylinder : "<< pi *radius * radius * height<<endl; }

    double getVolume() {  return pi*radius*radius*height; }

    void setRadius(double r){ radius = r; }
    void setHeight(double h) {height = h; }
    double getRadius() { return radius; }
    double getHeight() { return height; }



};
     const double Cylinder::pi = 3.14;

   int main() {

    Cylinder c1;
    Cylinder c2(20, 30);
    c1.displayVolume();
    c2.displayVolume();
    c2.setRadius(10);
    c2.setHeight(10);
    c2.displayVolume();
    int volumeOfCylinder = c2.getVolume();
    cout<<volumeOfCylinder<<endl;
   }  