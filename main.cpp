#include <iostream>
#include <stdlib.h>
using namespace std;

    int n, i, x;
    struct alunni
    {
        string nom, cogn;
        string ind;
        int voto;
    };
    struct alunni v[100];
    
    //Funzione inserimento
    int inserimento ()
    {
    do
    {
        cout<<"Quanti alunni vuoi inserire? ";
        cin>>n;
    }
    while ((n <= 0)||(n > 100));
    for (i=0; i<n; i++)
    {
        cout<<"Alunno n. " << i+1 << endl;
        cout<<"Inserisci nome: ";
        cin>>v[i].nom; cout<< endl;
        cout<<"Inserisci cognome: ";
        cin>>v[i].cogn; cout<< endl;
        cout<<"Inserisci indirizzo di studio: ";
        cin>>v[i].ind; cout<< endl;
        cout<<"Inserisci valutazione: ";
        cin>>v[i].voto; cout<< endl;
    }
    return 0;
    }
    
    //Funzione valutazione 100 
    int valutazione100 ()
    {
        for (i=0; i<n; i++)
        {
            if (v[i].voto == 100)
            {
                cout<<v[i].nom << " " << v[i].cogn << endl;
            }
        }
        return 0;
    }
    
    //Funzione valutazione >=80 alunni informatica
    int valutazione80 ()
    {
        for (i=0; i<n; i++)
        {
            if (v[i].ind == "informatica")
            {
                if (v[i].voto >= 80)
                {
                    cout<< v[i].nom << " " << v[i].cogn << endl;
                }
            }
        }
        return 0;
    }
    
    //Funzione chimica
    int chimica ()
    {
        for (i=0; i<n; i++)
        {
            if (v[i].ind == "chimica")
            {
                cout<< v[i].nom << endl << "Voto: " << v[i].voto << endl;
            }
        }
        return 0;
    }

    //Chiamata funzioni
    int main ()
    {
        do
        {
    int scelta;
    do
    {
    cout<<"1. Inserimento " << endl << "2. Ricerca alunni con voto 100 " << endl;
    cout<<"3. Ricerca alunni informatica con voto>= 80 " << endl << "4. Voto alunni chimica " << endl;
    cin>> scelta;
    }
    while ((scelta <= 0)||(n>4));
    
    switch (scelta)
    {
        case 1:
            inserimento ();
            cout<< endl;
            break;
        case 2: 
            valutazione100 ();
            cout<< endl;
            break;
        case 3: 
            valutazione80 ();
            cout<< endl;
            break;
        case 4: 
            chimica ();
            cout<< endl;
            break;
    }
    cout<<"Vuoi eseguire un'altra scelta? (1=si/0=no) " << endl;
    cin>>x;
    }
    while (x == 1);
    system ("PAUSE");
    return 0;
    }
