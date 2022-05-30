import Abstract.*;
import Class.*;
class Bill extends Customer{

	private int billNo;
	




	public Bill(){



	}

	public Bill(int customerId, String customerName, String customerPhoneNo, Address address, int roomNo, int billNo  )
	{
        super(customerId, customerName, customerPhoneNo, address, roomNo);
		this.billNo=billNo;
	
	
	

	}

	public void setbillNo(int billNo)
	{
		this.billNo=billNo;
	}

	public int getbillNo()
	{
		return billNo;
	}

	public void generateBill()
	{
		System.out.println("This will generate the bill ") ;
	}



	void showInfo()
	{
		super.showInfo();
		System.out.println("Bill No: "+billNo) ;
		
	}

		public void checkOut()
	{
		System.out.println("If payment is confirm then you can check out. Thank you ") ;
	}



	void orderFoodItem()
{
	System.out.println("Here is the food items bill ") ;
}



		 void paysBill()
	{
		System.out.println("Payment completed, now you can check out. Thank you ") ;
	}



}