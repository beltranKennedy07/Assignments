#include <iostream>


using namespace std;

class Product
{
public:
    void getproduct (void);
    void displayproduct (void);
    Product();



private:
    int ProductID;
    string ProductionName;
    int Price;
    string Manufacture;
    string ExDate;


};

Product::Product(void)
{
    cout<<"\t\t\tProducts:\n"<<endl;
}

void Product::getproduct(void)
{
    string ans;
    string choice;
    cout<<"Do you want to add more products:Yes/No?"<<endl;
    cin>>ans;

    if(choice=="Y"||"y"){
    cout<<"\n***************************\n";
    cout<<"ProductID:";
    cin>>ProductID;
    cout<<"Product Name:";
    cin>>ProductionName;
    cout<<"Price:";
    cin>>Price;
    cout<<"Manufacture:";
    cin>>Manufacture;
    cout<<"Expiration Date:";
    cin>> ExDate;
    }


}

void Product::displayproduct(void)
{

    cout<<"\n***************************\n";
    cout<<"\t\t\tProducts:\n"<<endl;
    cout<<"ProductID:"<<ProductID<<endl;
    cout<<"Product Name:"<<ProductionName<<endl;
    cout<<"Price:"<<Price<<endl;
    cout<<"Manufacture:"<<Manufacture<<endl;
    cout<<"Expiration Date:"<<ExDate<<endl;



}


int main()
{

    Product Product ;
    Product.getproduct();
    Product.displayproduct();

    return 0;
}
