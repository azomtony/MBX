#include "mbnrg_1b_A1B1C3D1_deg3_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B1C3D1_deg3 {

mbnrg_A1B1C3D1_deg3_v1::mbnrg_A1B1C3D1_deg3_v1(const std::string mon1) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==


    if (mon1 == "methanol") {
        coefficients = std::vector<double> {
             6.869472958931482e+02, // 0
            -1.174244788038392e+03, // 1
             5.937965772650089e+02, // 2
            -9.594988495408332e+01, // 3
            -4.655772468008541e+02, // 4
             7.889103276087609e+02, // 5
            -1.470701278796545e+02, // 6
             1.103389475561932e+03, // 7
             4.213978702976160e+02, // 8
             6.257706681100204e+02, // 9
             1.717028919537362e+02, // 10
            -8.964150816016846e+01, // 11
            -3.393689186947386e+02, // 12
            -6.934690155804001e+02, // 13
             6.599505835779638e+02, // 14
            -7.202308557292514e+02, // 15
            -1.429639184896882e+03, // 16
            -1.915728695764206e+03, // 17
            -7.542389178540413e+02, // 18
             6.559549843660793e+02, // 19
             7.267342819091675e+02, // 20
            -1.437755910427758e+03, // 21
            -1.356144069248347e+03, // 22
             7.742947843823238e+02, // 23
            -5.934822401073429e+02, // 24
             8.250350767033251e+01, // 25
             7.283327041203893e+02, // 26
            -3.818014384576309e+02, // 27
             3.890397799461388e+01, // 28
            -1.265910656123709e+03, // 29
            -1.532462917507197e+03, // 30
             3.169057779406901e+02, // 31
            -4.805622970855413e+02, // 32
            -1.957920195302215e+02, // 33
             1.188879852424847e+03, // 34
             3.427825138681887e+02, // 35
             5.836755312534817e+01, // 36
             1.191238617821931e+02, // 37
            -2.338468979995346e+02, // 38
             2.247443832762833e+02, // 39
            -4.728077038692124e+02, // 40
             7.913984353519945e+02, // 41
            -7.398790081858324e+02, // 42
             5.101970611379834e+01, // 43
            -2.827934253236873e+02, // 44
            -2.289190610655698e+02, // 45
             5.909350274513564e+02, // 46
             3.070941570873379e+02, // 47
             2.102194204437817e+03, // 48
            -1.217006925674352e+02, // 49
            -5.424208126791667e+02, // 50
            -9.168978977653093e+02, // 51
            -3.871631549844772e+03, // 52
             4.040728000517456e+02, // 53
             2.133279438497342e+03, // 54
             6.266969828358802e+02, // 55
            -1.628864242187690e+03, // 56
             1.670629080251528e+03, // 57
             1.214040525385729e+03, // 58
            -2.571327985964820e+02, // 59
             1.516756302171560e+03, // 60
            -4.772139825949342e+03, // 61
            -5.379022133354168e+02, // 62
            -3.130661312868625e+02, // 63
             2.925368747577561e+02, // 64
            -2.309060651052181e+02, // 65
             1.769185904681858e+03, // 66
             8.867596435712434e+02, // 67
            -1.114733181853247e+02, // 68
             4.764187644783611e+03, // 69
            -2.199944308757295e+03, // 70
            -1.742830603668931e+03, // 71
             3.349508196242584e+02, // 72
            -7.174791732084602e+02, // 73
            -4.863061810995736e+02, // 74
             7.442229131852116e+02, // 75
             3.552267264225371e+03, // 76
             8.916692672312979e+02, // 77
            -1.867671416110146e+03, // 78
            -3.030440066701718e+02, // 79
             7.214005561919586e+02, // 80
            -7.805192169635701e+01, // 81
            -4.166870061201335e+02, // 82
             2.344011693011194e+02, // 83
             1.456414523643130e+02, // 84
            -9.721322985918134e+01, // 85
            -5.007637371062507e+02, // 86
             4.320019619933130e+02, // 87
            -2.736060834280825e+02, // 88
             9.032428567935769e+02, // 89
             2.367061573341785e+01, // 90
             1.233159393209463e+02, // 91
            -2.515625523835008e+03, // 92
             2.147626630685566e+02, // 93
             1.529316163017527e+03, // 94
            -2.004737782083235e+02, // 95
             9.611975140086022e+02, // 96
            -4.160581042041978e+02, // 97
            -4.862691847411691e+02, // 98
            -9.718878565018911e+02, // 99
             4.884749726645680e+02, // 100
             2.866395922629215e+03, // 101
            -3.038600620947217e+01, // 102
             4.106562458132001e+02, // 103
            -4.354434432064928e+02, // 104
            -1.792489794840289e+03, // 105
            -1.647083061467895e+02, // 106
            -1.287285867887133e+03, // 107
            -6.157406230979958e+01, // 108
            -2.338428595759875e+02, // 109
             1.067273871556831e+03, // 110
            -3.853890510300066e+02, // 111
             6.095325288185398e+02, // 112
             1.546403193544563e+03, // 113
             7.551036561793135e+02, // 114
            -1.085819182108932e+03, // 115
             3.817100025439999e+02, // 116
            -2.226934953442851e+02, // 117
            -4.973364572895462e+02, // 118
             1.637177441736338e+03, // 119
            -5.881319334006835e+02, // 120
             2.494455945068696e+02, // 121
             1.381044981864447e+03, // 122
            -6.123839503772768e+02, // 123
             2.531395852683636e+02, // 124
            -5.354781658732063e+02, // 125
            -1.659716503390038e+02, // 126
            -2.145526421247564e+03, // 127
            -1.300846694734278e+02, // 128
             1.405249679676175e+02, // 129
            -1.049804830142617e+02, // 130
             7.837512008534611e+02, // 131
             1.345125022630458e+03, // 132
            -9.061738654583090e+01, // 133
             1.536380742127589e+03, // 134
             8.444802648125909e+02, // 135
             2.255238323046998e+03, // 136
             4.365770596556941e+02, // 137
            -3.294945081029813e+02, // 138
             5.597834283235750e+02, // 139
            -3.138451270056452e+02, // 140
             1.444479804959939e+03, // 141
             1.122401101907595e+03, // 142
            -2.103490787655521e+01, // 143
             3.204842208899537e+02, // 144
             7.797486034142790e+02, // 145
             6.999636058275972e+02, // 146
            -5.461702638156492e+02, // 147
             9.211695997630696e+02, // 148
            -3.877187866166839e+02, // 149
            -3.327439076234960e+02, // 150
             1.297021850638491e+03, // 151
            -2.555798141366863e+02, // 152
            -9.208511286376738e+02, // 153
            -1.453829696290323e+03, // 154
             2.850044018140839e+03, // 155
             2.475404476865931e+01, // 156
             6.548614339524572e+03, // 157
             1.051155530344509e+02, // 158
             8.107932954833993e+02, // 159
             1.418134588073475e+03, // 160
            -6.934115015149588e+01, // 161
             9.316378900795171e+02, // 162
             3.396149591904023e+02, // 163
             1.094692321472534e+02, // 164
             4.283515433042784e+00, // 165
             1.460515637707858e+03, // 166
            -3.950936286301441e+01, // 167
             1.045177213003816e+03, // 168
            -3.399298096837940e+02, // 169
             4.913393803469359e+01, // 170
            -2.982169871773979e+02, // 171
            -2.405668998848469e+02, // 172
             2.827133852118473e+03, // 173
            -1.024058805542080e+03, // 174
            -1.265231788982165e+02, // 175
            -2.226998919809894e+03, // 176
            -1.363399611129907e+03, // 177
            -3.312365774489103e+01, // 178
            -1.174597084942900e+03, // 179
            -1.758896385171939e+03, // 180
             8.760933041731575e+01, // 181
             3.906028358054413e+02, // 182
             1.626558854918385e+02, // 183
            -1.472342727659537e+03, // 184
             1.654247122850246e+02, // 185
             4.588916156255346e+02, // 186
             1.178556016554791e+03, // 187
             5.950143011436498e+02, // 188
            -3.134169754217460e+02, // 189
             1.447580881277377e+03, // 190
             4.400986798880906e+01, // 191
             5.808576255764303e+02, // 192
             3.981604904782511e+02, // 193
             3.949675425698331e+02, // 194
            -6.625469789208936e+03, // 195
            -1.068775100205457e+03, // 196
            -5.353224599511954e+02, // 197
             3.360085966494666e+03, // 198
             6.720698980021209e+02, // 199
            -2.084926929925899e+01, // 200
             3.929526844393455e+02, // 201
            -8.534684956736240e+01, // 202
            -9.487287901315940e+02, // 203
            -5.186429594655027e+02, // 204
             4.115737367201370e+02, // 205
            -2.308767970180075e+02, // 206
             2.690841456400945e+02, // 207
             7.022165947523232e+02, // 208
             4.066880632649446e+01, // 209
            -8.116982781909984e+02, // 210
            -2.931105991843096e+02, // 211
             2.527176141409168e+02, // 212
            -7.436290238140958e+02, // 213
            -2.120194014067494e+01, // 214
            -3.563661529125653e+03, // 215
            -3.015251092640940e+02, // 216
            -1.823352971256507e+02, // 217
             3.283210510375133e+02}; // 218
    m_k_x_intra_A_B_1 =  1.361199397578368e+00; // A^(-1))
    m_k_x_intra_A_C_1 =  1.546521249503989e+00; // A^(-1))
    m_k_x_intra_A_D_1 =  3.821978107826400e-01; // A^(-1))
    m_k_x_intra_B_C_1 =  4.668042029249262e-01; // A^(-1))
    m_k_x_intra_B_D_1 =  1.824794635373485e+00; // A^(-1))
    m_k_x_intra_C_C_1 =  5.447353522905729e-01; // A^(-1))
    m_k_x_intra_C_D_1 =  3.647848348717407e-01; // A^(-1))
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
