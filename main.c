#include <stdio.h>

int main() {
    int a, b, *p_a, *p_b, sum;

    p_a = &a; // Uloží do p_a adresu proměnné a
    *p_a = 15; // Uloží hodnotu 15 na adresu v p_a

    p_b = &b;
    *p_b = 20;

    sum = *p_a + *p_b;

    printf("Hodnota p_a (adresa a): [%p]\nhodnota proměnné *p_a: %d\nadresa ukazatele p_a: [%p]\nadresa a: [%p]\n\n",
           p_a, *p_a, &p_a, &a);
    printf("Hodnota p_b (adresa b): [%p]\nhodnota proměnné *p_b: %d\nadresa ukazatele p_b: [%p]\nadresa b: [%p]\n\n",
           p_b, *p_b, &p_b, &b);
    printf("Součet: %d (uloženo na adrese [%p])\n", sum, &sum);
    return 0;
}
