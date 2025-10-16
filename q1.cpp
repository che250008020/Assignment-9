#include <iostream>
using namespace std;

struct Item{
	int id;
	float cost;
	
};
int main()
{
	Item arr[6]=	{
		{101, 45.50},
        {102, 75.00},
        {103, 60.25},
        {104, 30.00},
        {0,0},
        {0,0.0},
	};
	cout<<"Items with cost greater than 50 \n";
	for (int i=0;i<6;i++){
		if(Item[i].cost>50){
			cout<<"Item ID: "<<Item[i].id<<"cost "<<Item[i].cost<<endl;
		}
	} 
}
