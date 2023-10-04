using Entities;

namespace View
{
    public partial class Form1 : Form
    {
        private Person alumno;
        private Person profesorProgra;
        private Course cursoProgramacion;
        private Person profesorLabo;
        private Course cursoLaboratorio;
        public Form1()
        {
            InitializeComponent();
            profesorLabo = new Teacher(99000123, "profesorLabo@email.com", ESubject.Laboratorio);
            profesorProgra = new Teacher(99000123, "profesorProgra@email.com", ESubject.Programacion);
            cursoProgramacion = new Course((Teacher)profesorProgra);
            cursoLaboratorio = new Course((Teacher)profesorLabo);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.cmbMaterias.DataSource = Enum.GetValues(typeof(ESubject));
        }

        private void btnCrearAlumno_Click(object sender, EventArgs e)
        {
            alumno = (Student)this.txtDNI.Text;
            alumno.FirstName = this.txtNombre.Text;
            alumno.Lastname = this.txtApellido.Text;
            this.lstAlumnosCreados.Items.Add(alumno);
        }

        private void ActualizarInscriptos()
        {
            this.lstAlumnosInscriptosLaboratorio.DataSource = null;
            this.lstAlumnosInscriptosProgramacion.DataSource = null;
            this.lstAlumnosInscriptosLaboratorio.DataSource = this.cursoLaboratorio.Students;
            this.lstAlumnosInscriptosProgramacion.DataSource = this.cursoProgramacion.Students;
        }

        private void btnAsignarAlumno_Click(object sender, EventArgs e)
        {
            ESubject materia = (ESubject)this.cmbMaterias.SelectedItem;
            string mensaje = string.Empty;
            if (materia == ESubject.Programacion)
            {
                mensaje = cursoProgramacion.RegisterStudent((Student)alumno);
                MessageBox.Show(mensaje);
                ActualizarInscriptos();
            }
            else
            {
                mensaje = cursoLaboratorio.RegisterStudent((Student)alumno);
                MessageBox.Show(mensaje);
                ActualizarInscriptos();
            }
        }
    }

}