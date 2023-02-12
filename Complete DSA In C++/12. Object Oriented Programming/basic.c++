#include<iostream>
using namespace std;

// creating class 
class Product{
    int id;
    string name;
    int mrp;
    int sellingPrice;
   
    public:

    // This is contructer 
    Product(int id, string name , int mrp , int sellingPrice){
        this->id = id;
        this->name = name;
        this->mrp = mrp;
        this->sellingPrice = sellingPrice;
    }

    // copy Constructor 
    Product(Product &X){
        id = X.id;
        // name = X.name;
        mrp = X.mrp;
        sellingPrice = X.sellingPrice;
    }

     // This are the setters who set the value of the private member 

    void setId(int id){
        this->id = id;
    }
    void setName(string name){
        this->name = name;
    }
    void setMrp(int mrp){
        if(mrp < 0){ 
            this->mrp = 0;   
        }else{
            this->mrp = mrp;
        }
    }
    void setSellingPrice(int sellingPrice){
        if(sellingPrice > mrp){
            this->sellingPrice = mrp;
        }else{
           this->sellingPrice = sellingPrice;
        }
    }

    // getters
    //  This are the functions who get and access the value of the private members 
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    int getMrp(){
        return mrp;
    }
    int getSellingPrice(){
        return sellingPrice;
    }
    void showDetails();
};

void Product ::showDetails(){
    cout << name << " \n";
    cout << id << " \n";
    cout << mrp << " \n";
    cout << sellingPrice << "\n";
}

int main ()
{
//  cout << "Object Orinted Programming";
    Product car(5,"Ajay",500,2000);
    // car.mrp = 100;
    // car.sellingPrice = 150;
    // cout << "ID OF Car" << car.id << "\n";
    // cout << "Name of Car " << car.name << "\n";
    // cout << " MRP OF Car " << car.mrp << "\n";
    // cout << "Selling Price " << car.sellingPrice << "\n";
    // car.setId(5);
    // car.setName("Ajay");
    // car.setMrp(1000);
    // car.setSellingPrice(5000);
    car.showDetails();
    Product car2(car);
    car2.showDetails();
    return 0;
}