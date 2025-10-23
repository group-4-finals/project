package BlackJack;
import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.border.Border;

public class questionnaire extends JPanel implements ActionListener{
    JCheckBox Q1_check_YES;
    JCheckBox Q1_check_NO;

    JCheckBox Q2_check_YES;
    JCheckBox Q2_check_NO;

    JCheckBox Q3_check_YES;
    JCheckBox Q3_check_NO;

    JButton submit;

    public questionnaire(){
    Border border = BorderFactory.createLineBorder(new Color(255, 215, 0), 4);
    JLabel warning_Label = new JLabel();
    JLabel question1 = new JLabel();
    JLabel question2 = new JLabel();
    JLabel question3 = new JLabel();

     Q1_check_YES = new JCheckBox();
     Q1_check_NO = new JCheckBox();

     Q2_check_YES = new JCheckBox();
    Q2_check_NO = new JCheckBox();

     Q3_check_YES = new JCheckBox();
     Q3_check_NO = new JCheckBox();

     submit = new JButton();
    
    warning_Label.setText(("<html><div style='width:400px;'>"
    + "WARNING: GAMBLING IS A SIN AND IS A FORM OF ADULT ENTERTAINMENT. "
    + "BY PARTICIPATING IN THIS GAME YOU ACCEPT THE CONSEQUENCES THAT THIS GAME OFFERS BUT A FEW QUESTIONS."
    + "</div></html>"));
    warning_Label.setForeground(Color.black); // font color
    warning_Label.setFont(new Font("Times New Roman",Font.BOLD,12)); //font,style and size
    warning_Label.setBounds(90, 10, 550, 50);
    
    question1.setText("1. Are you above the age of 18? (YES or NO)");
    question1.setForeground(Color.black); // font color
    question1.setFont(new Font("Times New Roman",Font.BOLD,13)); //font,style and size
    question1.setBounds(90, 70, 550, 50);

    Q1_check_YES.setText("YES");
    Q1_check_YES.setBounds(100, 110, 55, 25);
    Q1_check_YES.setFocusable(false);
    Q1_check_YES.setFont(new Font("Times New Roman",Font.PLAIN,15));
    
    Q1_check_NO.setText("NO");
    Q1_check_NO.setBounds(220, 110, 55, 25);
    Q1_check_NO.setFocusable(false);
    Q1_check_NO.setFont(new Font("Times New Roman",Font.PLAIN,15));
    
    question2.setText("2. Are you okay with spending your children's college fund? (YES or NO)");
    question2.setForeground(Color.black); // font color
    question2.setFont(new Font("Times New Roman",Font.BOLD,13)); //font,style and size
    question2.setBounds(90, 180, 550, 50);

    Q2_check_YES.setText("YES");
    Q2_check_YES.setBounds(100, 220, 55, 25);
    Q2_check_YES.setFocusable(false);
    Q2_check_YES.setFont(new Font("Times New Roman",Font.PLAIN,15));
    
    Q2_check_NO.setText("NO");
    Q2_check_NO.setBounds(220, 220, 55, 25);
    Q2_check_NO.setFocusable(false);
    Q2_check_NO.setFont(new Font("Times New Roman",Font.PLAIN,15));


    question3.setText("3. Are you okay with a divorce from your husband or wife after the game? (YES or NO):");
    question3.setForeground(Color.black); // font color
    question3.setFont(new Font("Times New Roman",Font.BOLD,13)); //font,style and size
    question3.setBounds(90, 280, 550, 50);
    
    Q3_check_YES.setText("YES");
    Q3_check_YES.setBounds(100, 320, 55, 25);
    Q3_check_YES.setFocusable(false);
    Q3_check_YES.setFont(new Font("Times New Roman",Font.PLAIN,15));
    
    Q3_check_NO.setText("NO");
    Q3_check_NO.setBounds(220, 320, 55, 25);
    Q3_check_NO.setFocusable(false);
    Q3_check_NO.setFont(new Font("Times New Roman",Font.PLAIN,15));

    submit.setText("SUBMIT");
    submit.setFont(new Font("Times New Roman", Font.BOLD, 10));
    submit.setBounds(300, 400, 80, 30);
    submit.setEnabled(false);

    Q1_check_YES.addActionListener(this);
    Q1_check_NO.addActionListener(this);
    Q2_check_YES.addActionListener(this);
    Q2_check_NO.addActionListener(this);
    Q3_check_YES.addActionListener(this);
    Q3_check_NO.addActionListener(this);

    setLayout(null);

    this.add(warning_Label);
    this.add(question1);
    this.add(question2);
    this.add(question3);

    this.add(Q1_check_YES);
    this.add(Q1_check_NO);
    this.add(Q2_check_YES);
    this.add(Q2_check_NO);
    this.add(Q3_check_YES);
    this.add(Q3_check_NO);
    this.add(submit);
    this.setBorder(border);

    }
    private void updateSubmitState() {
    boolean q1Answered = Q1_check_YES.isSelected() || Q1_check_NO.isSelected();
    boolean q2Answered = Q2_check_YES.isSelected() || Q2_check_NO.isSelected();
    boolean q3Answered = Q3_check_YES.isSelected() || Q3_check_NO.isSelected();
    submit.setEnabled(q1Answered && q2Answered && q3Answered);
}

      public JButton getSubmitButton() { return submit;}
    @Override
    public void actionPerformed(ActionEvent e){
        Object src = e.getSource();
    
        if (src == Q1_check_YES) Q1_check_NO.setSelected(false);
        else if (src == Q1_check_NO) Q1_check_YES.setSelected(false);
        else if (src == Q2_check_YES) Q2_check_NO.setSelected(false);
        else if (src == Q2_check_NO) Q2_check_YES.setSelected(false);
        else if (src == Q3_check_YES) Q3_check_NO.setSelected(false);
        else if (src == Q3_check_NO) Q3_check_YES.setSelected(false);

        updateSubmitState();

    }
   
}