#include <QtWidgets> /* tous les widgets de Qt5 */
#include <QtGui> /* tous les widgets de Qt4 */

#define Base2_Base10 0
#define Base10_Base2 1

class MaFenetre : public QDialog
{
   Q_OBJECT

public:
   // Constructeur
   explicit MaFenetre(QWidget *parent = 0);

private:
   // Widgets pour l'interface
   QLineEdit *valeur;
   QLabel *resultat;
   QLabel *unite;
   QComboBox *choixConversion;
   QPushButton *bConvertir;
   QPushButton *bQuitter;
   QDoubleValidator *doubleValidator;

   void afficherUnite();

signals:
   void actualiser();

private slots:
   void convertir();
   void permuter();
};






