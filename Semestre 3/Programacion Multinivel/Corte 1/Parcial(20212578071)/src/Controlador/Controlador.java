package Controlador;

import Modelo.Modelo;
import Vista.Formulario;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
//import javax.swing.event.ListSelectionEvent; ESTAS SON LIBRERIAS PARA SELECCIONAR UNA LISTA O UN COMBO BOX
//import javax.swing.event.ListSelectionListener; DEPENDIENDO DEL INDICE PODEMOS DETERMINAR LOS EVENTOS QUE SE ACCIONARAN
public class Controlador implements ActionListener{
    Formulario v;
    Modelo m;

    public Controlador() {
        v = new Formulario();
        m= new Modelo();
        v.setVisible(true);
        v.getBoton().addActionListener(this);//EL EVENTO ES DADO POR UN BOTON
        //objetoVista.getjComboBox1().addActionListener(this);SELE AGREGAN LOS EVENTOS AL LA LISTA O COMBO BOX DEPENDIENDO EL TIPO DE ELEMENTO
        //objetoVista.getjList1().addListSelectionListener(this);
    }
     @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==v.getBoton()){//Si el EVENTO ES DADO POR UN BOTON
            
        }
    }
    /*---------------------EJEMPLO DE EVENTO CON ComboBox-----------------------------
    public void actionPerformed(ActionEvent e){
        if(e.getSource()== objetoVista.getjComboBox1()){
            numero= objetoVista.getjComboBox1().getSelectedIndex();
            objetoModelo = new ClaseComboBoxListBox();
            objetoVista.getJTxtTexto().setBackground(objetoModelo.combocolores(objetoVista.getjComboBox1().getSelectedIndex()));
        }
        
    }
     *---------------------EJEMPLO DE EVENTO CON Lista-----------------------------
    public void valueChanged(ListSelectionEvent e){
        if(e.getSource()== objetoVista.getjList1()){
            objetoModelo = new ClaseComboBoxListBox();
            objetoVista.getJTxtTexto().setForeground(objetoModelo.listacolores(objetoVista.getjList1().getSelectedIndex()));
        }
        
    }
    */
    
}
