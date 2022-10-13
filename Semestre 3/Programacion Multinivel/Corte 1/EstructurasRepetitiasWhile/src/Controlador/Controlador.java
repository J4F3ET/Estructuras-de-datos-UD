package Controlador;

import Modelo.MultiplicacionRusa;
import Vista.Vista;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Controlador implements ActionListener {
    Vista objVista;
    MultiplicacionRusa objModelo;
    public Controlador(){
        objVista = new Vista();
        objModelo = new MultiplicacionRusa();
        objVista.setVisible(true);
        objVista.getBoton1().addActionListener(this);
         
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getBoton1()){
            
        }
        
    }
    
}
