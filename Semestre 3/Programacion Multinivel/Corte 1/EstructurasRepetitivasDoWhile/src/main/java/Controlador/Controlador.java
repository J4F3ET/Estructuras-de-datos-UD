package Controlador;
import Modelo.Modelo;
import Vista.Vista;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Controlador implements ActionListener{
    Vista objVista;
    Modelo objModelo;        
    public Controlador(){
        objVista = new Vista();
        objModelo = new Modelo();
        objVista.setVisible(true);
        objVista.getBoton1().addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getBoton1()){
            
            
        }
    }
}
