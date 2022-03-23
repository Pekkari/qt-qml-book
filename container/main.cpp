#include <QtCore>

// text stream is text-codec aware
QTextStream cout(stdout, QIODevice::WriteOnly);

int main(int argc, char *argv[])
{
    QString s1("Hello");
    QString s2("Qt");
    QList<QString> list;
    // stream into containers
    list << s1 << s2;
    // Java and STL like iterators
    QListIterator<QString> iter(list);
    while(iter.hasNext()) {
        cout << iter.next();
        if(iter.hasNext()) {
            cout << " ";
        }
    }
    cout << "!" << Qt::endl;
    return 0;
}
