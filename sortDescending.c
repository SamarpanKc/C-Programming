// enter bid, title, price of 100 book in str. var in book and sort them in descending order on the basic of their title using pointer.

#include <stdio.h>
#include <string.h>

// Define the structure for a book
typedef struct {
    int bid;
    char title[100];
    float price;
} Book;

// Function to sort books in descending order of titles
void sortBooksByTitle(Book *books, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp((books + i)->title, (books + j)->title) < 0) {
                // Swap the books using pointers
                Book temp = *(books + i);
                *(books + i) = *(books + j);
                *(books + j) = temp;
            }
        }
    }
}

// Function to display the books
void displayBooks(Book *books, int n) {
    printf("\nBooks sorted by title (descending):\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Title: %s, Price: %.2f\n", (books + i)->bid, (books + i)->title, (books + i)->price);
    }
}

int main() {
    int n = 5; // Example size (can be set to 100)
    Book books[100]; // Array of books

    // Input books data
    printf("Enter details of %d books (ID, Title, Price):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &books[i].bid);
        printf("Enter Title: ");
        scanf(" %[^\n]%*c", books[i].title); // Read string with spaces
        printf("Enter Price: ");
        scanf("%f", &books[i].price);
    }

    // Sort the books by title in descending order
    sortBooksByTitle(books, n);

    // Display the sorted books
    displayBooks(books, n);

    return 0;
}
