//VECTORS

#include<iostream>
#include<vector>

using namespace std;


template <class T>
void display(vector<T> &v)
{
    cout<<"displaying this vector "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
//        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    //ways to create a vector
    vector<int> vec1;//0 length vector
    int element,size=5;
    /* cout<<"enter the size of the vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the element to add to this vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    } */
//    vec1.pop_back();
    /* display(vec1);
    vector<int> :: iterator iter =vec1.begin();
    vec1.insert(iter+1,50,566); */

    vector<char> vec2(4);//4 element character vector
   /*  vec2.push_back('3');
    display(vec2); */

   /*  vector<char> vec3(vec2);//4 element character vector from vec2
    display(vec3); */
    vector<int> vec4(4,13);//6 element vector of 3
    display(vec4);
    cout<<vec4.size();


    
    

    return 0;
}