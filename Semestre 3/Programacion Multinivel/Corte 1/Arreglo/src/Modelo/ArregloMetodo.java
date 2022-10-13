package Modelo;
public class ArregloMetodo {
    int valor;
    String original = "";
    public String original(int miarreglo[]){
        valor = 0;
        original = "";
        while(valor < 10){
            original = original + miarreglo[valor]+",";
            valor++;
        }
        return original;
    }
    public String ordenar(int miarreglo[]){
        for(int i = 0;i<miarreglo.length;i++){
            for(int j=i;j<miarreglo.length;j++){
                if(miarreglo[i]>miarreglo[j]){
                    valor = miarreglo[i];
                    miarreglo[i] = miarreglo[j];
                    miarreglo[j] = valor;
                }
            }
        }
        valor =0;
        original= "";
        while(valor<10){
            original = original + miarreglo[valor] + ",";
            valor ++;
        }
        return original;
    }
}
