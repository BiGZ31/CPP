#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    // Create a Data object
    Data data(42);

    // Serialize the address of the Data object
    uintptr_t serializedPtr = Serializer::serialize(&data);

    // Deserialize the serialized pointer
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    // Check if the deserialized pointer points to the original Data object
    if (deserializedPtr == &data) {
        std::cout << "Deserialization successful! Original and deserialized pointers match." << std::endl;
    } else {
        std::cout << "Deserialization failed! Original and deserialized pointers do not match." << std::endl;
    }

    return 0;
}