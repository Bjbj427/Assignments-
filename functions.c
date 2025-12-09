// functions.c
#include <stdio.h>
#include "functions.h"

// 1. Count vowels
void count_vowels(char str[]) {
    int i = 0, count = 0;
    while(str[i] != '\0') {
        char c = str[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
        i++;
    }
    printf("%d\n", count);
}

// 2. Reverse string in place
void reverse_string(char str[]) {
    int i = 0, j = 0;
    while(str[j] != '\0') j++;
    j--;  // last character index
    while(i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", str);
}

// 3. Check palindrome
int is_palindrome(char str[]) {
    int i = 0, j = 0;
    while(str[j] != '\0') j++;
    j--;
    while(i < j) {
        if(str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

// 4. Check prime
int is_prime(int n) {
    if(n <= 1) return 0;
    for(int i=2; i*i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

// 5. Print Fibonacci sequence
void print_fibonacci(int n) {
    int a = 0, b = 1;
    for(int i=0; i<n; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// 6. Find max in array
int find_max(int arr[], int size) {
    int max = arr[0];
    for(int i=1; i<size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// 7. Sort array in ascending order
void sort_array(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // print sorted array
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

