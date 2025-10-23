package BlackJack;

import java.awt.Color;
import java.awt.Font;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class gamePanel extends JPanel{
  JButton Hit_Button = new JButton("Hit");
  JButton Stay_Button = new JButton("Stay");
    public  gamePanel(){

        JLabel player = new JLabel("Player");
        JLabel dealer = new JLabel("Dealer");

        setLayout(null);
        player.setBounds(350, 570, 70, 40);
        player.setFont(new Font("Times New Roman", Font.BOLD, 25));
        player.setForeground(Color.WHITE);

        dealer.setBounds(350, 15, 70, 40);
        dealer.setFont(new Font("Times New Roman", Font.BOLD, 25));
        dealer.setForeground(Color.WHITE);

        
        Hit_Button.setFont(new Font("Times New Roman", Font.BOLD, 10)); 
        Hit_Button.setBounds(390, 540, 80, 30);
        Hit_Button.setEnabled(true);
        

        
        Stay_Button.setFont(new Font("Times New Roman", Font.BOLD, 10));
        Stay_Button.setBounds(300, 540, 80, 30);
        Stay_Button.setEnabled(true);

        
        this.add(player);
        this.add(dealer);
        this.add(Hit_Button);
        this.add(Stay_Button);

        }
        public JButton getHit_ButtonButton() { return Hit_Button; }
        public JButton getStay_ButtonButton() { return Stay_Button; }
        


        


        
     
        
    }
    

