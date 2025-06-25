void tambahPesan(string isi) {
    Pesan* baru = new Pesan{isi, NULL};
    if (head == NULL) {
        head = baru;
    } else {
        Pesan* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = baru;
    }
    cout << "Pesan ditambahkan: \"" << isi << "\"\n";
}
