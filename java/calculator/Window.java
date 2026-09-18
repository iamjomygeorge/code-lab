package calculator;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;

public class Window {
    Window() {
        JFrame jFrame = new JFrame("Calculator");

        jFrame.setSize(500, 600);
        jFrame.setLocation(600, 100);
        jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Main Panel
        JPanel mainPanel = new JPanel(new BorderLayout());
        // Display Panel
        JPanel displayPanel = new JPanel(new BorderLayout());
        // Button Panel
        JPanel buttonPanel = new JPanel(new GridLayout(5, 4));

        mainPanel.add(displayPanel, BorderLayout.NORTH);
        mainPanel.add(buttonPanel, BorderLayout.CENTER);
        jFrame.add(mainPanel);

        // Text Field
        JTextField jTextField = new JTextField();
        jTextField.setPreferredSize(new Dimension(450, 100));
        jTextField.setFont(new Font("Arial", Font.PLAIN, 35));
        jTextField.setHorizontalAlignment(JTextField.RIGHT);
        displayPanel.add(jTextField);

        // Action Listener
        ActionListener buttonListener = e -> {
            JButton clickedButton = (JButton) e.getSource();
            String buttonText = clickedButton.getText();
            jTextField.setText(jTextField.getText() + buttonText);
        };

        // Buttons
        JButton buttonC = new JButton("C");
        buttonPanel.add(buttonC);
        buttonC.addActionListener(e -> {
            jTextField.setText("");
        });

        JButton buttonBackspace = new JButton("Back");
        buttonPanel.add(buttonBackspace);
        buttonBackspace.addActionListener(e -> {
            String currentText = jTextField.getText();
            if (!currentText.isEmpty()) {
                jTextField.setText(
                currentText.substring(0, currentText.length() - 1));
            }
        });

        JButton buttonPercentage = new JButton("%");
        buttonPanel.add(buttonPercentage);
        buttonPercentage.addActionListener(buttonListener);

        JButton buttonDivide = new JButton("/");
        buttonPanel.add(buttonDivide);
        buttonDivide.addActionListener(buttonListener);

        JButton button7 = new JButton("7");
        buttonPanel.add(button7);
        button7.addActionListener(buttonListener);

        JButton button8 = new JButton("8");
        buttonPanel.add(button8);
        button8.addActionListener(buttonListener);

        JButton button9 = new JButton("9");
        buttonPanel.add(button9);
        button9.addActionListener(buttonListener);

        JButton buttonMultiply = new JButton("*");
        buttonPanel.add(buttonMultiply);
        buttonMultiply.addActionListener(buttonListener);

        JButton button4 = new JButton("4");
        buttonPanel.add(button4);
        button4.addActionListener(buttonListener);

        JButton button5 = new JButton("5");
        buttonPanel.add(button5);
        button5.addActionListener(buttonListener);

        JButton button6 = new JButton("6");
        buttonPanel.add(button6);
        button6.addActionListener(buttonListener);

        JButton buttonSubtract = new JButton("-");
        buttonPanel.add(buttonSubtract);
        buttonSubtract.addActionListener(buttonListener);

        JButton button1 = new JButton("1");
        buttonPanel.add(button1);
        button1.addActionListener(buttonListener);

        JButton button2 = new JButton("2");
        buttonPanel.add(button2);
        button2.addActionListener(buttonListener);

        JButton button3 = new JButton("3");
        buttonPanel.add(button3);
        button3.addActionListener(buttonListener);

        JButton buttonAdd = new JButton("+");
        buttonPanel.add(buttonAdd);
        buttonAdd.addActionListener(buttonListener);

        JButton button0 = new JButton("0");
        buttonPanel.add(button0);
        button0.addActionListener(buttonListener);

        JButton buttonDot = new JButton(".");
        buttonPanel.add(buttonDot);
        buttonDot.addActionListener(buttonListener);

        JButton buttonEquals = new JButton("=");
        buttonPanel.add(buttonEquals);

        Font buttonFont = new Font("Arial", Font.PLAIN, 28);
        Component[] components = buttonPanel.getComponents();
        for (int i = 0; i < components.length; i++) {
            components[i].setFont(buttonFont);
        }

        jFrame.setVisible(true);
    }
}
