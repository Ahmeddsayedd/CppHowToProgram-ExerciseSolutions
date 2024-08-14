#include "Invoice.h"

Invoice::Invoice(std::string PNum, std::string PDesc, int Quan, int Price)

// PartNumber and PartDescription are initialized directly using the initialization list
// because they don't require validation. QuantityPerItem and PricePerItem, on the other hand,
// are initialized inside the constructor body since they need to be validated to ensure
// non-negative values before assignment.

    : PartNumber(PNum), PartDescription(PDesc)
{
    if (Quan < 0) {
        QuantityPerItem = 0;
    } else {
        QuantityPerItem = Quan;
    }

    if (Price < 0) {
        PricePerItem = 0;
    } else {
        PricePerItem = Price;
    }
}

void Invoice::setPartNumber(std::string PNum) {
    PartNumber = PNum;
}

void Invoice::setPartDescription(std::string PDesc) {
    PartDescription = PDesc;
}

void Invoice::setQuantityPerItem(int Quan) {
    // Validate the input to ensure that QuantityPerItem is not negative.
    // If the provided quantity is less than 0, set it to 0 to avoid invalid data.
    QuantityPerItem = (Quan < 0) ? 0 : Quan;
}

void Invoice::setPricePerItem(int Price) {
    // Validate the input to ensure that PricePerItem is not negative.
    // If the provided price is less than 0, set it to 0 to avoid invalid data.
    PricePerItem = (Price < 0) ? 0 : Price;
}

std::string Invoice::getPartNumber() {
    return PartNumber;
}

std::string Invoice::getPartDescription() {
    return PartDescription;
}

int Invoice::getQuantityPerItem() {
    return QuantityPerItem;
}

int Invoice::getPricePerItem() {
    return PricePerItem;
}

int Invoice::getInvoiceAmount() {
    return QuantityPerItem * PricePerItem;
}
