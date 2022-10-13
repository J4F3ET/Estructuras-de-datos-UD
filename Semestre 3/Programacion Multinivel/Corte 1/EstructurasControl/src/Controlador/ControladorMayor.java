package Controlador;

import Modelo.Mayor;
import Vista.FormularioMayorMenor;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ControladorMayor implements ActionListener{
    Mayor objMayor;
    FormularioMayorMenor objVista;
    public ControladorMayor(){
      objMayor = new Mayor();
      objVista = new FormularioMayorMenor();
      objVista.setVisible(true);
      objVista.getjButton1().addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getjButton1()){
            objMayor.setPrimero(Integer.parseInt(objVista.getIn1().getText()));
            objMayor.setSegundo(Integer.parseInt(objVista.getIn2().getText()));
            objMayor.setTervero(Integer.parseInt(objVista.getIn3().getText()));
            objMayor.numeroMayorMenor();
            objVista.getOut1().setText(""+objMayor.getMayor());
            objVista.getOut2().setText(""+objMayor.getMenor());
        }
        
    }
}
