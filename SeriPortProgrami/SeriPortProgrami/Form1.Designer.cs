namespace SeriPortProgrami
{
    partial class Form1
    {
        /// <summary>
        ///Gerekli tasarımcı değişkeni.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///Kullanılan tüm kaynakları temizleyin.
        /// </summary>
        ///<param name="disposing">yönetilen kaynaklar dispose edilmeliyse doğru; aksi halde yanlış.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer üretilen kod

        /// <summary>
        /// Tasarımcı desteği için gerekli metot - bu metodun 
        ///içeriğini kod düzenleyici ile değiştirmeyin.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.comboBoxSeriPortlar = new System.Windows.Forms.ComboBox();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.buttonConnect = new System.Windows.Forms.Button();
            this.buttonDisconnect = new System.Windows.Forms.Button();
            this.textBoxMyMessage = new System.Windows.Forms.TextBox();
            this.buttonSend = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.button9 = new System.Windows.Forms.Button();
            this.button10 = new System.Windows.Forms.Button();
            this.button11 = new System.Windows.Forms.Button();
            this.button12 = new System.Windows.Forms.Button();
            this.button13 = new System.Windows.Forms.Button();
            this.button14 = new System.Windows.Forms.Button();
            this.button15 = new System.Windows.Forms.Button();
            this.button16 = new System.Windows.Forms.Button();
            this.button8 = new System.Windows.Forms.Button();
            this.button7 = new System.Windows.Forms.Button();
            this.button6 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.button21 = new System.Windows.Forms.Button();
            this.button20 = new System.Windows.Forms.Button();
            this.button19 = new System.Windows.Forms.Button();
            this.button18 = new System.Windows.Forms.Button();
            this.button17 = new System.Windows.Forms.Button();
            this.hScrollBar1 = new System.Windows.Forms.HScrollBar();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // comboBoxSeriPortlar
            // 
            this.comboBoxSeriPortlar.FormattingEnabled = true;
            this.comboBoxSeriPortlar.Location = new System.Drawing.Point(12, 11);
            this.comboBoxSeriPortlar.Name = "comboBoxSeriPortlar";
            this.comboBoxSeriPortlar.Size = new System.Drawing.Size(161, 21);
            this.comboBoxSeriPortlar.TabIndex = 0;
            // 
            // serialPort1
            // 
            this.serialPort1.DataReceived += new System.IO.Ports.SerialDataReceivedEventHandler(this.serialPort1_DataReceived);
            // 
            // buttonConnect
            // 
            this.buttonConnect.Location = new System.Drawing.Point(179, 10);
            this.buttonConnect.Name = "buttonConnect";
            this.buttonConnect.Size = new System.Drawing.Size(316, 21);
            this.buttonConnect.TabIndex = 1;
            this.buttonConnect.Text = "Bağlan";
            this.buttonConnect.UseVisualStyleBackColor = true;
            this.buttonConnect.Click += new System.EventHandler(this.buttonConnect_Click);
            // 
            // buttonDisconnect
            // 
            this.buttonDisconnect.Location = new System.Drawing.Point(501, 10);
            this.buttonDisconnect.Name = "buttonDisconnect";
            this.buttonDisconnect.Size = new System.Drawing.Size(155, 21);
            this.buttonDisconnect.TabIndex = 1;
            this.buttonDisconnect.Text = "Bağlantı Kes";
            this.buttonDisconnect.UseVisualStyleBackColor = true;
            this.buttonDisconnect.Click += new System.EventHandler(this.buttonDisconnect_Click);
            // 
            // textBoxMyMessage
            // 
            this.textBoxMyMessage.Location = new System.Drawing.Point(18, 365);
            this.textBoxMyMessage.Name = "textBoxMyMessage";
            this.textBoxMyMessage.Size = new System.Drawing.Size(477, 20);
            this.textBoxMyMessage.TabIndex = 3;
            // 
            // buttonSend
            // 
            this.buttonSend.Location = new System.Drawing.Point(501, 365);
            this.buttonSend.Name = "buttonSend";
            this.buttonSend.Size = new System.Drawing.Size(165, 23);
            this.buttonSend.TabIndex = 4;
            this.buttonSend.Text = "Gönder";
            this.buttonSend.UseVisualStyleBackColor = true;
            this.buttonSend.Click += new System.EventHandler(this.buttonSend_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(6, 19);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(155, 33);
            this.button1.TabIndex = 5;
            this.button1.Text = "RGBLoop";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.button9);
            this.groupBox1.Controls.Add(this.button10);
            this.groupBox1.Controls.Add(this.button11);
            this.groupBox1.Controls.Add(this.button12);
            this.groupBox1.Controls.Add(this.button13);
            this.groupBox1.Controls.Add(this.button14);
            this.groupBox1.Controls.Add(this.button15);
            this.groupBox1.Controls.Add(this.button16);
            this.groupBox1.Controls.Add(this.button8);
            this.groupBox1.Controls.Add(this.button7);
            this.groupBox1.Controls.Add(this.button6);
            this.groupBox1.Controls.Add(this.button5);
            this.groupBox1.Controls.Add(this.button4);
            this.groupBox1.Controls.Add(this.button3);
            this.groupBox1.Controls.Add(this.button2);
            this.groupBox1.Controls.Add(this.button1);
            this.groupBox1.Location = new System.Drawing.Point(12, 169);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(654, 190);
            this.groupBox1.TabIndex = 6;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "groupBox1";
            this.groupBox1.Enter += new System.EventHandler(this.groupBox1_Enter);
            // 
            // button9
            // 
            this.button9.Location = new System.Drawing.Point(6, 97);
            this.button9.Name = "button9";
            this.button9.Size = new System.Drawing.Size(155, 33);
            this.button9.TabIndex = 20;
            this.button9.Text = "RunningLights";
            this.button9.UseVisualStyleBackColor = true;
            this.button9.Click += new System.EventHandler(this.button9_Click);
            // 
            // button10
            // 
            this.button10.Location = new System.Drawing.Point(167, 97);
            this.button10.Name = "button10";
            this.button10.Size = new System.Drawing.Size(155, 33);
            this.button10.TabIndex = 19;
            this.button10.Text = "colorWipe";
            this.button10.UseVisualStyleBackColor = true;
            this.button10.Click += new System.EventHandler(this.button10_Click);
            // 
            // button11
            // 
            this.button11.Location = new System.Drawing.Point(328, 97);
            this.button11.Name = "button11";
            this.button11.Size = new System.Drawing.Size(155, 33);
            this.button11.TabIndex = 18;
            this.button11.Text = "rainbowCycle";
            this.button11.UseVisualStyleBackColor = true;
            this.button11.Click += new System.EventHandler(this.button11_Click);
            // 
            // button12
            // 
            this.button12.Location = new System.Drawing.Point(489, 97);
            this.button12.Name = "button12";
            this.button12.Size = new System.Drawing.Size(155, 33);
            this.button12.TabIndex = 17;
            this.button12.Text = "theaterChase";
            this.button12.UseVisualStyleBackColor = true;
            this.button12.Click += new System.EventHandler(this.button12_Click);
            // 
            // button13
            // 
            this.button13.Location = new System.Drawing.Point(6, 136);
            this.button13.Name = "button13";
            this.button13.Size = new System.Drawing.Size(155, 33);
            this.button13.TabIndex = 16;
            this.button13.Text = "theaterChaseRainbow";
            this.button13.UseVisualStyleBackColor = true;
            this.button13.Click += new System.EventHandler(this.button13_Click);
            // 
            // button14
            // 
            this.button14.Location = new System.Drawing.Point(167, 136);
            this.button14.Name = "button14";
            this.button14.Size = new System.Drawing.Size(155, 33);
            this.button14.TabIndex = 15;
            this.button14.Text = "Fire";
            this.button14.UseVisualStyleBackColor = true;
            this.button14.Click += new System.EventHandler(this.button14_Click);
            // 
            // button15
            // 
            this.button15.Location = new System.Drawing.Point(328, 136);
            this.button15.Name = "button15";
            this.button15.Size = new System.Drawing.Size(155, 33);
            this.button15.TabIndex = 14;
            this.button15.Text = "BouncingBalls";
            this.button15.UseVisualStyleBackColor = true;
            this.button15.Click += new System.EventHandler(this.button15_Click);
            // 
            // button16
            // 
            this.button16.Location = new System.Drawing.Point(489, 136);
            this.button16.Name = "button16";
            this.button16.Size = new System.Drawing.Size(155, 33);
            this.button16.TabIndex = 13;
            this.button16.Text = "meteorRain";
            this.button16.UseVisualStyleBackColor = true;
            this.button16.Click += new System.EventHandler(this.button16_Click);
            // 
            // button8
            // 
            this.button8.Location = new System.Drawing.Point(489, 58);
            this.button8.Name = "button8";
            this.button8.Size = new System.Drawing.Size(155, 33);
            this.button8.TabIndex = 12;
            this.button8.Text = "SnowSparkle";
            this.button8.UseVisualStyleBackColor = true;
            this.button8.Click += new System.EventHandler(this.button8_Click);
            // 
            // button7
            // 
            this.button7.Location = new System.Drawing.Point(328, 58);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(155, 33);
            this.button7.TabIndex = 11;
            this.button7.Text = "Sparkle";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            // 
            // button6
            // 
            this.button6.Location = new System.Drawing.Point(167, 58);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(155, 33);
            this.button6.TabIndex = 10;
            this.button6.Text = "TwinkleRandom";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.button6_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(6, 58);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(155, 33);
            this.button5.TabIndex = 9;
            this.button5.Text = "Twinkle";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(489, 19);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(155, 33);
            this.button4.TabIndex = 8;
            this.button4.Text = "NewKITT RightToLeft";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(328, 19);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(155, 33);
            this.button3.TabIndex = 7;
            this.button3.Text = "Halloween Eyes";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(167, 19);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(155, 33);
            this.button2.TabIndex = 6;
            this.button2.Text = "Strobe";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.hScrollBar1);
            this.groupBox2.Controls.Add(this.button21);
            this.groupBox2.Controls.Add(this.button20);
            this.groupBox2.Controls.Add(this.button19);
            this.groupBox2.Controls.Add(this.button18);
            this.groupBox2.Controls.Add(this.button17);
            this.groupBox2.Location = new System.Drawing.Point(12, 39);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(654, 124);
            this.groupBox2.TabIndex = 7;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "groupBox2";
            this.groupBox2.Enter += new System.EventHandler(this.groupBox2_Enter);
            // 
            // button21
            // 
            this.button21.BackColor = System.Drawing.Color.Black;
            this.button21.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.button21.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.button21.ForeColor = System.Drawing.Color.White;
            this.button21.Location = new System.Drawing.Point(571, 34);
            this.button21.Name = "button21";
            this.button21.Size = new System.Drawing.Size(73, 33);
            this.button21.TabIndex = 25;
            this.button21.Text = "OFF";
            this.button21.UseVisualStyleBackColor = false;
            this.button21.Click += new System.EventHandler(this.button21_Click);
            // 
            // button20
            // 
            this.button20.BackColor = System.Drawing.Color.White;
            this.button20.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.button20.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.button20.Location = new System.Drawing.Point(490, 34);
            this.button20.Name = "button20";
            this.button20.Size = new System.Drawing.Size(73, 33);
            this.button20.TabIndex = 24;
            this.button20.Text = "ON";
            this.button20.UseVisualStyleBackColor = false;
            this.button20.Click += new System.EventHandler(this.button20_Click);
            // 
            // button19
            // 
            this.button19.BackColor = System.Drawing.Color.Blue;
            this.button19.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.button19.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.button19.Location = new System.Drawing.Point(329, 34);
            this.button19.Name = "button19";
            this.button19.Size = new System.Drawing.Size(154, 33);
            this.button19.TabIndex = 23;
            this.button19.UseVisualStyleBackColor = false;
            this.button19.Click += new System.EventHandler(this.button19_Click);
            // 
            // button18
            // 
            this.button18.BackColor = System.Drawing.Color.Chartreuse;
            this.button18.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.button18.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.button18.Location = new System.Drawing.Point(167, 34);
            this.button18.Name = "button18";
            this.button18.Size = new System.Drawing.Size(154, 33);
            this.button18.TabIndex = 22;
            this.button18.UseVisualStyleBackColor = false;
            this.button18.Click += new System.EventHandler(this.button18_Click);
            // 
            // button17
            // 
            this.button17.BackColor = System.Drawing.Color.Red;
            this.button17.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.button17.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.button17.Location = new System.Drawing.Point(7, 34);
            this.button17.Name = "button17";
            this.button17.Size = new System.Drawing.Size(154, 33);
            this.button17.TabIndex = 21;
            this.button17.UseVisualStyleBackColor = false;
            this.button17.Click += new System.EventHandler(this.button17_Click);
            // 
            // hScrollBar1
            // 
            this.hScrollBar1.LargeChange = 1;
            this.hScrollBar1.Location = new System.Drawing.Point(7, 80);
            this.hScrollBar1.Name = "hScrollBar1";
            this.hScrollBar1.Size = new System.Drawing.Size(637, 30);
            this.hScrollBar1.TabIndex = 1;
            this.hScrollBar1.Scroll += new System.Windows.Forms.ScrollEventHandler(this.hScrollBar1_Scroll);
            this.hScrollBar1.ValueChanged += new System.EventHandler(this.hScrollBar1_ValueChanged);
            this.hScrollBar1.MouseLeave += new System.EventHandler(this.hScrollBar1_MouseLeave);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(680, 411);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.buttonSend);
            this.Controls.Add(this.textBoxMyMessage);
            this.Controls.Add(this.buttonDisconnect);
            this.Controls.Add(this.buttonConnect);
            this.Controls.Add(this.comboBoxSeriPortlar);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox2.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox comboBoxSeriPortlar;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.Button buttonConnect;
        private System.Windows.Forms.Button buttonDisconnect;
        private System.Windows.Forms.TextBox textBoxMyMessage;
        private System.Windows.Forms.Button buttonSend;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button button8;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button2;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.Button button9;
        private System.Windows.Forms.Button button10;
        private System.Windows.Forms.Button button11;
        private System.Windows.Forms.Button button12;
        private System.Windows.Forms.Button button13;
        private System.Windows.Forms.Button button14;
        private System.Windows.Forms.Button button15;
        private System.Windows.Forms.Button button16;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button button17;
        private System.Windows.Forms.Button button21;
        private System.Windows.Forms.Button button20;
        private System.Windows.Forms.Button button19;
        private System.Windows.Forms.Button button18;
        private System.Windows.Forms.HScrollBar hScrollBar1;
    }
}

