/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Modelo;

import javax.swing.DefaultListModel;

/**
 *
 * @author Estudiante
 */
public class Palabras {
    String oracion;
    
   DefaultListModel modeloD=new DefaultListModel(); 
   DefaultListModel modeloI=new DefaultListModel();
   
   
   public Palabras(String cadena){
       this.oracion=cadena;
   }
   
   public DefaultListModel separarI(){
       String palabras[]=oracion.split(" ");
       
       for(int i=0;i<palabras.length;i++){
           if(palabras[i].contains("i")){
               modeloI.addElement(palabras[i]);
           }
       }
           
       return modeloI;
   }
   public DefaultListModel separarD(){
       
       String sCadenaInvertida="";
       
       for (int x=oracion.length()-1;x>=0;x--){
         sCadenaInvertida = sCadenaInvertida + oracion.charAt(x);  
       }
         
       String palabras[]=sCadenaInvertida.split(" ");
       for(int i=0;i<palabras.length;i++){
           if(palabras[i].endsWith("d")){
               modeloD.addElement(palabras[i]);
           }else{
               
           }
       }
       return modeloD;
   }
    
}
