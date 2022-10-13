/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Modelo;

import java.util.ArrayList;
import javax.swing.table.DefaultTableModel;

 public class ComboArrayList {
 int cantelementos;
 String posicion; 
 String titulos[]={"Posición Combo", "Producto","Cantidad","Precio"};
 DefaultTableModel modelo=new DefaultTableModel(null,titulos);
 ArrayList <InformacionCombo> combo;
 public ComboArrayList()
 {
 combo=new ArrayList();
 }
 public void setPosicion(String posicion) {
 this.posicion = posicion;
 }
 public String getPosicion() {
 return posicion;
 }
 public int getCantelementos() {
 return cantelementos;
 }
 public void setCantelementos(int cantelementos) {
 this.cantelementos = cantelementos;
 } 
 public DefaultTableModel adicionar(InformacionCombo objetonuevo)
 {
 combo.add(objetonuevo);
 int i;
 Object [] fila = new Object[4];
 cantelementos=0; 
 for (i=0; i<combo.size();i++)
 {
 switch(combo.get(i).getIndice())
 {
 case 0:
 posicion="UNO";
 break;
 case 1:
 posicion="DOS";
 break;
 case 2:
 posicion="TRES";
 break;
 case 3:
 posicion="CUATRO";
 break;
 case 4:
 posicion="CINCO";
 break;
 case 5:
 posicion="SEIS";
 break;
 } 
 fila[0] = posicion;
 fila[1] = combo.get(i).getProducto();
 fila[2] = combo.get(i).getCantidad();
 fila[3] = combo.get(i).getPrecio();
 cantelementos=cantelementos+combo.get(i).getCantidad(); 
 System.out.println(cantelementos);
 modelo.addRow(fila);
 } 
 return modelo;
 } 
}