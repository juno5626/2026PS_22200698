import java.util.Scanner;

import static java.lang.Math.*;


public class MainLab01 {
    public static void main(String[] args) {

        MainLab01 mainLab01 = new MainLab01();
        mainLab01.j004();
    }


    void j001(){
        int height,weight;
        double bmi;
        Scanner sc = new Scanner(System.in);

        height = sc.nextInt();
        weight = sc.nextInt();

        bmi = weight/(height*0.01*height*0.01);

        System.out.println("bmi = "+bmi);

    }

    void j002(){
        double c_degree, f_degree;
        Scanner sc = new Scanner(System.in);
        c_degree = sc.nextDouble();

        f_degree = c_degree *1.8 +32;

        System.out.println(f_degree);

    }
    void j003(){
        double m2_area, pyung_area;
        Scanner sc = new Scanner(System.in);
        m2_area = sc.nextDouble();

        pyung_area = m2_area/3.305;
        System.out.println(pyung_area);
    }
    void j004(){
        //두 좌표의 거리 계산
        double x1,x2,y1,y2;
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();

        double dis = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        System.out.println(dis);

    }

    void j005(){
        int month, day;
        int count=0;
        Scanner sc = new Scanner(System.in);

        month = sc.nextInt();
        day = sc.nextInt();

        for(int i = 1; i < month; i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                count=count+31;
            }else if(i==2){
                count=count+28;
            }else{
                count = count+30;
            }
        }
        count =count+day;

        System.out.println("day count = "+count);

    }
}