#include <windows.h>

int main() {
    // Changer le fond d'écran
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "chemin/de/votre/image/de/chat.jpg", SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);

    // Pour changer la taille de la police, des appels système supplémentaires seraient nécessaires.
    // Cela dépend beaucoup de la configuration spécifique de l'ordinateur et du système d'exploitation.

    return 0;
}

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
    PSTR szCmdLine, int iCmdShow) {

    MessageBox(NULL, "Voici votre message!", "Titre de la Popup", MB_OK);
    return 0;
}


