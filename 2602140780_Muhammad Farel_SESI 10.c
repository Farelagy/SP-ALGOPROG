#include <stdio.h>

int main() {
    int choice;

    printf("===== PILIHAN MINAT STREAMING COMPUTER SCIENCE =====\n");
    printf("1. Saya suka membangun aplikasi dan sistem.\n");
    printf("2. Saya tertarik dengan keamanan jaringan dan data.\n");
    printf("3. Saya suka membuat program cerdas seperti chatbot atau robot.\n");
    printf("4. Saya suka menganalisis data dan menemukan pola.\n");
    printf("Masukkan pilihan Anda (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Rekomendasi Streaming: Software Engineering\n");
            break;
        case 2:
            printf("Rekomendasi Streaming: Cybersecurity\n");
            break;
        case 3:
            printf("Rekomendasi Streaming: Artificial Intelligence (AI)\n");
            break;
        case 4:
            printf("Rekomendasi Streaming: Data Science / Data Analytics\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
    }

    return 0;
}
