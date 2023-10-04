using Microsoft.VisualBasic;
using System.Reflection.Metadata;
using System.Text;

namespace Entities
{
    public abstract class Person
    {
        private string _lastName;
        private string _firstName;
        protected int dni;

        public string FirstName
        {
            get { return _firstName; }
            set { _firstName = value; }
        }

        public string Lastname
        {
            get { return _lastName; }
            set { _lastName = value; }
        }

        public abstract string Information
        {
            get;
        }

        protected Person(int dni)
        {
            this.dni = dni;
        }

        public override bool Equals(object obj)
        {
            if (obj is Person)
            {
               // return obj.GetHashCode() == this.GetHashCode();
                return (Person)obj == this;
            }
            return false;
        }

        public override int GetHashCode()
        {
            return this.dni.GetHashCode();
        }
        public static bool operator ==(Person firstPerson, Person secondPerson)
        {
            return firstPerson.dni == secondPerson.dni;
        }

        public static bool operator !=(Person firstPerson, Person secondPerson)
        {
            return !(firstPerson == secondPerson);
        }


        protected virtual string ShowData()
        {
            StringBuilder sb = new();
            sb.AppendLine("==========================");
            sb.AppendLine($"Nombre: {this.FirstName}");
            sb.AppendLine($"Nombre: {this.Lastname}");
            sb.AppendLine($"DNI: {this.dni}");
            sb.AppendLine("==========================");
            return sb.ToString();
        }
    }
}