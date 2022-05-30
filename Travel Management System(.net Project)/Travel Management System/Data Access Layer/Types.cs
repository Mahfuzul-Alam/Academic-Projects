using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Travel_Management_System.Data_Access_Layer
{
    class Types
    {
        public int TypesId { get; set; }
        public string TypesName { get; set; }
        public double Rent { get; set; }
        public int CategoryId { get; set; }
    }
}
