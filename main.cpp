#include <iostream>

using namespace std;

int main()
{
    int c ,C ;
    int arr[5][5] = {0} ;
    for(int i = 0 ; i<5 ; i++)
        for(int j = 0 ; j<5 ; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                c = i;
                C = j;
            }
        }

    cout<<abs(c-2)+abs(C-2);



    return 0;
}
