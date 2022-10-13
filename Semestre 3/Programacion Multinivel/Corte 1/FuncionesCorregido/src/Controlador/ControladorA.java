package Controlador;
import Modelo.Modelo;
import Vista.Vista;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ControladorA implements ActionListener {
    Vista objVista;
    Modelo objModelo;
    int numero;
    public ControladorA(){
        objVista = new Vista();
        objVista.setVisible(true);
        objVista.getBoton1().addActionListener(this);
        
    }
    @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getBoton1()){
            numero = Integer.parseInt(objVista.getIn1().getText());
            objModelo = new Modelo();
            objVista.getOut1().setText(""+objModelo.invertir(numero));
        }        
    }
    
}
