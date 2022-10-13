/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Controlador;

import Modelo.ClaseRadioButton;
import Vista.Formulario;
import java.awt.event.ActionListener;

/**
 *
 * @author WBES_
 */
public class ControladorRadioButon implements ActionListener{
    Formulario objVista;
    ClaseRadioButton objModelo;
    int activar;
    public ControladorRadioButon(){
        objVista = new Formulario();
    }
}
