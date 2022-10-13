/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Modelo;

import java.awt.Color;
import java.awt.Font;

/**
 *
 * @author WBES_
 */
public class ClaseCheckBox {
    Font fuente;
    Color color;
    public Font check1(int activar){
        if(activar ==1){
            fuente = new Font("Italics",Font.ITALIC,12);
        }
        else
        {
            fuente = new Font("Times New Roman",Font.BOLD,12);
        
        }
        return fuente;
    }
    public Color check2(int activar){
        if(activar ==1){
            color = Color.RED;
        }
        else
        {
            color = Color.BLACK;
        }
        return color;
    }
    public Color check3(int activar){
        if(activar ==1){
            color = Color.ORANGE;
        }
        else
        {
            color = Color.WHITE;
        }
        return color;
    }
}
