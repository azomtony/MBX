#include "mbnrg_1b_A1B1C3D1_deg3_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B1C3D1_deg3 {

mbnrg_A1B1C3D1_deg3_v1::mbnrg_A1B1C3D1_deg3_v1(const std::string mon1) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==


    if (mon1 == "methanol") {
        coefficients = std::vector<double> {
             7.232422752656128e+02, // 0
            -1.212087232185957e+03, // 1
             6.028987435976470e+02, // 2
            -5.358976580329027e+01, // 3
            -3.967116689676816e+02, // 4
             7.829783583732440e+02, // 5
            -2.243646736419577e+02, // 6
             1.176113931014992e+03, // 7
             4.038223964183404e+02, // 8
             5.865844570419058e+02, // 9
             9.863151340301584e+01, // 10
            -1.272455032673883e+02, // 11
            -3.320629038087048e+02, // 12
            -6.995956926254728e+02, // 13
             6.591428593307787e+02, // 14
            -7.524524484894586e+02, // 15
            -1.444139105921548e+03, // 16
            -1.934458163979662e+03, // 17
            -7.307727575476657e+02, // 18
             7.147436749622215e+02, // 19
             7.894726078095996e+02, // 20
            -1.506001562374513e+03, // 21
            -1.319738943045908e+03, // 22
             7.676344866861267e+02, // 23
            -6.523416982226083e+02, // 24
             1.522084547123867e+02, // 25
             6.935164696142789e+02, // 26
            -3.884231714490051e+02, // 27
             4.379485791692555e+01, // 28
            -1.330354990252676e+03, // 29
            -1.583560851001790e+03, // 30
             3.145406893514970e+02, // 31
            -4.427987560248075e+02, // 32
            -1.778242853060042e+02, // 33
             1.091069084947335e+03, // 34
            -5.857517334159305e+02, // 35
             1.381543945436958e+02, // 36
             1.362574369467407e+02, // 37
            -2.258083345399579e+02, // 38
             1.817483850786472e+02, // 39
            -4.433277267960781e+02, // 40
             8.028960751867166e+02, // 41
            -7.378605620866632e+02, // 42
             3.017210961415502e+01, // 43
            -2.425821152959741e+02, // 44
            -2.366375089975050e+02, // 45
             3.511538756482749e+02, // 46
             3.340753944972157e+02, // 47
             2.092129073609291e+03, // 48
            -6.382556046851153e+01, // 49
            -6.035938849562975e+02, // 50
            -9.230761926125216e+02, // 51
            -3.649783128795226e+03, // 52
             3.888921269563918e+02, // 53
             2.272939267156363e+03, // 54
             5.280834553759711e+02, // 55
            -1.741928403551949e+03, // 56
             1.656713744881772e+03, // 57
             1.205125017584616e+03, // 58
            -3.899947651736426e+02, // 59
             1.607932291478138e+03, // 60
            -4.639018673741461e+03, // 61
            -6.135414073571762e+02, // 62
            -3.382651449100568e+02, // 63
             3.213924035645862e+02, // 64
            -2.132344337519484e+02, // 65
             1.965001325199435e+03, // 66
             9.542835731484521e+02, // 67
            -8.766006916067545e+01, // 68
             4.573868142714359e+03, // 69
            -1.960957033135308e+03, // 70
            -1.704409661156410e+03, // 71
             4.137924762440809e+02, // 72
            -8.299558672390767e+02, // 73
            -4.873187537405337e+02, // 74
             7.021759693006420e+02, // 75
             3.454122363505529e+03, // 76
             8.910493135721013e+02, // 77
            -1.954639837193447e+03, // 78
            -3.506725097597505e+02, // 79
             6.823094500224668e+02, // 80
            -6.369074223320093e+01, // 81
            -4.540478144641623e+02, // 82
             2.729443524171980e+02, // 83
             1.693947369272531e+02, // 84
            -6.902712958368151e+01, // 85
            -5.248668844740051e+02, // 86
             4.116925945883195e+02, // 87
            -2.882379854682739e+02, // 88
             9.742015927218945e+02, // 89
            -4.819483917965181e+00, // 90
             1.615508017997487e+02, // 91
            -2.582833640481979e+03, // 92
             2.706187034633510e+02, // 93
             1.643766146773762e+03, // 94
            -1.934086666511749e+02, // 95
             6.736382491650595e+02, // 96
            -6.078990350847256e+02, // 97
            -4.639010924763122e+02, // 98
            -8.675213936235779e+02, // 99
             4.344787349137777e+02, // 100
             2.372169731260832e+03, // 101
            -2.207144249439261e+02, // 102
             4.149356964924259e+02, // 103
            -1.052726851803971e+03, // 104
            -1.699178127548302e+03, // 105
            -1.930287572725378e+02, // 106
            -1.295311221744914e+03, // 107
            -6.703435774376878e+01, // 108
            -1.809856884975457e+02, // 109
             1.125608151293327e+03, // 110
            -2.712237213639841e+02, // 111
             6.074933275519443e+02, // 112
             1.537814455970109e+03, // 113
             7.597013245490912e+02, // 114
            -1.132852212712151e+03, // 115
             3.514243395601418e+02, // 116
            -2.201689329462150e+02, // 117
            -4.833187831754663e+02, // 118
             1.751894227019601e+03, // 119
            -5.728662556562393e+02, // 120
             2.206156463111584e+02, // 121
             1.507052178047122e+03, // 122
            -5.118363838225377e+02, // 123
             2.876798176333727e+02, // 124
            -5.691078920484342e+02, // 125
            -1.469814061368572e+02, // 126
            -2.111186836088294e+03, // 127
            -1.923460339108354e+02, // 128
             1.078926038226282e+02, // 129
            -1.882068651709108e+02, // 130
             7.834537837108079e+02, // 131
             1.379082134602212e+03, // 132
            -1.043349306107116e+02, // 133
             1.551222178449033e+03, // 134
             8.069353042350884e+02, // 135
             2.208325792687099e+03, // 136
             4.031542514262016e+02, // 137
            -2.606403143134665e+02, // 138
             6.073971080635188e+02, // 139
            -3.554192215872050e+02, // 140
             1.415966392222232e+03, // 141
             1.023068228062987e+03, // 142
            -7.324421369040520e+00, // 143
             3.033164087317485e+02, // 144
             8.272208088050006e+02, // 145
             6.801453459102337e+02, // 146
            -5.672427310027480e+02, // 147
             9.271202454906241e+02, // 148
            -3.639788882146345e+02, // 149
            -2.948691103601383e+02, // 150
             1.338931945870100e+03, // 151
            -2.540400064623107e+02, // 152
            -9.679329273621992e+02, // 153
            -1.366478581283672e+03, // 154
             4.679916080548250e+03, // 155
             1.135539844154380e+02, // 156
             6.512844616008109e+03, // 157
             7.722675500157614e+01, // 158
             7.960828904298990e+02, // 159
             1.379182358573342e+03, // 160
            -1.053512892809209e+02, // 161
             8.954478710046177e+02, // 162
             3.442137944264924e+02, // 163
             4.566056145409870e+01, // 164
             4.983045392939440e+00, // 165
             1.524781788580153e+03, // 166
            -6.244229556311458e+01, // 167
             1.051364644352291e+03, // 168
            -3.530861632468193e+02, // 169
             8.223087465587187e+01, // 170
            -1.541237801319997e+02, // 171
            -2.475432192052893e+02, // 172
             2.792172569872983e+03, // 173
            -1.079671987939385e+03, // 174
            -1.557990771832796e+02, // 175
            -2.094534303746455e+03, // 176
            -1.404439909820413e+03, // 177
            -1.845611331523917e+01, // 178
            -1.256784797749325e+03, // 179
            -1.644667124288817e+03, // 180
             3.564716052687471e+01, // 181
             3.857277654679745e+02, // 182
             1.790947862177501e+02, // 183
            -1.560802443283035e+03, // 184
             1.819304058361970e+02, // 185
             4.751670932694196e+02, // 186
             1.147555822428906e+03, // 187
             8.469755330242850e+01, // 188
            -3.583901071043277e+02, // 189
             1.454959116935326e+03, // 190
             7.495800287783464e+01, // 191
             6.309324006983512e+02, // 192
             4.023853004890145e+02, // 193
             3.693498576997706e+02, // 194
            -6.513971299922788e+03, // 195
            -1.062231315028541e+03, // 196
            -5.828887992740084e+02, // 197
             3.188540571245042e+03, // 198
             7.146795099069384e+02, // 199
            -5.004440560283117e+01, // 200
             3.999309253245539e+02, // 201
            -5.327762545168898e+01, // 202
            -9.320549805685501e+02, // 203
            -6.354651871666371e+02, // 204
             5.707977067837951e+02, // 205
            -2.581802395793930e+02, // 206
             2.892686232258147e+02, // 207
             7.213080939759365e+02, // 208
             6.004404328644612e+00, // 209
            -8.451237784886781e+02, // 210
            -5.381350126892848e+02, // 211
             2.469322778885008e+02, // 212
            -7.473998304208475e+02, // 213
            -2.853723089178557e+00, // 214
            -3.629795061633177e+03, // 215
            -3.250777539034862e+02, // 216
            -1.914126187402583e+02, // 217
             3.258688116835086e+02}; // 218
    m_k_x_intra_A_B_1 =  1.365067332062440e+00; // A^(-1))
    m_k_x_intra_A_C_1 =  1.512167255515554e+00; // A^(-1))
    m_k_x_intra_A_D_1 =  3.886261404548821e-01; // A^(-1))
    m_k_x_intra_B_C_1 =  4.674919955913450e-01; // A^(-1))
    m_k_x_intra_B_D_1 =  1.541186905501551e+00; // A^(-1))
    m_k_x_intra_C_C_1 =  5.482123958113840e-01; // A^(-1))
    m_k_x_intra_C_D_1 =  3.719040543080897e-01; // A^(-1))
    m_ri =  6.000000000000000e+00; // A
    m_ro =  8.000000000000000e+00; // A

    } // end if mon1 == "methanol"
    // =====>> END SECTION CONSTRUCTOR <<=====
}

