using Entities;
namespace Test
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Student alumnoUno = "12345678";
            alumnoUno.FirstName = "Juan";
            alumnoUno.Lastname = "Perez";

            Student alumnoDos = "12345678";
            Student alumnoTres = new(33333333, "L-33333333");
            Student alumnoCuatro = "44444444";
            Student alumnoCinco = "44444444";
            Student alumnoSeis = "55555555";

            Console.WriteLine(alumnoCuatro.Equals(alumnoCinco));
            Console.WriteLine(alumnoCuatro.GetHashCode());
            Console.WriteLine(alumnoCinco.GetHashCode());

            Teacher proUno = new(12345, "profeUno@mail.com")
            {
                Subject = ESubject.Laboratorio,
                FirstName = "Mario",
                Lastname = "Gonzalez"
            };
            Console.WriteLine(proUno.Information);



            Teacher proDos = new(12345, "profeDos@mail.com")
            {
                Subject = ESubject.Programacion,
                FirstName = "Juan",
                Lastname = "Roque"
            };
            Console.WriteLine(proDos.Information);

            Course cursoLabo = new(proUno);
            Course cursoProgra = new(proDos);


            Console.WriteLine($"inscribo alumno Uno a labo con resultado:\n{cursoLabo.RegisterStudent(alumnoUno)}");

            Clean();

            Console.WriteLine($"inscribo alumno Dos a labo con resultado:\n{cursoLabo.RegisterStudent(alumnoDos)}");
            Clean();

            Console.WriteLine($"inscribo alumno Tres a labo resultado:\n{cursoLabo.RegisterStudent(alumnoTres)}");
            Clean();

            Console.WriteLine($"inscribo alumno Cuatro a labo resultado:\n{cursoLabo.RegisterStudent(alumnoCuatro)}");
            Console.WriteLine($"inscribo alumno Cuatro a progra resultado:\n{cursoProgra.RegisterStudent(alumnoCuatro)}");



            Clean();
            Console.WriteLine($"inscribo alumno Cinco a labo resultado:\n{cursoLabo.RegisterStudent(alumnoCinco)}");
            Console.WriteLine($"inscribo alumno Cinco a progra resultado:\n{cursoProgra.RegisterStudent(alumnoCinco)}");


            Clean();
            Console.WriteLine($"inscribo alumno Seis a progra resultado:\n{cursoProgra.RegisterStudent(alumnoSeis)}");
            Console.WriteLine($"inscribo alumno Seis a labo resultado:\n{cursoLabo.RegisterStudent(alumnoSeis)}");
            Clean();
            Console.WriteLine("\n\n********************LABO**************************\n\n");

            Console.WriteLine(Course.ShowCourseInformation(cursoLabo));

            Clean();
            Console.WriteLine("\n\n********************PROGRA**************************\n\n");

            Console.WriteLine(Course.ShowCourseInformation(cursoProgra));

            Course.EvaluateStudents(cursoLabo);
            Course.EvaluateStudents(cursoProgra);

        }

        public static void Clean()
        {
            Console.ReadKey();
            Console.Clear();

        }
    }
}