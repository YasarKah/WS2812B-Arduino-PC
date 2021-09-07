using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SeriPortProgrami
{
    public partial class Form1 : Form
    { 
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            buttonDisconnect.Enabled = false;
            buttonSend.Enabled = false;
            foreach (var serialPort in SerialPort.GetPortNames()){
                comboBoxSeriPortlar.Items.Add(serialPort);
            }
            comboBoxSeriPortlar.SelectedIndex = 0;
        }

        private void buttonConnect_Click(object sender, EventArgs e)
        {
            serialPort1.PortName = comboBoxSeriPortlar.Text;
            serialPort1.BaudRate = 9600;
            serialPort1.Parity = Parity.Even;
            serialPort1.StopBits = StopBits.One;
            serialPort1.DataBits = 8;


            try
            {
                serialPort1.Open();
            }
            catch (Exception ex)
            {

                MessageBox.Show($"Seri port bağlantısı yapılamadı\n Hata : {ex.Message}","Problem",MessageBoxButtons.OK,MessageBoxIcon.Error);
            }
            
            if (serialPort1.IsOpen)
            {
                buttonConnect.Enabled = false;
                buttonDisconnect.Enabled = true;
                buttonSend.Enabled = true;
            }
        }

        private void buttonDisconnect_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen)
            {
                serialPort1.Close();
                buttonConnect.Enabled = true;
                buttonDisconnect.Enabled = false;
                buttonSend.Enabled = false;
            }
        }

        private void buttonSend_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen)
            {
                serialPort1.Write(textBoxMyMessage.Text);
                textBoxMyMessage.Clear();
            }
        }
        public delegate void veriGoster(String s);


        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
        }

        private void button1_Click(object sender, EventArgs e)
        {
            serialPort1.Write("1");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("2");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            serialPort1.Write("3");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            serialPort1.Write("4");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            serialPort1.Write("5");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            serialPort1.Write("6");
        }

        private void button7_Click(object sender, EventArgs e)
        {
            serialPort1.Write("7");
        }

        private void button8_Click(object sender, EventArgs e)
        {
            serialPort1.Write("8");
        }

        private void button9_Click(object sender, EventArgs e)
        {
            serialPort1.Write("9");
        }

        private void button10_Click(object sender, EventArgs e)
        {
            serialPort1.Write("10");
        }

        private void button11_Click(object sender, EventArgs e)
        {
            serialPort1.Write("11");
        }

        private void button12_Click(object sender, EventArgs e)
        {
            serialPort1.Write("12");
        }

        private void button13_Click(object sender, EventArgs e)
        {
            serialPort1.Write("13");
        }

        private void button14_Click(object sender, EventArgs e)
        {
            serialPort1.Write("14");
        }

        private void button15_Click(object sender, EventArgs e)
        {
            serialPort1.Write("15");
        }

        private void button16_Click(object sender, EventArgs e)
        {
            serialPort1.Write("16");
        }
        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }
    }
}