//----------------------------------------------------------------------------//

double mbnrg_A1B1C3D1_deg3_v1::f_switch(const double r, double& g)
{
    if (r > m_ro) {
        g = 0.0;
        return 0.0;
    } else if (r > m_ri) {
        const double t1 = M_PI/(m_ro - m_ri);
        const double x = (r - m_ri)*t1;
        g = - std::sin(x)*t1/2.0;
        return (1.0 + std::cos(x))/2.0;
    } else {
        g = 0.0;
        return 1.0;
    }
}

//----------------------------------------------------------------------------//

 std::vector<double> mbnrg_A1B1C3D1_deg3_v1::eval(const double *xyz1, const size_t n) {
    std::vector<double> energies(n,0.0);
    std::vector<double> energies_sw(n,0.0);

    std::vector<double> xyz(18);
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double *mon1 = xyz1 + 18*j;


        if (false ) {
             continue;
        }

        std::copy(mon1, mon1 + 18, xyz.begin() + 0);


        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_a = xyz.data() + 3;

        const double* coords_C_1_a = xyz.data() + 6;

        const double* coords_C_2_a = xyz.data() + 9;

        const double* coords_C_3_a = xyz.data() + 12;

        const double* coords_D_1_a = xyz.data() + 15;


        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
        variable vs[15];

        double xs[15];

        xs[0] = vs[0].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_1_a);
        xs[1] = vs[1].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_1_a);
        xs[2] = vs[2].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_2_a);
        xs[3] = vs[3].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_3_a);
        xs[4] = vs[4].v_exp(m_k_x_intra_A_D_1, coords_A_1_a, coords_D_1_a);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_1_a);
        xs[6] = vs[6].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_2_a);
        xs[7] = vs[7].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_3_a);
        xs[8] = vs[8].v_exp(m_k_x_intra_B_D_1, coords_B_1_a, coords_D_1_a);
        xs[9] = vs[9].v_exp(m_k_x_intra_C_C_1, coords_C_1_a, coords_C_2_a);
        xs[10] = vs[10].v_exp(m_k_x_intra_C_C_1, coords_C_1_a, coords_C_3_a);
        xs[11] = vs[11].v_exp(m_k_x_intra_C_D_1, coords_C_1_a, coords_D_1_a);
        xs[12] = vs[12].v_exp(m_k_x_intra_C_C_1, coords_C_2_a, coords_C_3_a);
        xs[13] = vs[13].v_exp(m_k_x_intra_C_D_1, coords_C_2_a, coords_D_1_a);
        xs[14] = vs[14].v_exp(m_k_x_intra_C_D_1, coords_C_3_a, coords_D_1_a);


        sw = 1.0;

        energies[j] = my_poly.eval(xs,coefficients.data());
        energies_sw[j] = energies[j]*sw;

    }
    return energies_sw;

}

