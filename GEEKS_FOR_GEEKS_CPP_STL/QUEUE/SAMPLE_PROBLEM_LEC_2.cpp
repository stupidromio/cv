// #include <bits/stdc++.h>
// #include <iostream>
// #include <queue>
// using namespace std;

// // function to check if a number has digits in set {5, 6}
// // bool hasValidDigits(int num)
// // {
// //     while (num > 0)
// //     {
// //         int digit = num % 10;
// //         if (digit != 5 && digit != 6)
// //             return false;
// //         num /= 10;
// //     }
// //     return true;
// // }

// // function to generate and print numbers with digits in {5, 6}
// void generateNumbers(int n)
// {
//     // create an empty queue
//     std::queue<int> q;

//     // enqueue first number
//     q.push(5);
//     q.push(6);

//     // run a loop to generate and print numbers
//     for (int i = 0; i < n; i++)
//     {
//         // dequeue the front element from the queue
//         int num = q.front();

//         q.pop();

//         // print the dequeued element
//         std::cout << num << ", ";

//         // enqueue the next numbers by appending '5' and '6'
//         q.push(num * 10 + 5);
//         q.push(num * 10 + 6);
//         // cout << q.front() << " " << q.back() << "\n";
//     }
// }

// // Driver function
// int main()
// {
//     int n;
//     cin >> n;
//     // generate and print numbers
//     generateNumbers(n);

//     return 0;
// }
// =============================================================================
// CPP program to generate n number
// using digits 5 and 6
#include <iostream>
#include <queue>
using namespace std;

// Function to generate numbers
void printFirstN(int n)
{
    // Sample queue
    queue<string> q;

    // Pushing elements 5 and 6 to
    // the queue
    q.push("5");
    q.push("6");

    // for loop to generate n numbers
    for (int count = 0; count < n; count++)
    {
        // Getting the root node
        string curr = q.front();

        // Displaying the number
        cout << curr << " ";

        // Popping out the element
        q.pop();

        // Pushing element by appending 5
        // on left side
        q.push(curr + "5");

        // Pushing element by appending 6
        // on right side
        q.push(curr + "6");
    }
}

// Driver Method
int main()
{
    int n = 10;
    printFirstN(n);
    return 0;
}