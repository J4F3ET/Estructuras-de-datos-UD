package ModeloTexto;
public class ModeloTexto {
    private String renglon;

    public ModeloTexto() {
        renglon ="";
    }

    public String getRenglon() {
        return renglon;
    }

    public void setRenglon(String renglon) {
        this.renglon = renglon;
    }
    public void escritor(String palabras){
        for(int i = 0 ; i <= 5 ; i++){
            renglon += palabras+","+i+"\n"; 
        }
    }
}
