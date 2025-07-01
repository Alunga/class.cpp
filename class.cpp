#include <iostream>
using namespace std;

class Fruit{
public:
string shape;
string taste;
float weight;
int size;
void eat(){
}
};

int main(){
Fruit banana;
banana.shape="cresent";
banana.taste="sweet";
banana.weight=6.5;
banana.size=3;

cout<<banana.shape<<"\n";
cout<<banana.taste<<"\n";
cout<<banana.weight<<"\n";
cout<<banana.size;

return 0;
}
