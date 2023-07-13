using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practik_Sahsa
{
    internal class Tree
    {
        public int radius;
        public Point center;
        public int level;
        public Tree[] child;

        public Tree(int lvl, Point point, int rad)
        {
            this.center = point;
            this.radius = rad;
            this.level = lvl;
            if (lvl != 0)
            {
                this.child = new Tree[6];
                child[0] = new Tree(lvl - 1, new Point(point.X + 2 * radius, point.Y), rad / 3);
                child[1] = new Tree(lvl - 1, new Point(point.X + Convert.ToInt32(radius), point.Y - Convert.ToInt32(radius * Math.Sqrt(3))), rad / 3);
                child[2] = new Tree(lvl - 1, new Point(point.X - Convert.ToInt32(radius), point.Y - Convert.ToInt32(radius * Math.Sqrt(3))), rad / 3);
                child[3] = new Tree(lvl - 1, new Point(point.X - 2 * radius, point.Y), rad / 3);
                child[4] = new Tree(lvl - 1, new Point(point.X - Convert.ToInt32(radius), point.Y + Convert.ToInt32(radius * Math.Sqrt(3))), rad / 3);
                child[5] = new Tree(lvl - 1, new Point(point.X + Convert.ToInt32(radius), point.Y + Convert.ToInt32(radius * Math.Sqrt(3))), rad / 3);
            }
        }
    }
}
