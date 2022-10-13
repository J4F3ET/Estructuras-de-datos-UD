package ControladorTexto;

import ModeloTexto.ModeloTexto;
import VistaTexto.VistaTexto;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ControladorTexto implements ActionListener {
    String palabras;
    ModeloTexto objModeloTexto;
    VistaTexto objVistaTexto;
    public ControladorTexto(){
    objModeloTexto = new ModeloTexto();
    objVistaTexto = new VistaTexto();
    objVistaTexto.setVisible(true);
    objVistaTexto.getBoton1().addActionListener(this);
    
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVistaTexto.getBoton1()){
            palabras =objVistaTexto.getjTextField2().getText();
            objModeloTexto.escritor(palabras);
            objVistaTexto.getjTextField1().setText(":V");
            objVistaTexto.getAreaTexto().setText("MENSAJE:"+objModeloTexto.getRenglon());
            }
        }
        
    }

