package Controlador;
import Modelo.Modelo;
import Vista.Vista;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Controlador implements ActionListener{
    Vista objVista;
    Modelo objModelo;   
    public Controlador(){
        objModelo = new Modelo();
        objVista = new Vista();
        objVista.setVisible(true);
        objVista.getBoton1().addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getBoton1()){
            objModelo.setTexto(objVista.getIn1().getText());
            objModelo.parrafo();
            objVista.getOut1().setText(""+objModelo.getTexto());
        }
        
    }
            
}
