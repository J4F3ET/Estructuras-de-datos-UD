package ModeloPractica;
public class ModeloDivisor {
    String numero;
    public ModeloDivisor() {
        numero = "";
    }
    public String getNumero() {
        return numero;
    }
    public void setNumero(String numero) {
        this.numero = numero;
    }
    public void divisores(int num){
        for(int i = 1;i<=num;i++){
            if(num%i == 0)
                numero += i+","; 
        }
    }   
}
