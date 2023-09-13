#pragma once
#include <string>

class Invoice {
public:
    Invoice(const std::string& partNumber, const std::string& partDescription, int quantity, int pricePerItem);
    
    void setPartNumber(const std::string& partNumber);
    void setPartDescription(const std::string& partDescription);
    void setQuantity(int quantity);
    void setPricePerItem(int pricePerItem);
    void setVATRate(double VATRate);
    void setDiscountRate(double discountRate);
    
    std::string getPartNumber() const;
    std::string getPartDescription() const;
    int getQuantity() const;
    int getPricePerItem() const;
    double getVATRate() const;
    double getDiscountRate() const;
    
    double getInvoiceAmount() const;

private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    int pricePerItem;
    double VATRate;
    double discountRate;
};
