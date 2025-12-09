// main.c
#include <stdio.h>
#include "functions.h"

int main() {
    // Test count_vowels
    char word1[] = "hello";
    printf("Vowels in %s: ", word1);
    count_vowels(word1);

    // Test reverse_string
    char word2[] = "hello";
    printf("Reverse of %s: ", word2);
    reverse_string(word2);

    // Test is_palindrome
    char word3[] = "madam";
    printf("Is %s a palindrome? %d\n", word3, is_palindrome(word3));

    char word4[] = "hello";
    printf("Is %s a palindrome? %d\n", word4, is_palindrome(word4));

    // Test is_prime
    printf("Is 7 prime? %d\n", is_prime(7));
    printf("Is 10 prime? %d\n", is_prime(10));

    // Test print_fibonacci
    printf("First 5 Fibonacci numbers: ");
    print_fibonacci(5);

    // Test find_max
    int arr1[] = {1, 2, 3, 4, 5};
    printf("Max of array: %d\n", find_max(arr1, 5));

    // Test sort_array
    int arr2[] = {5, 2, 8, 1, 9};
    printf("Sorted array: ");
    sort_array(arr2, 5);

    return 0;
}
