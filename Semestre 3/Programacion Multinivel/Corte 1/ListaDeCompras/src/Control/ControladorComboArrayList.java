/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Control;
import Modelo.ComboArrayList;
import Modelo.InformacionCombo;

import Vista.FormularioComboArrayList;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.table.DefaultTableModel;

public class ControladorComboArrayList implements ActionListener{
FormularioComboArrayList objetoVista;
ComboArrayList objetoModelo;
InformacionCombo objetoCombo;
DefaultTableModel modelo=new DefaultTableModel();
 public ControladorComboArrayList() {
 objetoVista=new FormularioComboArrayList();
 objetoModelo=new ComboArrayList();
 objetoVista.setVisible(true);
 objetoVista.getBoton().addActionListener(this); 
 }
@Override
 public void actionPerformed(ActionEvent e) {
 if(e.getSource()==objetoVista.getBoton()) {
 objetoCombo=new InformacionCombo();
 objetoCombo.setProducto(objetoVista.getListaproductos().getSelectedItem().toString());
 objetoCombo.setIndice(objetoVista.getListaproductos().getSelectedIndex());
 objetoCombo.setCantidad(Integer.parseInt(objetoVista.getIn1().getText()));
 objetoCombo.setPrecio(Integer.parseInt(objetoVista.getIn2().getText()));
 modelo=(DefaultTableModel) objetoVista.getjTable1().getModel();
 int filas=objetoVista.getjTable1().getRowCount();
 for (int i = 0;filas>i; i++)
 modelo.removeRow(0);
 modelo=objetoModelo.adicionar(objetoCombo);
 objetoVista.getjTable1().setModel(modelo);
 objetoVista.getIn1().setText("");
 objetoVista.getIn2().setText("");
 objetoVista.getOut1().setText(""+objetoModelo.getCantelementos()); 
 } 
 } 
}
