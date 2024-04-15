using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WPF1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void klikniecie(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("Naciśnięto przycisk\nAkcja zostanie dodana później");
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("Nic się nie stało\nmożna ten element usunąć");

        }
    }
}