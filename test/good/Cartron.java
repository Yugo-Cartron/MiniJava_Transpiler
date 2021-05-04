class Aminata {
    public static void main(String[] args) { 
        System.out.println(new A().aminata(12));
    }
}

class A {
    public int aminata(int n) {
        int res;
        res = n;
        if(n>10){
            res = 0;
        }
        else {
            res = 1;
        }
        return res;
    }
}