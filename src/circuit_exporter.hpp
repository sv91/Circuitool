#ifndef CIRCUIT_EXPORTER_H
#define CIRCUIT_EXPORTER_H

#include <vector>

#include <mvd/mvd3.hpp>
#include <morpho/morpho_h5_v1.hpp>
#include <morpho/morpho_tree.hpp>
namespace morpho{

class circuit_exporter
{
public:
    circuit_exporter(const std::string & circuit_filename, const std::string & data_folder);

    std::vector<morpho_tree> getAllPositions();


private:
    MVD3::MVD3File file;
    std::string data_folder_name;
};
}

#endif // CIRCUIT_EXPORTER_H
