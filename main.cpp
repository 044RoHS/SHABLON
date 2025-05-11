#include"Shablon.h"

using namespace std;

int main()
{
    int a;
    cout << "[IN]: ";
    cin >> a;
    cout<<endl;
    int b = Squaring<int>(a);
    cout << "[OUT]: "<< b ;
    cout<<endl;

    std::vector<int>vec = {1,2,4,5,6,10};

    std::vector<int>res_vec = Squaring(vec);
    for (int val : res_vec)
    {
        cout << val << " ";
    }
}
