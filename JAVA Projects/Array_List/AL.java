package Array_List;

import java.util.ArrayList;
import java.util.Collections;

public class AL {
    AL(){
        ArrayList<Integer> datas = new ArrayList<>();
        datas.add(0);
        datas.add(1);
        datas.add(2);
        for (Integer val : datas) {
            System.out.println(val);

        }
        System.out.println(datas.get(2));
        datas.add(3,3);
        System.out.println(datas.get(3));
        datas.set(1,5);
        System.out.println(datas.get(1));
        datas.remove(0);
        System.out.println(datas.get(0));
        System.out.println(datas.size());
        Collections.sort(datas);
        System.out.print(datas);
    }
    public static void main(String[] args) {
        AL List = new AL();
    }
}
