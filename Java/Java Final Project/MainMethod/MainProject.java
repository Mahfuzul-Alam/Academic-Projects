class MainProject
{


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