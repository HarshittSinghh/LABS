class ABC {
    int a,b;
    float c;

    ABC() {
        a = 0;
        b = 0;
        c = a + b;
        System.out.println(c);
    }

    ABC(int p, int q) {
        a = p;
        b = q;
        c = a + b;
        System.out.println(c);
    }

    ABC(int p, int q, float m) {
        a = p;
        b = q;
        c = a + b + m;
        System.out.println(c);
    }
}

class BBC{
    public static void main(String args[]) {
            int a = Integer.parseInt(args[0]);
            int b = Integer.parseInt(args[1]);
            float c= Float.parseFloat(args[2]);
            ABC obj = new ABC(a, b, c);
    }
}
