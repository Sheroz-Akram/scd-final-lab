#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ItemCost {
public:
	int quantity;
	double price;
	void display(){
		cout << ", Quantity:" << quantity << ", Price: " << price << endl;
	}
}
class Product {
public:
	string name;
	ItemCost itemTotalCost;
	Product(string name, ItemCost itemCost): name(name), itemTotalCost(itemCost) {}
	void displayProduct(){
		cout << "Name: " << name;
		itemTotalCost.display();
	}
}

class InventoryStore{
public:
            vector<Product> products; 
             void addProduct(Product newProduct){
                      products.push_back(newProduct);
             }
}

class DisplayInventory{
public:
            void display_inventory(vector<Product> * products){
                     cout << “Inventory:\n”;
                     for(auto &product : products){
                               product.displayProduct();
                     }
            }

}

int main(){
	Inventory inventory;
	Product p1 = Product("item1, ItemCost(10, 5.99));
	Product p2 = Product("item2, ItemCost(20, 10.99));
	Product p3 = Product("item3, ItemCost(5, 15.99));
	inventory.addProduct(p1);
	inventory.addProduct(p2);
	inventory.addProduct(p3);
	
	DisplayInventory displayInv();
	displayInv.display_inventory(inventory.products);
}
