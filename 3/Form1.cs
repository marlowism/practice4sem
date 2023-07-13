using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Practik_Sahsa
{
    public partial class Form1 : Form
    {
        Color[] color;
        int X, Y;
        Graphics fraq, tree;
        Tree figure;

        private void Draw(Tree figure, int level)
        {
            if (figure.level != 0 && level > 0)
            {
                fraq.DrawEllipse(new Pen(color[level - 1]), figure.center.X - figure.radius, figure.center.Y - figure.radius, 2 * figure.radius, 2 * figure.radius);
                Draw(figure.child[0], level - 1);
                Draw(figure.child[1], level - 1);
                Draw(figure.child[2], level - 1);
                Draw(figure.child[3], level - 1);
                Draw(figure.child[4], level - 1);
                Draw(figure.child[5], level - 1);
            }
            else
            {
                fraq.DrawEllipse(new Pen(color[0]), figure.center.X - figure.radius, figure.center.Y - figure.radius, 2 * figure.radius, 2 * figure.radius);
            }
        }
        private void DrawLevel(Tree figure, int level)
        {
            if (figure.level != level)
            {
                //fraq.DrawEllipse(new Pen(color[level - 1]), figure.center.X - figure.radius, figure.center.Y - figure.radius, 2 * figure.radius, 2 * figure.radius);
                DrawLevel(figure.child[0], level);
                DrawLevel(figure.child[1], level);
                DrawLevel(figure.child[2], level);
                DrawLevel(figure.child[3], level);
                DrawLevel(figure.child[4], level);
                DrawLevel(figure.child[5], level);
            }
            else
            {
                fraq.DrawEllipse(new Pen(color[0]), figure.center.X - figure.radius, figure.center.Y - figure.radius, 2 * figure.radius, 2 * figure.radius);
            }
        }
        private void DrawTree(Point point, int level)
        {
            if (level > 0)
            {
                for (int i = -3; i < 3; i++)
                {
                    tree.DrawLine(new Pen(color[level-1]), point, new Point(point.X + i * Convert.ToInt32(Math.Pow(4, level)), point.Y + 80));
                    DrawTree(new Point(point.X + i * Convert.ToInt32(Math.Pow(4, level)), point.Y + 80), level - 1);
                }
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            DrawTree(new Point(pictureBox2.Size.Width/2, 0), 5);
            Draw(figure, 5);
        }
        private void button2_Click(object sender, EventArgs e)
        {
            pictureBox1.Refresh();
            DrawLevel(figure, 5);
        }
        private void button3_Click(object sender, EventArgs e)
        {
            pictureBox1.Refresh();
            DrawLevel(figure, 4);
        }
        private void button4_Click(object sender, EventArgs e)
        {
            pictureBox1.Refresh();
            DrawLevel(figure, 3);
        }
        private void button5_Click(object sender, EventArgs e)
        {
            pictureBox1.Refresh();
            DrawLevel(figure, 2);
        }
        private void button6_Click(object sender, EventArgs e)
        {
            pictureBox1.Refresh();
            DrawLevel(figure, 1);
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            X = pictureBox1.Size.Width / 2;
            Y = pictureBox1.Size.Height / 2;
            color = new Color[6];
            color[0] = Color.Black;
            color[1] = Color.Red;
            color[2] = Color.Blue;
            color[3] = Color.BlueViolet;
            color[4] = Color.Green;
            color[5] = Color.Red;
            fraq = pictureBox1.CreateGraphics();
            tree = pictureBox2.CreateGraphics();
            figure = new Tree(5, new Point(X, Y), 90);
           
        }
    }
}
