#include <iostream>
using namespace std;

int main(){
 
    int n;
    cin >> n;
 
    if (n<1){return 0;}
    if (n%4==1 || n%4==2)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
 
        long long x= 0;
        if (n%4==0)
        {
 
            long long group1[n/2];
            long long group2[n/2];
            for (int i=1; i<n; i=i+4)
            {
                group1[x]=i;
                group1[x+1]=i+3;
                group2[x]=i+1;
                group2[x+1]=i+2;
                x=x+2;
            }
            cout << n/2 << "\n";
            for (int element : group1) {
                std::cout << element << " ";
            }
            cout << "\n";
            cout << n/2 << "\n";
            for (int element : group2)
            {
                std::cout << element << " ";
            }
        }
        else if (n%4==3)
        {
 
            long long z = (n+1)/2;
            long long group1[z];
            long long group2[z-1];
            x=2;
            group1[0]=1;
            group1[1]=2;
            group2[0]=3;
            long long x1 = 2;
            long long x2 = 1;
 
            for (int i = 4; i <= n; i = i + 4)
            {
                group1[x1] = i;
                group1[x1 + 1] = i + 3;
                group2[x2] = i + 1;
                group2[x2 + 1] = i + 2;
                x1 = x1 + 2;
                x2 = x2 + 2;
            }
 
            cout << z << "\n";
            for (int element : group1) {
                std::cout << element << " ";
            }
            cout << "\n";
            cout << z-1 << "\n";
            for (int element : group2)
            {
                std::cout << element << " ";
            }
        }
 
    }
 
}
}
