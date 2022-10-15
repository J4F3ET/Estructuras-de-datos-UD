/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controllador;


import Modelo.Palabras;
import Vista.Parcial;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.DefaultListModel;

/**
 *
 * @author Estudiante
 */
public class Controller implements ActionListener{
    Parcial vista;
    Palabras modelito;
    DefaultListModel modeloI=new DefaultListModel();
    DefaultListModel modeloD=new DefaultListModel();
    
    public Controller(){
        vista=new Parcial();
        vista.setVisible(true);
        vista.getjButton1_Ver().addActionListener(this);
    }
    
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==vista.getjButton1_Ver()){
            String cadena=vista.getjTextField1_Entrada().getText();
            modelito=new Palabras(cadena);
            modeloI.clear();
            modeloD.clear();
            modeloD=modelito.separarD();
            modeloI=modelito.separarI();
            
            vista.getjList1_ConI().setModel(modeloI);
            vista.getjList2_invertidas().setModel(modeloD);
        }
    }
    
}
