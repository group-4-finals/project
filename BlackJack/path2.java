package BlackJack;

import java.awt.Color;
import java.awt.Font;

import javax.swing.JLabel;
import javax.swing.JPanel;

public class path2 extends JPanel {

    public path2(){
        JLabel thank_You_Message = new JLabel("You are a good soul and therefore should avoid gambling at all cost");

    setLayout(null); // required for setBounds to work
    thank_You_Message.setBounds(75, 150, 550, 100); // adjust as needed
    thank_You_Message.setFont(new Font("Times New Roman", Font.BOLD, 12));
    thank_You_Message.setOpaque(true);
    thank_You_Message.setBackground(Color.WHITE);
    thank_You_Message.setForeground(Color.BLACK);
    thank_You_Message.setHorizontalAlignment(JLabel.CENTER);
    thank_You_Message.setVerticalAlignment(JLabel.CENTER);

    this.add(thank_You_Message);
}


    }
    

