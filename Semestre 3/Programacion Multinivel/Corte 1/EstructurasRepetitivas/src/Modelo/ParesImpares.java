package Modelo;
public class ParesImpares {
    
    private String nroPares,nroImpares;

    public ParesImpares() {
        nroPares = "";
        nroImpares = "";
    }

    public String getNroPares() {
        return nroPares;
    }

    public void setNroPares(String nroPares) {
        this.nroPares = nroPares;
    }

    public String getNroImpares() {
        return nroImpares;
    }

    public void setNroImpares(String nroImpares) {
        this.nroImpares = nroImpares;
    }    public void numeros(int primero, int segundo){
        for(int i = primero ; i <= segundo ; i++){
            if(i%2==0)
                nroPares = nroPares + i + ",";
            else
                nroImpares = nroImpares + i + ",";
        }
    }
}
