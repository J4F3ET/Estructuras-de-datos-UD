package Modelo;
public class Modelo {
    private int numero1,numero2,sumatoria,promedio,cantidadNumeros,numerosMenoresP;
    public Modelo() {
        numero1 = 0;
        numero2 = 0;
        sumatoria = 0;
        promedio = 0;
        cantidadNumeros = 0;
        numerosMenoresP = 0;
    }
    public int getNumero1() {
        return numero1;
    }
    public void setNumero1(int numero1) {
        this.numero1 = numero1;
    }
    public int getNumero2() {
        return numero2;
    }
    public void setNumero2(int numero2) {
        this.numero2 = numero2;
    }
    public int getSumatoria() {
        return sumatoria;
    }
    public void setSumatoria(int sumatoria) {
        this.sumatoria = sumatoria;
    }
    public int getPromedio() {
        return promedio;
    }
    public void setPromedio(int promedio) {
        this.promedio = promedio;
    }
    public int getCantidadNumeros() {
        return cantidadNumeros;
    }
    public void setCantidadNumeros(int cantidadNumeros) {
        this.cantidadNumeros = cantidadNumeros;
    }
    public int getNumerosMenoresP() {
        return numerosMenoresP;
    }
    public void setNumerosMenoresP(int numerosMenoresP) {
        this.numerosMenoresP = numerosMenoresP;
    }
}