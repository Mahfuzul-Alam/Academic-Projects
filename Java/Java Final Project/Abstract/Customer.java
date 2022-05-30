import Abstract.*;
import Class.*;
public abstract class Customer{
	protected int customerId;
	public String customerName;
    private String customerPhoneNo;
	public Address address;
	private int roomNo;

public Customer()
	{

	}
public Customer(int customerId, String customerName, String customerPhoneNo, Address address, int roomNo)
	{
		this.customerId=customerId;
		this.customerName=customerName;
		this.customerPhoneNo=customerPhoneNo;
		this.address=address;
		this.roomNo=roomNo;
	}


		public void setcustomerPhoneNo(String customerPhoneNo)
	{
		this.customerPhoneNo=customerPhoneNo;
	}

	public String getcustomerPhoneNo()
	{
		return customerPhoneNo;
	}





	public void setroomNo(int roomNo)
	{
		this.roomNo=roomNo;
	}

	public int getroomNo()
	{
		return roomNo;
	}


void guestInfo()
{
	System.out.println("Here is the information of the guests ") ;
}


void checkIn()
{
	System.out.println("Here is the check in ") ;
}

public abstract void checkOut();
public abstract void generateBill();



void paysBill()
{
	System.out.println("Here is the bill pay section ") ;
}

void orderFoodItem()
{
	System.out.println("Here is the food order section ") ;
}





void showInfo()
	{
		
		System.out.println("Customer Id: "+customerId) ;
		System.out.println("Customer Name: "+customerName) ;
		System.out.println("Customer Phone No: "+customerPhoneNo) ;
		System.out.println("Address: House No:"+address.houseNo+ "Road No:"+address.roadNo + "Area:"+address.area) ;
		
	    System.out.println("Room No: "+roomNo) ;

	}
}
