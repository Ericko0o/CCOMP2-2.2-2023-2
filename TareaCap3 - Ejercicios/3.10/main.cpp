// main.cpp
#include <iostream>
#include "Invoice.h"

int main() {
    Invoice invoice("12345", "Widget", 10, 50);

    std::cout << "Part Number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part Description: " << invoice.getPartDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price Per Item: " << invoice.getPricePerItem() << std::endl;

    invoice.setDiscountRate(0.10);

    double totalAmount = invoice.getInvoiceAmount();
    std::cout << "Total Amount: " << totalAmount << std::endl;

    return 0;
}
