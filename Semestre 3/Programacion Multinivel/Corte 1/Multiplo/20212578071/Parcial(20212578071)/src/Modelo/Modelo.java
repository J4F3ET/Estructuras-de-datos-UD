package Modelo;

import java.util.ArrayList;
import javax.swing.DefaultListModel;

public class Modelo {
    String frase;
    ArrayList modelo = new ArrayList();
    DefaultListModel lista = new DefaultListModel();
    DefaultListModel lista2 = new DefaultListModel();
    public String getFrase() {
        return frase;
    }

    public void setFrase(String frase) {
        this.frase = frase;
    }
    public DefaultListModel dar(String f){
        int aux;
        String palabra;
        char l;
        String delimitadores= "[ .,;?!¡¿\'\"\\[\\]]+";
        String[] palabrasSeparadas = f.split(delimitadores);
        for(int i=0;i<palabrasSeparadas.length;i++){
            palabra=palabrasSeparadas[i];
            palabrasSeparadas[i]=invertir(palabrasSeparadas[i]);
            aux=palabra.length()-1;
            l=palabra.charAt(0);
            if(l=='d'){
                lista.addElement(palabrasSeparadas[i]);
            }
        }
        return lista;
    }
    public DefaultListModel dar2(String f){
        String[] palabrasSeparadas = f.split(" ");
        for(int i=0;i<palabrasSeparadas.length;i++){
            if(palabrasSeparadas[i].contains("i")){
                lista2.addElement(palabrasSeparadas[i]);
            }
        }
        return lista2;
    }
    public String invertir(String palabra){
        StringBuilder strb = new StringBuilder (palabra);
	palabra = strb.reverse().toString();
        return palabra;
    }
}
