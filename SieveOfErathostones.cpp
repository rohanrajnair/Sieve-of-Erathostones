#include <iostream>
using namespace std;

void FlagMultiples(bool *&arr, int a, int num){
    int i = 2;
    int tmp = i*a;
    while (tmp <= num){
        arr[tmp-1] = true;
        ++i;
        tmp = i*a;
    }
}


void SieveOfErathostones(int num){
    bool* visited = new bool[num];
    for (int i = 0; i < num; ++i){
        visited[i] = false;
    }
    for (int i = 1; i < num; ++i){
        if (visited[i] == false){
            cout << i+1 << " ";
            FlagMultiples(visited, i+1, num);
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;
    cout << "Prime numbers <= " << num << ": ";
    SieveOfErathostones(num);
    return 0;
}
