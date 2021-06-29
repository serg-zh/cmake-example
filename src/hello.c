#include <stdio.h>
#include <pci/pci.h>
#include <lib.h>

struct pci_access pci_acc;

int main(int argc, char** argv)
{
    int v = function();
    printf("Hello! %d\n", v);

    return 0;
}