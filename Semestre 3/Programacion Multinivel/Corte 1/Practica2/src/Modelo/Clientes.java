package Modelo;
import java.util.ArrayList;
import javax.swing.table.DefaultTableModel;

public class Clientes {
    String titulos[]={"NOMBRE","IDENTIFICACION","EDAD","CORREO"};
    DefaultTableModel modelo = new DefaultTableModel(null,titulos);//para trabajar tablas y listas siempre se usa un modelo
    ArrayList<Modelo>Clientes;
    double promedio;
    int sumaedades;
    public double getPromedio(){
        return promedio;
    }
    public void setPromedio(double promedio){
        this.promedio = promedio;
    }
    
    public Clientes(){
        Clientes = new ArrayList();
    }
    public DefaultTableModel adicionar(Modelo objetonuevo){
        Clientes.add(objetonuevo);
        int i;
        sumaedades = 0;
        Object [] fila = new Object[4];
        for(i = 0; i<Clientes.size();i++){
            fila[0]=Clientes.get(i).getNombre();
            fila[1]=Clientes.get(i).getIdentificacion();
            fila[2]=Clientes.get(i).getEdad();
            fila[3]=Clientes.get(i).getCorreo();
            sumaedades = sumaedades + Clientes.get(i).getEdad();
            modelo.addRow(fila);
        }
        promedio = sumaedades/i;
        return modelo;
    }
    
}
