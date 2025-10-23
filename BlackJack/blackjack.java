package BlackJack;
import java.awt.CardLayout; 
import java.awt.Color;
import javax.swing.ImageIcon; 
import javax.swing.JButton; 
import javax.swing.JFrame; 
import javax.swing.JPanel;

public class blackjack { public static void main(String[] args) { 
    JFrame frame = new JFrame(); 
    frame.setTitle("BLACKJACK"); 
    frame.setSize(1000, 750); 
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    frame.setResizable(false);
     frame.setLayout(null);
    frame.getContentPane().setBackground(new Color(47, 79, 79)); 
    frame.setIconImage(new ImageIcon("C:\\Users\\Anton\\OneDrive\\Desktop\\Java\\scratch\\src\\BlackJack\\blackjack.jpg").getImage());

    JPanel container = new JPanel(new CardLayout());
    container.setBounds(90, 70, 850, 620);
    frame.add(container);

    questionnaire questionnaire_panel = new questionnaire();
    path2 path_panel= new path2();
    gamePanel gamePanel = new gamePanel();
    
    
    gamePanel.setBackground(Color.DARK_GRAY);


    container.add(questionnaire_panel, "questionnaire");
    container.add(gamePanel, "game");
    container.add(path_panel,"path 2");

    JButton submitBtn = questionnaire_panel.getSubmitButton();
    submitBtn.addActionListener(e -> {
        CardLayout cl = (CardLayout) container.getLayout();
        if(questionnaire_panel.Q1_check_NO.isSelected() ||
    questionnaire_panel.Q2_check_NO.isSelected() ||
    questionnaire_panel.Q3_check_NO.isSelected()) {

    cl.show(container, "path 2");
} else {
    cl.show(container, "game");
}       
    });

    /*JButton hitButton = gamePanel.hit();
    hitButton.addActionListener(e->{

    });

    JButton stayButton = gamePanel.stay();
    stayButton.addActionListener(e->{
    });*/
    
    frame.setVisible(true);
}
    
    }

