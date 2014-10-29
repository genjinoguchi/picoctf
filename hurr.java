public class hurr{

    public static void main(String[]args){
	int i = 1;
	int x = 271;
	int n = 5493;
	while( i<25) {
	    x = (x * i) %n;
	    i++;
	}
	System.out.println("flag_"+Math.abs(x));
    }
    

}
