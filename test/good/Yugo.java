class Aminata {
    public static void main(String[] args) { 
        System.out.println(new A().aminata(10));
    }
}

class A {
    public int aminata(int n) {

        int res;
        res = 0;
        if( n == 10 ) {
            res = 1;
        }
        return res;
    }
}