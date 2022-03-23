#include <QtCore>

int main(int argc, char *argv[])
{
    QList<QStringList> data;
    // file operations
    QFile file("/home/debian/qt-qml-book/fileio/sample.csv");
    if(file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);
        // loop forever macro
        forever {
            QString line = stream.readLine();
            // test for null string 'String()'
            if(line.isNull()) {
                break;
            }
            // test for empty string 'QString("")'
            if(line.isEmpty()) {
                continue;
            }
            QStringList row;
            // for each loop to iterate over containers
            foreach(const QString& cell, line.split(",")) {
                row.append(cell.trimmed());
            }
            data.append(row);
        }
    }

    foreach(auto row, data) {
        qDebug() << row.join(" ") << Qt::endl;
        foreach(auto value, row)
            qDebug() << value << Qt::endl;
    }
    // No cleanup necessary
    return 0;
}
