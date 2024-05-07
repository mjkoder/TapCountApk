/*Vector are dynamic arrays that can be resized whenever an element is inserted or deleted.
Vector also have contiginious mmory location like arrays but their size can change 
dynamically according to the requirement of user.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Declaration of vector: Here we need not to give the size of vector

    vector <int> v(19); //Size declareed here 
                            //capacity=19 & size=19 (This is bcz initially it stores garbage value=0)
    vector <int> vex(5,7);  //capacity=5, size=5 , each value=7
    vector <int> vec;  //Size initially zero & capacity=0

    //size of vector
    cout<<"Initial size of vector v: "<<v.size()<<endl;
    cout<<"Initial size of vector vec: "<<vec.size()<<endl;

    //INITIALIZATION
    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(15);
    vec.push_back(21);
    vec.push_back(100);
    vec.push_back(111);

    cout<<endl;

    cout<<"Size of vector vec: "<<vec.size()<<endl;
    cout<<"Capacity of vector vec: "<<vec.capacity()<<endl;

    cout<<endl;

    //Accesing vector elements
    cout<<"Vector elements: "<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    //Modification of vector elements

    vec[4]=875;
    vec[3]=63;

    //Remove Element
    vec.pop_back();  //It removes only one element from the tail of the vector
                     //It reduces the size as one element is deleted
                     //But it does not affects th capacity of the vector


    cout<<"Modified Vector elements: "<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
}