using System;
using System.Collections.Generic;
using System.Data.Common;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Entities
{
    public class Student : Person
    {
        private string _id;
        private Dictionary<ESubject, List<int>> _assignedSubjects;

        public override string Information
        {
            get
            {
                return $"Alumno: {this.ShowData()}";
            }
        }

        public List<int> this[ESubject subject]
        {
            get
            {
                if (this == subject)
                {
                    return this._assignedSubjects[subject];

                }
                return null;
            }
        }


        private Student(int dni) : base(dni)
        {
            this._assignedSubjects = new();
        }

        public Student(int dni, string id) : this(dni)
        {
            this._id = id;
        }

        public static implicit operator Student(string dni)
        {
            Student student = new(int.Parse(dni));
            student._id = $"L-{student.GetHashCode()}";
            return student;
        }

        public static bool operator ==(Student student, ESubject subject)
        {
            return student._assignedSubjects.ContainsKey(subject);
        }

        public static bool operator !=(Student student, ESubject subject)
        {
            return !(student == subject);
        }

        public static bool operator +(Student student, ESubject subject)
        {
            if (student != subject)
            {
                student._assignedSubjects.Add(subject, new List<int>());
                return true;
            }
            return false;
        }

        public bool TakeTest(ESubject subject)
        {
            Random rand = new();
            int grade = rand.Next(1, 10);

            if (this == subject)
            {
                this[subject].Add(grade);
                return true;
            }
            return false;
        }

        protected override string ShowData()
        {
            StringBuilder sb = new();

            
            sb.AppendLine($"Legajo:{this._id}");
            sb.AppendLine("Materias asignadas:");
            foreach (ESubject subject in this._assignedSubjects.Keys)
            {
                sb.AppendLine(subject.ToString());

            }

            sb.AppendLine(base.ShowData());
            


            return sb.ToString();
        }

        public override string ToString()
        {
            return $"Alumno: {this._id}";
        }




    }
    public enum ESubject
    {
        Programacion,
        Laboratorio,
    }

}
