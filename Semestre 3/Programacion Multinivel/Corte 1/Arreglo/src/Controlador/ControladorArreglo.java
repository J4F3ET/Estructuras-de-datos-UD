package Controlador;

import Modelo.ArregloMetodo;
import Vista.Vista;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ControladorArreglo implements ActionListener{
    Vista objVista;
    ArregloMetodo objModelo;
    int numero;
    int auxiliar = 0;
    int arreglo[] = new int[10];
    public ControladorArreglo(){
        objVista = new Vista();
        objModelo = new ArregloMetodo();
        objVista.setVisible(true);
        objVista.getIn1().addActionListener(this);
    }
    @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==objVista.getIn1()){
            numero = Integer.parseInt(objVista.getIn1().getText());
            arreglo[auxiliar] = numero;
            auxiliar++;
            objVista.getIn1().setText("");
            objVista.getIn1().requestFocus();
            if(auxiliar == 10){
                System.out.println("BANDERA");
                objVista.getIn1().setEditable(false);
                objVista.getOut1().setText(objModelo.original(arreglo));//ORIGINALES
                objVista.getOut2().setText(objModelo.ordenar(arreglo));//ORDENADO
            }
        }
    }
}
