#ifndef ALGORITHMS_RANDOMFOREST_RANDOMFOREST_H
#define ALGORITHMS_RANDOMFOREST_RANDOMFOREST_H

#include "serialise_opencv_mat.h"
#include <hpx/hpx_init.hpp>
#include <hpx/hpx.hpp>
#include <hpx/runtime/serialization/serialize.hpp>
#include <hpx/runtime/serialization/array.hpp>
#include <hpx/include/actions.hpp>
#include "data_structures.cpp"
#include "core_functions.h"
#include <opencv2/opencv.hpp>

namespace algo {

    namespace randomforest {

        struct randomforest
        {
            public:
                randomforest();

                ~randomforest();

                int getNum_training_samples() const;

                void setNum_training_samples(int num_training_samples);

                int getNum_attributes_per_sample() const;

                void setNum_attributes_per_sample(int num_attributes_per_sample);

                int getNum_testing_samples() const;

                void setNum_testing_samples(int num_testing_samples);

                int getNum_sample_classes() const;

                void setNum_sample_classes(int num_sample_classes);

                void setParameters(int training_samples, int testing_samples, int attributes, int classes);

                void setDataFilePaths(std::string test_file_path, std::string train_file_path);

                int organise_computation(std::uint64_t np);

            private:
                int num_training_samples;
                int num_attributes_per_sample;
                int num_testing_samples;
                int num_sample_classes;
                std::string testing_file_path, training_file_path;
        };
    }
}

#endif //ALGORITHMS_RANDOMFOREST_RANDOMFOREST_H
