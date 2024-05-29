class ABC {
    int a;
    int b,c;
    ABC(){
        a = 10;
        b = 20;
        c = a + b;
        System.out.println("Sum is:"+c);
    }
    ABC(int a , int b){
        this.a = a;
        this.b = b;
        int r = a - b;
        System.out.println("SUB IS:"+r);
    }
}
class BBC{
 	public static void main(String[] args){
		    int p = Integer.parseInt(args[1]);
            ABC ob = new ABC();
          	int r= Integer.parseInt(args[2]);
		    ABC ob1 = new ABC(10,20);
	}
}
