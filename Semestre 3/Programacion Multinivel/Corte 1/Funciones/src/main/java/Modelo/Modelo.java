package Modelo;
public class Modelo {
    String invertido="";
    public String invertir(int valor){
        invertido = invertido + valor%10;
        if(valor > 10){
            invertir(valor/10);
        }
        return invertido;
    }
}
