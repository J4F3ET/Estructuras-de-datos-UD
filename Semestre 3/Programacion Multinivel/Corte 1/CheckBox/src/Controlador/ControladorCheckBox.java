package Controlador;
import Modelo.ClaseCheckBox;
import Vista.FormularioCheckBox;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;

public class ControladorCheckBox implements ChangeListener{
    FormularioCheckBox objetoVista;
    ClaseCheckBox objetoModelo;
    int activar;
    public ControladorCheckBox(){
        objetoVista = new FormularioCheckBox();
        objetoVista.setVisible(true);
        objetoVista.getjCheckBox1().addChangeListener(this);
        objetoVista.getjCheckBox2().addChangeListener(this);
        objetoVista.getjCheckBox3().addChangeListener(this);  
    }
    public void stateChanged(ChangeEvent e){
        objetoModelo = new ClaseCheckBox();
        if(e.getSource()== objetoVista.getjCheckBox1()){
            if(objetoVista.getjCheckBox1().isSelected()==true)
                activar = 1;    
            else
                activar = 0;
        objetoVista.getjTextField1().setFont(objetoModelo.check1(activar));
        }
        if(e.getSource()== objetoVista.getjCheckBox2()){
            if(objetoVista.getjCheckBox2().isSelected()==true)
                activar = 1;    
            else
                activar = 0;
        objetoVista.getjTextField1().setForeground(objetoModelo.check2(activar));
        }
        if(e.getSource()== objetoVista.getjCheckBox3()){
            if(objetoVista.getjCheckBox3().isSelected()==true)
                activar = 1;    
            else
                activar = 0;
        objetoVista.getjTextField1().setBackground(objetoModelo.check3(activar));
        }        
     
    }
    
    
    
}
