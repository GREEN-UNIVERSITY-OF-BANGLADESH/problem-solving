package code;

import java.util.*;
public class battleship {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();
        sc.nextLine();
        while(t-->0){
            char id=sc.nextLine().charAt(0);
            String shipClass;
            switch(id){
                case 'B':
                case 'b':
                shipClass= "BattleShip";
                break;
                case 'C':
                case 'c':
                shipClass= "Cruiser";
                break;
                case 'D':
                case 'd':
                shipClass= "Destroyer";
                break;
                case 'F':
                case 'f':
                shipClass= "Frigate";
                break;
                default:
                shipClass= "Invalid ID";
            }
            System.out.println(shipClass);
        }
    } 
}
