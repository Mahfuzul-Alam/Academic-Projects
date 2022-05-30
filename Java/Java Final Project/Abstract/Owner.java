import Abstract.*;
import Class.*;
public abstract class Owner{
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