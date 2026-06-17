package labprgms;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
public class MenuCreation implements ActionListener{
	JFrame f;
	JMenuBar mb;
	JMenu fileMenu,editMenu,helpMenu, closeMenu;
	JMenuItem newFile, openFile, exitFile;
	public MenuCreation() {
		f = new JFrame("Notepad");
		f.setSize(500,500);
		f.setResizable(false);
		f.setLayout(null);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		mb = new JMenuBar();
		f.setJMenuBar(mb);
		
		fileMenu = new JMenu("File");
		mb.add(fileMenu);
		editMenu = new JMenu("Edit");
		mb.add(editMenu);
		helpMenu = new JMenu("Help");
		mb.add(helpMenu);
		newFile = new JMenuItem("New");
		fileMenu.add(newFile);
		
		openFile = new JMenuItem("Open");
		fileMenu.add(openFile);
		
		closeMenu = new JMenu("Close");
		fileMenu.add(closeMenu);
		
		exitFile = new JMenuItem("Exit");
		closeMenu.add(exitFile);
		exitFile.addActionListener(this);
		f.setVisible(true);
	}
	public static void main(String[] args) {
		 new MenuCreation();

	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()==exitFile) {
			System.exit(0);
		}
		
	}

}
