#include "Invoice.h"

Invoice::Invoice(const std::string& partNumber, const std::string& partDescription, int quantity, int pricePerItem)
    : partNumber(partNumber), partDescription(partDescription), quantity(quantity), pricePerItem(pricePerItem), VATRate(0.20), discountRate(0.0) {}

void Invoice::setPartNumber(const std::string& partNumber) {
    this->partNumber = partNumber;
}

void Invoice::setPartDescription(const std::string& partDescription) {
    this->partDescription = partDescription;
}

void Invoice::setQuantity(int quantity) {
    if (quantity > 0) {
        this->quantity = quantity;
    }
}

void Invoice::setPricePerItem(int pricePerItem) {
    if (pricePerItem > 0) {
        this->pricePerItem = pricePerItem;
    }
}

void Invoice::setVATRate(double VATRate) {
    this->VATRate = VATRate;
}

void Invoice::setDiscountRate(double discountRate) {
    this->discountRate = discountRate;
}

std::string Invoice::getPartNumber() const {
    return partNumber;
}

std::string Invoice::getPartDescription() const {
    return partDescription;
}

int Invoice::getQuantity() const {
    return quantity;
}

int Invoice::getPricePerItem() const {
    return pricePerItem;
}

double Invoice::getVATRate() const {
    return VATRate;
}

double Invoice::getDiscountRate() const {
    return discountRate;
}

double Invoice::getInvoiceAmount() const {
    double amount = quantity * pricePerItem;
    amount += amount * VATRate;
    amount -= amount * discountRate;
    return amount;
}
