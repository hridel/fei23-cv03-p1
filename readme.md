# Příklad 1 - ukazatel
Mějme `int a, b, *p_a, *p_b`. Uložte do ukazatelů adresy statických proměnných a dále pracujte již pouze pomocí ukazatelů.

- Uložte do proměnných hodnoty.
- Vypište hodnotu statické proměnné (přes ukazatel),
- hodnotu ukazatele (tedy adresu statické proměnné, kterou obsahuje), 
- adresu ukazatele (adresa proměnné typu ukazatel), 
- adresu statické proměnné. 
- Vypište součet a+b (přes ukazatele) 

---

### nápověda

```c
    int a = 10, b = 20; // deklarace a inicializace statických proměnných
    int *p_a = &a, *p_b = &b; // deklarace a inicializace ukazatelů na proměnné

    // vypsání hodnot a adres na obrazovku pomocí ukazatelů
    printf("Hodnota promenne a: %d\n", *p_a);
    printf("Hodnota promenne b: %d\n", *p_b);

    printf("Hodnota ukazatele p_a: %p\n", p_a);
    printf("Hodnota ukazatele p_b: %p\n", p_b);

    printf("Adresa ukazatele p_a: %p\n", &p_a);
    printf("Adresa ukazatele p_b: %p\n", &p_b);

    printf("Adresa promenne a: %p\n", &a);
    printf("Adresa promenne b: %p\n", &b);
```