//----------------------------------------------------------------------------//

std::vector<double> mbnrg_A1B1C3D1_deg3_v1::eval(const double *xyz1, double *grad1 , const size_t n, std::vector<double> *virial) {
    std::vector<double> energies(n,0.0);
    std::vector<double> energies_sw(n,0.0);

    std::vector<double> xyz(18);
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double *mon1 = xyz1 + 18*j;


        if (false ) {
             continue;
        }

        std::vector<double> gradients(18,0.0);

        std::copy(mon1, mon1 + 18, xyz.begin() + 0);
        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_a = xyz.data() + 3;

        const double* coords_C_1_a = xyz.data() + 6;

        const double* coords_C_2_a = xyz.data() + 9;

        const double* coords_C_3_a = xyz.data() + 12;

        const double* coords_D_1_a = xyz.data() + 15;


        double* coords_A_1_a_g = gradients.data() + 0;

        double* coords_B_1_a_g = gradients.data() + 3;

        double* coords_C_1_a_g = gradients.data() + 6;

        double* coords_C_2_a_g = gradients.data() + 9;

        double* coords_C_3_a_g = gradients.data() + 12;

        double* coords_D_1_a_g = gradients.data() + 15;



        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
        variable vs[15];

        double xs[15];


        double gxs[15];

        xs[0] = vs[0].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_1_a);
        xs[1] = vs[1].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_1_a);
        xs[2] = vs[2].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_2_a);
        xs[3] = vs[3].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_3_a);
        xs[4] = vs[4].v_exp(m_k_x_intra_A_D_1, coords_A_1_a, coords_D_1_a);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_1_a);
        xs[6] = vs[6].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_2_a);
        xs[7] = vs[7].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_3_a);
        xs[8] = vs[8].v_exp(m_k_x_intra_B_D_1, coords_B_1_a, coords_D_1_a);
        xs[9] = vs[9].v_exp(m_k_x_intra_C_C_1, coords_C_1_a, coords_C_2_a);
        xs[10] = vs[10].v_exp(m_k_x_intra_C_C_1, coords_C_1_a, coords_C_3_a);
        xs[11] = vs[11].v_exp(m_k_x_intra_C_D_1, coords_C_1_a, coords_D_1_a);
        xs[12] = vs[12].v_exp(m_k_x_intra_C_C_1, coords_C_2_a, coords_C_3_a);
        xs[13] = vs[13].v_exp(m_k_x_intra_C_D_1, coords_C_2_a, coords_D_1_a);
        xs[14] = vs[14].v_exp(m_k_x_intra_C_D_1, coords_C_3_a, coords_D_1_a);


        sw = 1.0;

        energies[j] = my_poly.eval(xs,coefficients.data(),gxs);
        energies_sw[j] = energies[j]*sw;

        for (size_t i = 0; i < 15; i++) {
            gxs[i] *= sw;
        }

        vs[0].grads(gxs[0], coords_A_1_a_g, coords_B_1_a_g, coords_A_1_a, coords_B_1_a);
        vs[1].grads(gxs[1], coords_A_1_a_g, coords_C_1_a_g, coords_A_1_a, coords_C_1_a);
        vs[2].grads(gxs[2], coords_A_1_a_g, coords_C_2_a_g, coords_A_1_a, coords_C_2_a);
        vs[3].grads(gxs[3], coords_A_1_a_g, coords_C_3_a_g, coords_A_1_a, coords_C_3_a);
        vs[4].grads(gxs[4], coords_A_1_a_g, coords_D_1_a_g, coords_A_1_a, coords_D_1_a);
        vs[5].grads(gxs[5], coords_B_1_a_g, coords_C_1_a_g, coords_B_1_a, coords_C_1_a);
        vs[6].grads(gxs[6], coords_B_1_a_g, coords_C_2_a_g, coords_B_1_a, coords_C_2_a);
        vs[7].grads(gxs[7], coords_B_1_a_g, coords_C_3_a_g, coords_B_1_a, coords_C_3_a);
        vs[8].grads(gxs[8], coords_B_1_a_g, coords_D_1_a_g, coords_B_1_a, coords_D_1_a);
        vs[9].grads(gxs[9], coords_C_1_a_g, coords_C_2_a_g, coords_C_1_a, coords_C_2_a);
        vs[10].grads(gxs[10], coords_C_1_a_g, coords_C_3_a_g, coords_C_1_a, coords_C_3_a);
        vs[11].grads(gxs[11], coords_C_1_a_g, coords_D_1_a_g, coords_C_1_a, coords_D_1_a);
        vs[12].grads(gxs[12], coords_C_2_a_g, coords_C_3_a_g, coords_C_2_a, coords_C_3_a);
        vs[13].grads(gxs[13], coords_C_2_a_g, coords_D_1_a_g, coords_C_2_a, coords_D_1_a);
        vs[14].grads(gxs[14], coords_C_3_a_g, coords_D_1_a_g, coords_C_3_a, coords_D_1_a);


        for (size_t i = 0; i < 3; i++) {
            gradients[0 + i] += 0.0 ;
        }


        for (size_t i = 0; i < 18; i++) {
            grad1[i + j*18] += gradients[0 + i];
        }

        
        if (virial != 0) {
        
            (*virial)[0] += -coords_A_1_a[0]*coords_A_1_a_g[0]
                        -coords_B_1_a[0]*coords_B_1_a_g[0]
                        -coords_C_1_a[0]*coords_C_1_a_g[0]
                        -coords_C_2_a[0]*coords_C_2_a_g[0]
                        -coords_C_3_a[0]*coords_C_3_a_g[0]
                        -coords_D_1_a[0]*coords_D_1_a_g[0];

        
            (*virial)[1] += -coords_A_1_a[0]*coords_A_1_a_g[1]
                        -coords_B_1_a[0]*coords_B_1_a_g[1]
                        -coords_C_1_a[0]*coords_C_1_a_g[1]
                        -coords_C_2_a[0]*coords_C_2_a_g[1]
                        -coords_C_3_a[0]*coords_C_3_a_g[1]
                        -coords_D_1_a[0]*coords_D_1_a_g[1];

        
            (*virial)[2] += -coords_A_1_a[0]*coords_A_1_a_g[2]
                        -coords_B_1_a[0]*coords_B_1_a_g[2]
                        -coords_C_1_a[0]*coords_C_1_a_g[2]
                        -coords_C_2_a[0]*coords_C_2_a_g[2]
                        -coords_C_3_a[0]*coords_C_3_a_g[2]
                        -coords_D_1_a[0]*coords_D_1_a_g[2];

        
            (*virial)[4] += -coords_A_1_a[1]*coords_A_1_a_g[1]
                        -coords_B_1_a[1]*coords_B_1_a_g[1]
                        -coords_C_1_a[1]*coords_C_1_a_g[1]
                        -coords_C_2_a[1]*coords_C_2_a_g[1]
                        -coords_C_3_a[1]*coords_C_3_a_g[1]
                        -coords_D_1_a[1]*coords_D_1_a_g[1];

        
            (*virial)[5] += -coords_A_1_a[1]*coords_A_1_a_g[2]
                        -coords_B_1_a[1]*coords_B_1_a_g[2]
                        -coords_C_1_a[1]*coords_C_1_a_g[2]
                        -coords_C_2_a[1]*coords_C_2_a_g[2]
                        -coords_C_3_a[1]*coords_C_3_a_g[2]
                        -coords_D_1_a[1]*coords_D_1_a_g[2];

        
            (*virial)[8] += -coords_A_1_a[2]*coords_A_1_a_g[2]
                        -coords_B_1_a[2]*coords_B_1_a_g[2]
                        -coords_C_1_a[2]*coords_C_1_a_g[2]
                        -coords_C_2_a[2]*coords_C_2_a_g[2]
                        -coords_C_3_a[2]*coords_C_3_a_g[2]
                        -coords_D_1_a[2]*coords_D_1_a_g[2];

            (*virial)[3] = (*virial)[1];
            (*virial)[6] = (*virial)[2];
            (*virial)[7] = (*virial)[5];


        }


    }
    return energies_sw;

}

//----------------------------------------------------------------------------//
} // namespace mbnrg_A1B1C3D1_deg3
