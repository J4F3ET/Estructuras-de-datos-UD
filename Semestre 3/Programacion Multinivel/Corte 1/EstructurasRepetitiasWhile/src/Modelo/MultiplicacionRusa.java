package Modelo;
public class MultiplicacionRusa {
    private int multiplicando,multiplicador,producto;

    public MultiplicacionRusa() {
        this.multiplicando = 0;
        this.multiplicador = 0;
        this.producto = 0;
    }

    public int getMultiplicando() {
        return multiplicando;
    }

    public void setMultiplicando(int multiplicando) {
        this.multiplicando = multiplicando;
    }

    public int getMultiplicador() {
        return multiplicador;
    }

    public void setMultiplicador(int multiplicador) {
        this.multiplicador = multiplicador;
    }

    public int getProducto() {
        return producto;
    }

    public void setProducto(int producto) {
        this.producto = producto;
    }
    public int multiplicacion_rusa(int a , int b){
        multiplicando = a;
        multiplicador = b;
        while(multiplicando!=0){
            if(multiplicando % 2 != 0){
                producto = producto + multiplicador;
            }
            multiplicando = multiplicando / 2;
            multiplicador = multiplicador *2;
         }
        return producto;
    }
    
    
}
