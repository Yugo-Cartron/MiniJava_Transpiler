class Aminata {
    public static void main(String[] args) { 
        System.out.println(new A().aminata(10));
    }
}

class A {
    public int aminata(int n) {

        int res;
        if( n == 10 || n == 3) {
            res = 1;
        }
        else {
            res =  0;
        } 
        return res;
    }
}