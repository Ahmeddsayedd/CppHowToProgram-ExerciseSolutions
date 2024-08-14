#include <string>

class Invoice {
    public:
        Invoice(std::string, std::string, int, int);
        void setPartNumber(std::string PNum);
        void setPartDescription(std::string PDesc);
        void setQuantityPerItem(int Quan);
        void setPricePerItem(int Price);
        std::string getPartNumber();
        std::string getPartDescription();
        int getQuantityPerItem();
        int getPricePerItem();
        int getInvoiceAmount();

    private:
        std::string PartNumber;
        std::string PartDescription;
        int QuantityPerItem;
        int PricePerItem;
};
