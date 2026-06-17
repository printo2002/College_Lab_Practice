package appletsv8;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class SoundExample extends Applet implements ActionListener
{
    AudioClip sound;

    Button play, stop;

    public void init()
    {
        sound = getAudioClip(getCodeBase(), "pirates.wav");

        play = new Button("Play");
        add(play);

        stop = new Button("Stop");
        add(stop);

        play.addActionListener(this);
        stop.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e)
    {
        String s = e.getActionCommand();

        if("Play".equals(s))
        {
            sound.play();
        }

        if("Stop".equals(s))
        {
            sound.stop();
        }
    }
    
    
}