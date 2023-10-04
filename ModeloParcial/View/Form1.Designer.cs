namespace View
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            grpAltaAlumno = new GroupBox();
            btnCrearAlumno = new Button();
            txtApellido = new TextBox();
            txtNombre = new TextBox();
            lblApellido = new Label();
            lblNombre = new Label();
            lblDNI = new Label();
            txtDNI = new TextBox();
            lblAlumnosCreados = new Label();
            lstAlumnosCreados = new ListBox();
            grpAsignarMateria = new GroupBox();
            btnAsignarAlumno = new Button();
            cmbMaterias = new ComboBox();
            lblMateria = new Label();
            lblProgra = new Label();
            lblLabo = new Label();
            lstAlumnosInscriptosProgramacion = new ListBox();
            lstAlumnosInscriptosLaboratorio = new ListBox();
            grpAltaAlumno.SuspendLayout();
            grpAsignarMateria.SuspendLayout();
            SuspendLayout();
            // 
            // grpAltaAlumno
            // 
            grpAltaAlumno.Controls.Add(btnCrearAlumno);
            grpAltaAlumno.Controls.Add(txtApellido);
            grpAltaAlumno.Controls.Add(txtNombre);
            grpAltaAlumno.Controls.Add(lblApellido);
            grpAltaAlumno.Controls.Add(lblNombre);
            grpAltaAlumno.Controls.Add(lblDNI);
            grpAltaAlumno.Controls.Add(txtDNI);
            grpAltaAlumno.Location = new Point(342, 33);
            grpAltaAlumno.Name = "grpAltaAlumno";
            grpAltaAlumno.Size = new Size(428, 155);
            grpAltaAlumno.TabIndex = 0;
            grpAltaAlumno.TabStop = false;
            grpAltaAlumno.Text = "Alta Alumno";
            // 
            // btnCrearAlumno
            // 
            btnCrearAlumno.Location = new Point(139, 114);
            btnCrearAlumno.Name = "btnCrearAlumno";
            btnCrearAlumno.Size = new Size(136, 23);
            btnCrearAlumno.TabIndex = 6;
            btnCrearAlumno.Text = "Crear Alumno";
            btnCrearAlumno.UseVisualStyleBackColor = true;
            btnCrearAlumno.Click += btnCrearAlumno_Click;
            // 
            // txtApellido
            // 
            txtApellido.Location = new Point(300, 65);
            txtApellido.Name = "txtApellido";
            txtApellido.Size = new Size(100, 23);
            txtApellido.TabIndex = 5;
            // 
            // txtNombre
            // 
            txtNombre.Location = new Point(158, 65);
            txtNombre.Name = "txtNombre";
            txtNombre.Size = new Size(100, 23);
            txtNombre.TabIndex = 4;
            // 
            // lblApellido
            // 
            lblApellido.AutoSize = true;
            lblApellido.Location = new Point(311, 33);
            lblApellido.Name = "lblApellido";
            lblApellido.Size = new Size(63, 15);
            lblApellido.TabIndex = 3;
            lblApellido.Text = "APELLIDO:";
            // 
            // lblNombre
            // 
            lblNombre.AutoSize = true;
            lblNombre.Location = new Point(178, 33);
            lblNombre.Name = "lblNombre";
            lblNombre.Size = new Size(59, 15);
            lblNombre.TabIndex = 2;
            lblNombre.Text = "NOMBRE:";
            // 
            // lblDNI
            // 
            lblDNI.AutoSize = true;
            lblDNI.Location = new Point(22, 33);
            lblDNI.Name = "lblDNI";
            lblDNI.Size = new Size(30, 15);
            lblDNI.TabIndex = 1;
            lblDNI.Text = "DNI:";
            // 
            // txtDNI
            // 
            txtDNI.Location = new Point(6, 61);
            txtDNI.Name = "txtDNI";
            txtDNI.Size = new Size(100, 23);
            txtDNI.TabIndex = 0;
            // 
            // lblAlumnosCreados
            // 
            lblAlumnosCreados.AutoSize = true;
            lblAlumnosCreados.Location = new Point(55, 463);
            lblAlumnosCreados.Name = "lblAlumnosCreados";
            lblAlumnosCreados.Size = new Size(101, 15);
            lblAlumnosCreados.TabIndex = 1;
            lblAlumnosCreados.Text = "Alumnos Creados";
            // 
            // lstAlumnosCreados
            // 
            lstAlumnosCreados.FormattingEnabled = true;
            lstAlumnosCreados.ItemHeight = 15;
            lstAlumnosCreados.Location = new Point(12, 485);
            lstAlumnosCreados.Name = "lstAlumnosCreados";
            lstAlumnosCreados.Size = new Size(241, 364);
            lstAlumnosCreados.TabIndex = 2;
            // 
            // grpAsignarMateria
            // 
            grpAsignarMateria.Controls.Add(btnAsignarAlumno);
            grpAsignarMateria.Controls.Add(cmbMaterias);
            grpAsignarMateria.Controls.Add(lblMateria);
            grpAsignarMateria.Location = new Point(329, 583);
            grpAsignarMateria.Name = "grpAsignarMateria";
            grpAsignarMateria.Size = new Size(288, 236);
            grpAsignarMateria.TabIndex = 3;
            grpAsignarMateria.TabStop = false;
            grpAsignarMateria.Text = "Asignar Materia";
            // 
            // btnAsignarAlumno
            // 
            btnAsignarAlumno.Location = new Point(79, 165);
            btnAsignarAlumno.Name = "btnAsignarAlumno";
            btnAsignarAlumno.Size = new Size(135, 49);
            btnAsignarAlumno.TabIndex = 2;
            btnAsignarAlumno.Text = "Asignar al alumno seleccionado";
            btnAsignarAlumno.UseVisualStyleBackColor = true;
            btnAsignarAlumno.Click += btnAsignarAlumno_Click;
            // 
            // cmbMaterias
            // 
            cmbMaterias.FormattingEnabled = true;
            cmbMaterias.Location = new Point(79, 83);
            cmbMaterias.Name = "cmbMaterias";
            cmbMaterias.Size = new Size(121, 23);
            cmbMaterias.TabIndex = 1;
            // 
            // lblMateria
            // 
            lblMateria.AutoSize = true;
            lblMateria.Location = new Point(103, 54);
            lblMateria.Name = "lblMateria";
            lblMateria.Size = new Size(55, 15);
            lblMateria.TabIndex = 0;
            lblMateria.Text = "MATERIA";
            // 
            // lblProgra
            // 
            lblProgra.AutoSize = true;
            lblProgra.Location = new Point(689, 463);
            lblProgra.Name = "lblProgra";
            lblProgra.Size = new Size(96, 15);
            lblProgra.TabIndex = 4;
            lblProgra.Text = "Inscriptos Progra";
            // 
            // lblLabo
            // 
            lblLabo.AutoSize = true;
            lblLabo.Location = new Point(934, 463);
            lblLabo.Name = "lblLabo";
            lblLabo.Size = new Size(90, 15);
            lblLabo.TabIndex = 5;
            lblLabo.Text = "Inscriptos Labo:";
            // 
            // lstAlumnosInscriptosProgramacion
            // 
            lstAlumnosInscriptosProgramacion.FormattingEnabled = true;
            lstAlumnosInscriptosProgramacion.ItemHeight = 15;
            lstAlumnosInscriptosProgramacion.Location = new Point(642, 508);
            lstAlumnosInscriptosProgramacion.Name = "lstAlumnosInscriptosProgramacion";
            lstAlumnosInscriptosProgramacion.Size = new Size(212, 349);
            lstAlumnosInscriptosProgramacion.TabIndex = 6;
            // 
            // lstAlumnosInscriptosLaboratorio
            // 
            lstAlumnosInscriptosLaboratorio.FormattingEnabled = true;
            lstAlumnosInscriptosLaboratorio.ItemHeight = 15;
            lstAlumnosInscriptosLaboratorio.Location = new Point(882, 508);
            lstAlumnosInscriptosLaboratorio.Name = "lstAlumnosInscriptosLaboratorio";
            lstAlumnosInscriptosLaboratorio.Size = new Size(190, 349);
            lstAlumnosInscriptosLaboratorio.TabIndex = 7;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1084, 861);
            Controls.Add(lstAlumnosInscriptosLaboratorio);
            Controls.Add(lstAlumnosInscriptosProgramacion);
            Controls.Add(lblLabo);
            Controls.Add(lblProgra);
            Controls.Add(grpAsignarMateria);
            Controls.Add(lstAlumnosCreados);
            Controls.Add(lblAlumnosCreados);
            Controls.Add(grpAltaAlumno);
            FormBorderStyle = FormBorderStyle.FixedSingle;
            MaximizeBox = false;
            MinimizeBox = false;
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Form1";
            Load += Form1_Load;
            grpAltaAlumno.ResumeLayout(false);
            grpAltaAlumno.PerformLayout();
            grpAsignarMateria.ResumeLayout(false);
            grpAsignarMateria.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private GroupBox grpAltaAlumno;
        private TextBox txtNombre;
        private Label lblApellido;
        private Label lblNombre;
        private Label lblDNI;
        private TextBox txtDNI;
        private TextBox txtApellido;
        private Button btnCrearAlumno;
        private Label lblAlumnosCreados;
        private ListBox lstAlumnosCreados;
        private GroupBox grpAsignarMateria;
        private Button btnAsignarAlumno;
        private ComboBox cmbMaterias;
        private Label lblMateria;
        private Label lblProgra;
        private Label lblLabo;
        private ListBox lstAlumnosInscriptosProgramacion;
        private ListBox lstAlumnosInscriptosLaboratorio;
    }
}