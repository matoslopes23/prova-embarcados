// Curso: Engenharia de Software
// Disciplina: Sistemas Embarcados
// Professor: Vandermi Joao da Silva
// Autor: Lucas Weslen Lopes de Matos
// Data: 09/10/2021



    fn main() {

        //basta trocar os valores que corresponde a tabela
                                     // a,b             //a,b,op
        println!("!({} and {}) = {}\n",0,1,processamento(0,1,4)); // processamento
                                  
    }
    
    fn processamento(a:i32,b:i32,op: i32) -> i32{
      
        if op == 1 {
            //PORTA NOT
            !(!a)
        }else if op == 2{ 
            //PORTA NAND 
            !(!(a&b))
        }else if op == 3{
            //PORTA NOR
            !(!(a|b))
        }else if op == 4{
            //PORTA AND
            !(a&b)+2
        }else if op == 5{
            //PORTA OR
            !(a|b)+2
        }else{
            -1
        }
    }