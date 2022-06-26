#include <iostream>
#include<vector>
using namespace std;

vector<int> test(vector<int> vec1)
{
    int n=vec1.size();
    if(n>0)
    {
        vec1[0]=10;
    }
    for(auto val:vec1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec2;
    vector<int> vec1;
    vec2.push_back(43);
    vec2.push_back(11);
    test(vec2);
    for(auto val:vec2){
        cout<<val<<" ";
    }
    return 0;
}
