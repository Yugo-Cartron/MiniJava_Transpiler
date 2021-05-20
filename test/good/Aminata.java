class Aminata {
    public static void main(String[] args) { 
        System.out.println(new A().aminata(3));
    }
}

class A {
    public int aminata(int n) {
        int i;
        int res;
        res = 0;
        for(i = 0; i<n; i+=1) {
            res += i;
        }
        return res;
    }
}