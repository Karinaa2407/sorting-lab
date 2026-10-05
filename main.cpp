#include <iostream>
void bubble_sort(int values[], int size);
int main() {
 int values[] = {5, 1, 4, 2, 3};
 bubble_sort(values, 5);
 for (int i = 0; i < 5; ++i) {
 std::cout << values[i] << ' ';
 }
 std::cout << '\n';
}
