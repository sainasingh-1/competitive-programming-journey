#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long array[n];
    for (long long i = 0; i<n; i++)
    {
        cin >> array[i];
    }
    long long total_sum = 0;
    int add_sum = 0;
    for (int l=0;l<n-1;l++){
        if (array[l] > array[l+1])
        {
            add_sum = array[l]-array[l+1];
            total_sum += add_sum;
            add_sum = 0;
            array[l+1] = array[l];
        }
 
 
    }
    cout << total_sum << endl;
  }
