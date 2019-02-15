class Box {
    public:
        /* Properties */
        char Color[];
        int Length, Width, Height;
        /* Methods */
        Box(int length, int width, int height);
        int getVolume();

}

Box::Box(int lenght, int widht, int height) {
    this.Width = width;
    this.Height = height;
}

Box::getVolume() {
    return this.Lenght * this.Widht * this.Height;
}