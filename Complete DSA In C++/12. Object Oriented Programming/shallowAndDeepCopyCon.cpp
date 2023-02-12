#include<bits/stdc++.h>
#include<string>
using namespace std;
class Product{
    int id ;
    char *name;
    int mrp;
    int sellingPrice;
    public:
    Product(int id , char *name, int mrp , int sellingPrice){
        this->id = id;
        this->mrp = mrp;
        this->sellingPrice = sellingPrice;
        name = new char[strlen(name)+1];
        strcpy(this->name , name);
    }

    // Product(Product &x){
    //     this->id = x.id;
    //     this->mrp = x.mrp;
    //     this->sellingPrice = x.sellingPrice;
    // }
    void showDetailes();
};

void Product ::showDetailes(){
    cout << "Name is " << name <<"\n";
    cout << "id is " << id << "\n";
    cout << "MRP is " << mrp << "\n";
    cout << "Selling Price "<< sellingPrice << "\n"; 
}
int main ()
{
    Product bike(1,"Ajay",1000,500);
    bike.showDetailes();
    // Product bike2(bike);

    // bike2.showDetailes();
    return 0;
}