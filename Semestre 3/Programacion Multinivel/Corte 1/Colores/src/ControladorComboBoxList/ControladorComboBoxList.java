package ControladorComboBoxList;

import ClaseComboBoxListBox.ClaseComboBoxListBox;
import FormularioComboBoxList.FormularioComboBox;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

public class ControladorComboBoxList implements ActionListener, ListSelectionListener{
    FormularioComboBox objetoVista;
    ClaseComboBoxListBox objetoModelo;
    int numero;
    public ControladorComboBoxList(){
        objetoVista = new FormularioComboBox();
        objetoVista.setVisible(true);
        objetoVista.getjComboBox1().addActionListener(this);
        objetoVista.getjList1().addListSelectionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()== objetoVista.getjComboBox1()){
            numero= objetoVista.getjComboBox1().getSelectedIndex();
            objetoModelo = new ClaseComboBoxListBox();
            objetoVista.getJTxtTexto().setBackground(objetoModelo.combocolores(objetoVista.getjComboBox1().getSelectedIndex()));
        }
        
    }
    public void valueChanged(ListSelectionEvent e){
        if(e.getSource()== objetoVista.getjList1()){
            objetoModelo = new ClaseComboBoxListBox();
            objetoVista.getJTxtTexto().setForeground(objetoModelo.listacolores(objetoVista.getjList1().getSelectedIndex()));
        }
        
    }
}
           

