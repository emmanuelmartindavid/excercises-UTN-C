using System;
using System.Collections.Generic;
using System.Diagnostics.Contracts;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Text;
using System.Threading.Tasks;

namespace Entities
{
    public class Teacher : Person
    {
        private string _email;
        private ESubject _assignedSubject;

        public override string Information
        {
            get
            {
                return $"Profesor:\n {ShowData()}";
            }
        }

        public ESubject Subject
        {
            get
            {
                return this._assignedSubject;
            }
            set
            {
                this._assignedSubject = value;
            }
        }
        public Teacher(int dni) : base(dni)
        {
        }
        public Teacher(int dni, string email) : this(dni)
        {
            this._email = email;
        }

        public Teacher(int dni, string email, ESubject assignedSubject) : this(dni, email)
        {
            this._assignedSubject = assignedSubject;
        }

        public bool EvaluateStudent(Student student)
        {
            return student.TakeTest(this._assignedSubject);
        }


        protected override string ShowData()
        {
            StringBuilder sb = new();

            sb.AppendLine($"Email {this._email}");
            sb.AppendLine($"Materia asignada: {this._assignedSubject}");
            sb.AppendLine(base.ShowData());

            return sb.ToString();
        }



        public override string ToString()
        {
            return $"Profesor - {this._assignedSubject}";
        }



    }
}
