package GetSet;

public class GetterSetter {
    private int x;
    public void setX(int x){
        this.x = x;
    }
    public int getX(){
        return x;
    }
    public static void main(String[] args){
        GetterSetter x = new GetterSetter();

        x.setX(5);
        System.out.println(x.getX());
    }
}