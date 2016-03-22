#include <stdio.h>

struct emp{
    char name[80];
    struct{
        unsigned long long phone;
        char city[80];
        unsigned pin;
    } addr;
};

int main()
{
    struct emp e={"Sachin", {9999, "Pune", 421122}};
    struct emp *ep=&e;
    printf("Name\t: %s\nPhone\t: %llu\nCity\t: %s\nPin\t: %u\n", ep->name, ep->addr.phone, ep->addr.city, ep->addr.pin);
    return 0;
}
