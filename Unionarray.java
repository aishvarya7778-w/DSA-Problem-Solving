import java.util.*;
public class Unionarray {
    public static void main(String [] args){
    int [] a = {1,2,3,5,6,7};
    int [] b = {2,4,6,8,9};
    int n1 =a.length;
    int n2 =b.length;
    int i =0; int j=0;

    ArrayList<Integer> unionarray = new ArrayList<>();

    while(i<n1 &&j<n2){
        if(a[i]<=b[j]){
            if(unionarray.size()==0||unionarray.get(unionarray.size()-1)!=a[i]){
                unionarray.add(a[i]);
            }
            i++;
        }else{
            if(unionarray.size()==0||unionarray.get(unionarray.size()-1)!=b[j]){
                unionarray.add(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(unionarray.size()==0||unionarray.get(unionarray.size()-1)!=b[j]){
            unionarray.add(b[j]);
        }
        j++;
    }
    while(i<n1){
        if(unionarray.size()==0||unionarray.get(unionarray.size()-1)!=a[i]){
            unionarray.add(a[i]);
        }
        i++;
    }
    System.out.println(unionarray);

}
}