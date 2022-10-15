package Controlador;

import Modelo.Modelo;
import Vista.Formulario;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class Controlador implements ActionListener{
    Formulario v;
    Modelo m;

    public Controlador() {
        v = new Formulario();
        m= new Modelo();
        v.setVisible(true);
        v.getBoton().addActionListener(this);
    }
     @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==v.getBoton()){
            m.setFrase(v.getTxt().toString());
            v.getLista1().setModel(m.dar(v.getTxt().getText()));
            v.getLista2().setModel(m.dar2(v.getTxt().getText()));
        }
    }
    
}
