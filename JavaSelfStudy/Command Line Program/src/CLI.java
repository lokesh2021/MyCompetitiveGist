public class CLI {
    public static void main(String[] args) {
        int len = args.length;
        if(len==0) System.out.println("No Inputs provided");
        else{
            System.out.println("List of Arguments are:");
            for (int i = 0; i < len; i++) {
                System.out.println(args[i]);
            }
        }
    }
}
