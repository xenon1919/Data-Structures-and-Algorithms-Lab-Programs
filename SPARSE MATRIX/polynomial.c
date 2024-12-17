#include <stdio.h>
#include <stdlib.h>

// Definition of a term in a polynomial
struct Term {
    int coeff;
    int exp;
};

// Definition of a polynomial
struct Poly {
    int n;           // Number of terms in the polynomial
    struct Term *terms; // Array of terms
};

// Function to create a polynomial by taking input from the user
void create(struct Poly *p) {
    int i;
    printf("Number of terms? ");
    scanf("%d", &p->n);

    // Allocate memory for the terms
    p->terms = (struct Term*)malloc(p->n * sizeof(struct Term));

    printf("Enter terms (coefficient and exponent):\n");
    for(i = 0; i < p->n; i++) {
        scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
    }
}

// Function to display a polynomial
void display(struct Poly p) {
    int i;
    for(i = 0; i < p.n; i++) {
        if (i > 0 && p.terms[i].coeff > 0) {
            printf("+"); // Print a plus sign before positive terms
        }
        printf("%dx^%d", p.terms[i].coeff, p.terms[i].exp);
    }
    printf("\n");
}

// Function to add two polynomials
struct Poly *add(struct Poly *p1, struct Poly *p2) {
    int i, j, k;
    struct Poly *sum;

    // Allocate memory for the sum polynomial
    sum = (struct Poly*)malloc(sizeof(struct Poly));
    sum->terms = (struct Term *)malloc((p1->n + p2->n) * sizeof(struct Term));

    i = j = k = 0;

    // Add the terms of both polynomials
    while(i < p1->n && j < p2->n) {
        if(p1->terms[i].exp > p2->terms[j].exp) {
            sum->terms[k++] = p1->terms[i++];
        } else if(p1->terms[i].exp < p2->terms[j].exp) {
            sum->terms[k++] = p2->terms[j++];
        } else {
            // If the exponents are equal, add the coefficients
            sum->terms[k].exp = p1->terms[i].exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }

    // Copy remaining terms from p1, if any
    for(; i < p1->n; i++) {
        sum->terms[k++] = p1->terms[i];
    }

    // Copy remaining terms from p2, if any
    for(; j < p2->n; j++) {
        sum->terms[k++] = p2->terms[j];
    }

    sum->n = k;
    return sum;
}

int main() {
    struct Poly p1, p2, *p3;

    // Create the first polynomial
    create(&p1);

    // Create the second polynomial
    create(&p2);

    // Add the two polynomials
    p3 = add(&p1, &p2);

    // Display the polynomials
    printf("\nFirst polynomial: ");
    display(p1);

    printf("\nSecond polynomial: ");
    display(p2);

    printf("\nSum of polynomials: ");
    display(*p3);

    // Free allocated memory
    free(p1.terms);
    free(p2.terms);
    free(p3->terms);
    free(p3);

    return 0;
}
