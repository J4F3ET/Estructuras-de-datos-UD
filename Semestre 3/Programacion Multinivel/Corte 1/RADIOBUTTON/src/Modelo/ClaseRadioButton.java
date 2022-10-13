/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Modelo;

/**
 *
 * @author WBES_
 */
public class ClaseRadioButton {
    String texto ="";
    public String ingles(int activar){
        if(activar == 1)
            texto ="CAN";
        if(activar == 2)
            texto ="CAT";         
        if(activar == 3)
            texto ="FISH";         
        if(activar == 4)
            texto ="COW";         
        if(activar == 5)
            texto ="OWO";         
        
     return texto;   
    }   
}
