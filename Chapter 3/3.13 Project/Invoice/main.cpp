#include <iostream>
#include "Invoice.h"

using namespace std;

int main() {
    Invoice Invoice1("A1324G", "Food", 10, 25);
    Invoice Invoice2("SS4627F", "Widget", -1, 12);

    Invoice1.setPartNumber("KI3882");
    Invoice1.setPartDescription("Electronics");
    Invoice1.setQuantityPerItem(-3);
    Invoice1.setPricePerItem(20);

    Invoice2.setPartNumber("RYSGF3332");
    Invoice2.setPartDescription("Cars");
    Invoice2.setQuantityPerItem(30);
    Invoice2.setPricePerItem(5);

    cout << "The PartNumber for object 1 is: " << Invoice1.getPartNumber() << " with description " << Invoice1.getPartDescription()
         << " has Quantity equal: " << Invoice1.getQuantityPerItem() << " with price per item equal: " << Invoice1.getPricePerItem()
         << ", and the Invoice Amount is: " << Invoice1.getInvoiceAmount() << endl;

    cout << "The PartNumber for object 2 is: " << Invoice2.getPartNumber() << " with description " << Invoice2.getPartDescription()
         << " has Quantity equal: " << Invoice2.getQuantityPerItem() << " with price per item equal: " << Invoice2.getPricePerItem()
         << ", and the Invoice Amount is: " << Invoice2.getInvoiceAmount() << endl;

    return 0;
}
