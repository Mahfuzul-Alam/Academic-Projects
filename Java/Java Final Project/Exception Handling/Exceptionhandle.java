class Exceptionhandle
{ 
    public static void main(String args[]) 
    { 
        try { 
            String a = null ;
            System.out.println(Enter(0)); 
        } catch(NullPointerException e) { 
            System.out.println("Error"); 
        } 
    } 
} 