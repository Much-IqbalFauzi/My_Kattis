import "dart:io";

void main() {
    
    String name = stdin.readLineSync()!;
    int countB = 'b'.allMatches(name).length;
    int countK = 'k'.allMatches(name).length;
    
    if (countB > countK) {
        print("boba");
    } else if (countB < countK) {
        print("kiki");
    } else if ((countB == countK) && (countB != 0) && (countB != 0)) {
        print("boki");
    } else {
        print("none");
    }
}