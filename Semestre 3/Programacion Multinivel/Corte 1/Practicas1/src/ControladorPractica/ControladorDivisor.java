package ControladorPractica;
import ModeloPractica.ModeloDivisor;
import VistaPractica.VistaDivisor;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class ControladorDivisor implements ActionListener{
    VistaDivisor objVista;
    ModeloDivisor objModelo;
    public ControladorDivisor(){
        objModelo = new ModeloDivisor();
        objVista = new VistaDivisor();
        objVista.setVisible(true);
        objVista.getIn1().addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getIn1()){
            int num = Integer.parseInt(objVista.getIn1().getText());
            objModelo.divisores(num);
            objVista.getOut1().setText("FLAG:"+objModelo.getNumero());
        }
    }
}
