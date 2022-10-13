package Contralor;

import Modelo.Clientes;
import Modelo.Modelo;
import Vista.Vista;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.table.DefaultTableModel;

public class Controlador implements ActionListener {
    Modelo objModelo;
    Vista objVista;
    Clientes objClientes;
    String nombre,identificacion,correo;
    int edad;
    DefaultTableModel modelo = new DefaultTableModel();
    public Controlador(){
        objVista = new Vista();
        //objModelo = new Modelo();
        objClientes = new Clientes();
        objVista.setVisible(true);
        objVista.getBoton1().addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getBoton1()){
            nombre = objVista.getIn1().getText();
            identificacion = objVista.getIn2().getText();
            edad = Integer.parseInt(objVista.getIn3().getText());
            correo = objVista.getIn4().getText();
            objModelo = new Modelo();
            objModelo.setNombre(nombre);
            objModelo.setIdentificacion(identificacion);
            objModelo.setEdad(edad);
            objModelo.setCorreo(correo);
            modelo = (DefaultTableModel) objVista.getjTable1().getModel();
            int filas = objVista.getjTable1().getRowCount();
            for(int i = 0; filas > i;i++)
                modelo.removeRow(0);
            modelo = objClientes.adicionar(objModelo);
            objVista.getjTable1().setModel(modelo);
            objVista.getIn1().setText("");
            objVista.getIn2().setText("");
            objVista.getIn3().setText("");
            objVista.getIn4().setText("");
            objVista.getIn1().requestFocus();
            objVista.getOu1().setText(""+objClientes.getPromedio());//cuidado con los nombres de las clases 
            
        }
    }        
}
