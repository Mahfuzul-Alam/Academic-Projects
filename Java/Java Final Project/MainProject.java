
abstract class Owner{    
	protected  String OwnerId;
	public String OwnerName;
    private String OwnerPhoneNo;
	
	

public Owner()
	{

	}
public Owner(String OwnerId, String OwnerName, String OwnerPhoneNo)
	{
		this.OwnerId=OwnerId;
		this.OwnerName=OwnerName;
		this.OwnerPhoneNo=OwnerPhoneNo;
		
		
	}


		public void setOwnerPhoneNo(String OwnerPhoneNo)
	{
		this.OwnerPhoneNo=OwnerPhoneNo;
	}

	public String getOwnerPhoneNo()
	{
		return OwnerPhoneNo;
	}



void guestInfo()
{
	System.out.println("Here is the information of the guests ") ;
}


void Complain()
{
	System.out.println(" View Complain ") ;
}

public abstract void Bill();



void FoodItem()
{
	System.out.println("Here is the food order section ") ;
}


void showInfo()
	{
		
		System.out.println("OwnerId: "+OwnerId) ;
		System.out.println("OwnerName: "+OwnerName) ;
		System.out.println("OwnerPhoneNo: "+OwnerPhoneNo) ;
		
		
	   

	}
}


class Food
{
public String FoodName;
public String FoodID;


public Food( String FoodName,String FoodID)
{
this.FoodName=FoodName;
this.FoodID=FoodID;
}

void showinformation()
{
System.out.println("FoodName"+FoodName);
System.out.println("FoodID"+FoodID);
}
}

  abstract class Manager
{
	public String Name;
	public String id;
	public int PhoneNo;
	
	public Manager ()
	{
		
	}
	
	public Manager (String Name, String id, int PhoneNo)
	{
		this.Name = Name;
		this.id = id;
		this.PhoneNo= PhoneNo;
	}
	public abstract void PurchaseInventory ();
	{
	System.out.println("Here is the information of Purchase Inventory ") ;
	}
	public abstract void RecordComplaints ();
	{
	System.out.println("Here is the record of complaints ") ;
	}
	public abstract void ManageStaff ();
	{
	System.out.println("Here is the information of managing staffs ") ;
	}
	
}


class Inventory
{
	public String Type;
	public String Status;
	
	
	public Inventory ()
	{
		
	}
	
	public Inventory (String type, String status)
	{
		this.Type = Type;
		this.Status = Status;
	}
	
	public void UpdateInventory ()
	{
	System.out.println("Here is the information of Updated Inventory ") ;
	}
}

class Receptionist
{
	
int ID;
String name,address;
int telno;
	
 public void CheckRoomAvailaBility()
 {System.out.println("This will show the room avialability.");}
 
 public void BookRoom()
 {System.out.println("This section is for booking rooms.");}
 
 
  void AcceptCustomerFeedback()
 {System.out.println("This section is for accepting feedback from customers.");}
 
 
 public void GenerateBill()
 {System.out.println("This will genrate bill.");}
}

class Rooms
{
	String location;
	int room_no;
	
	
	public void GuestInfo()
	{
		System.out.println("This will show information of the guests.");
		
		
	}
	
	public void UpdateRoom()
	{
		System.out.println("This will be used to update the room.");
		
		
	}
	
	
	}
class Address{
	


	public String roadNo;
	public String houseNo;
	public String area;


public Address(){


}




public Address(String roadNo, String houseNo, String area)

{
		this.roadNo=roadNo;
		this.houseNo=houseNo;
		this.area=area;

}





}
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
  abstract class Customer{
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
class MainProject{


 public static void main(String[] args) {
		Address address= new Address("23", "34", "Basundhara r/a");
		Customer c1;
	    c1= new Bill(23, "isti", "0165746744", address, 56, 406);
	    c1.generateBill();
		c1.showInfo();
		c1.orderFoodItem();
		c1.checkOut();
		c1.paysBill();
		
	
	}
}