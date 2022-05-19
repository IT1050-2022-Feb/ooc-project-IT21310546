#include <iostream>
#include "bill.h"
#include "order.h"
class payment{
  protected:
    int paymentID;
    double totalPayment;
    Bill*bill;
    Order*ord;

  public:
    payment();
    payment(int pPayemtID,double tTotalpayment,Bill*cbill, Order*cord );
    void setpaymentdetails(int pPayemtID,double tTotalpayment);
    void displaypaymentDetails();
    void confirmpaymentDetails();
    ~payment();
};