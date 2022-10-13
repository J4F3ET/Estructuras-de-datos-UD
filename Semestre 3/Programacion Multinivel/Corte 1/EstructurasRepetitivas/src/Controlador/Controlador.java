package Controlador;
import Modelo.ParesImpares;
import Vista.Vista;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;
public class Controlador implements ActionListener {
    Vista objVista;
    ParesImpares objParesImpares;
    public Controlador(){
        objVista = new Vista();
        objParesImpares = new ParesImpares();
        objVista.setVisible(true);
        objVista.getjButton1().addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getjButton1()){
            int primero = Integer.parseInt(objVista.getIn1().getText());//getText recupera lo que entra en el getIn1
            int segundo = Integer.parseInt(objVista.getIn2().getText());
            if(primero > segundo){
                JOptionPane.showMessageDialog(null,"El primer valor debe ser menor","ERROR",1);
                objVista.getIn1().setText("");//Limpia las cajas 
                objVista.getIn2().setText("");
                objVista.getIn1().requestFocus();
            }else{
                objParesImpares.numeros(primero,segundo);
                objVista.getOut1().setText(""+objParesImpares.getNroPares());
                objVista.getOut2().setText(""+objParesImpares.getNroImpares());
            }
        }
    }
}
