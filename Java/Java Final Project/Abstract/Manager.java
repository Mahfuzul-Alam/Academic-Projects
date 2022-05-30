import Abstract.*;
import Class.*;
public abstract class Manager
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