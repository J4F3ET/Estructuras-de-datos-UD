/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Modelo;
import java.util.ArrayList;
import javax.swing.table.DefaultTableModel;

/**
 *
 * @author WBES_
 */
public class InformacionCombo { 
 String producto;
 int cantidad, precio, indice;
 public InformacionCombo()
 { }
 public String getProducto() {
 return producto;
 }
 public void setProducto(String producto) {
 this.producto = producto;
 }
 public int getCantidad() {
 return cantidad;
 }
 public void setCantidad(int cantidad) {
 this.cantidad = cantidad;
 }
 public int getPrecio() {
 return precio;
 }
 public void setPrecio(int precio) {
 this.precio = precio;
 }
 public int getIndice() {
 return indice;
 }
 public void setIndice(int indice) {
 this.indice = indice;
 } 

}