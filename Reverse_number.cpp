 #include <iostream>
using namespace std;

int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 
int main() 
{ 
    int num = 4562; 
    cout << "Reverse of num is " << reverseDigits(num); 
    return 0; 
}
