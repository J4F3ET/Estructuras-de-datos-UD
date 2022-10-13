
package Modelo;

public class Mayor {
    
    private int primero,segundo,tercero,mayor,menor;
    public int getMenor() {
        return menor;
    }
    public void setMenor(int menor) {
        this.menor = menor;
    }
    public int getPrimero() {
        return primero;
    }
    public void setPrimero(int primero) {
        this.primero = primero;
    }
    public int getSegundo() {
        return segundo;
    }

    public void setSegundo(int segundo) {
        this.segundo = segundo;
    }

    public int getTervero() {
        return tercero;
    }

    public void setTervero(int tervero) {
        this.tercero = tervero;
    }

    public int getMayor() {
        return mayor;
    }

    public void setMayor(int mayor) {
        this.mayor = mayor;
    }
    public void  numeroMayorMenor(){
        if(primero == segundo && segundo == tercero){
            mayor = primero;
            menor = tercero;
        }
        if(primero > segundo && primero > tercero){
            mayor = primero;
            if(segundo > tercero)
                menor = tercero;
            else
                menor = segundo;
        }
        if(segundo > primero && segundo > tercero){
            mayor = segundo;
            if(primero > tercero)
                menor = tercero;
            else
                menor = primero;            
        }
        if(tercero > segundo&& tercero > primero){
            mayor = tercero;
            if(primero > segundo)
                menor = segundo;
            else
                menor = primero;   
        }
    }

}