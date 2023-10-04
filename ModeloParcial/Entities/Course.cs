using System;
using System.Collections.Generic;
using System.Data.Common;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Entities
{
    public class Course
    {
        private List<Person> _students;
        private ESubject _subject;
        private Person _teacher;

        public List<Person> Students
        {
            get
            {
                return this._students;
            }
        }

        public Teacher Teacher
        {
            get
            {
                return (Teacher)this._teacher;
            }
            set
            {
                this._teacher = value;
            }
        }

        public Course(Teacher teacher)
        {
            this._teacher = teacher;
            this._subject = teacher.Subject;
            this._students = new List<Person>();
        }

        /*    public static bool operator ==(Course course, Student student)
            {
                foreach (Person person in course.Students)
                {
                    if (person == student) return true;
                }
                return false;
            }*/

        public static bool operator ==(Course course, Student student)
        {
            return course._students.Contains(student);
        }
        public static bool operator !=(Course course, Student student)
        {
            return !(course == student);
        }

        public string RegisterStudent(Student student)
        {
            StringBuilder sb = new();
            if (this != student && student + _subject)
            {
                this._students.Add(student);
                sb.AppendLine($"Se inscribio al alumno a la meteria: {this._subject}\n{student.Information}");

            }
            else
            {
                sb.AppendLine($"Ya inscripto o no se pudo inscribir al alumno a la materia: {this._subject}");
            }
            return sb.ToString();
        }

        public static void EvaluateStudents(Course course)
        {
            foreach (Student student in course.Students)
            {
                ((Teacher)course.Teacher).EvaluateStudent((Student)student);
            }
        }

        public static string ShowCourseInformation(Course course)
        {
            StringBuilder sb = new();

            sb.AppendLine($"Profesor: {course.Teacher.Information}");
            sb.AppendLine($"Materia: {course._subject}");
            sb.AppendLine($"Alumnos: ");
            foreach (Student person in course.Students.Cast<Student>())
            {
                sb.AppendLine(person.Information);
            }

            return sb.ToString();
        }
    }
}
