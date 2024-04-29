public class BoxandUnbox {
    public static void main(String[] args)
    {
        //Boxing
        Integer x = new Integer(45);
        Integer y = new Integer(52);
        //UnBoxing
        int z=y;
        System.out.println("Boxed Value : "+x);
        System.out.println("UnBoxed Value : "+z);
    }
}
