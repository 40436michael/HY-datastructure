#include<bits/stdc++.h>
using namespace std;
/*

*/
// Using DP to calculate the Fibonacci sequence
vector<int> fibonacciDP(int N) {
    vector<int> fib(N + 1);

    // Initial conditions
    fib[0] = 0;
    fib[1] = 1;

    // Recursively calculate Fibonacci sequence
    for (int i = 2; i <= N; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib;
}

// Print the Fibonacci sequence
void printFibonacci(const vector<int>& fib) {
    cout << "The first " << fib.size() << " Fibonacci numbers are:" << endl;
    for (int i = 0; i < fib.size(); ++i) {
        cout << "The " << i << "th Fibonacci number is: " << fib[i] << endl;
    }
}

int main() {
    int N;
    cout << "Please enter N: ";
    cin >> N;

    // Calculate Fibonacci sequence using DP
    vector<int> fib = fibonacciDP(N);

    // Print the Fibonacci sequence
    printFibonacci(fib);

    return 0;
}