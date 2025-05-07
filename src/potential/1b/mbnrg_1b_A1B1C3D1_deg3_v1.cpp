#include "mbnrg_1b_A1B1C3D1_deg3_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B1C3D1_deg3 {

mbnrg_A1B1C3D1_deg3_v1::mbnrg_A1B1C3D1_deg3_v1(const std::string mon1) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==


    if (mon1 == "methanol") {
        coefficients = std::vector<double> {
             6.868666861962806e+02, // 0
            -1.174341144266569e+03, // 1
             5.935765595945736e+02, // 2
            -9.604133933508994e+01, // 3
            -4.654801791221747e+02, // 4
             7.888133770961091e+02, // 5
            -1.470301796851626e+02, // 6
             1.103360935893970e+03, // 7
             4.213327060141112e+02, // 8
             6.257083842584600e+02, // 9
             1.716459958698302e+02, // 10
            -8.962480398634440e+01, // 11
            -3.392198504032121e+02, // 12
            -6.933633293991226e+02, // 13
             6.599766739070992e+02, // 14
            -7.202311669214084e+02, // 15
            -1.429641561605540e+03, // 16
            -1.915721995091488e+03, // 17
            -7.541590059058850e+02, // 18
             6.561823752645632e+02, // 19
             7.268873945788800e+02, // 20
            -1.437720038784167e+03, // 21
            -1.356041451239533e+03, // 22
             7.741566986854513e+02, // 23
            -5.935612389127593e+02, // 24
             8.246064244821923e+01, // 25
             7.283403331805465e+02, // 26
            -3.818170723614121e+02, // 27
             3.879314506206793e+01, // 28
            -1.265867211770256e+03, // 29
            -1.532419525417884e+03, // 30
             3.167478136312220e+02, // 31
            -4.807207566399434e+02, // 32
            -1.956503351991998e+02, // 33
             1.189862912915181e+03, // 34
             3.426718183257182e+02, // 35
             5.852031834577588e+01, // 36
             1.189308526300237e+02, // 37
            -2.338484336972201e+02, // 38
             2.247294402288912e+02, // 39
            -4.728609212781320e+02, // 40
             7.914112857542490e+02, // 41
            -7.397796325838407e+02, // 42
             5.097214513402118e+01, // 43
            -2.828614584629427e+02, // 44
            -2.290098170842577e+02, // 45
             5.910087302969175e+02, // 46
             3.070606773405430e+02, // 47
             2.102175803906212e+03, // 48
            -1.216298121708136e+02, // 49
            -5.425098726451560e+02, // 50
            -9.169675181292902e+02, // 51
            -3.871633993202850e+03, // 52
             4.041051101378434e+02, // 53
             2.133209208152710e+03, // 54
             6.264248583973000e+02, // 55
            -1.628845497746752e+03, // 56
             1.670607924285853e+03, // 57
             1.214057805336387e+03, // 58
            -2.570911290358630e+02, // 59
             1.515753458669735e+03, // 60
            -4.772194431745554e+03, // 61
            -5.378649802394106e+02, // 62
            -3.129874692495441e+02, // 63
             2.925273775854247e+02, // 64
            -2.309730878577982e+02, // 65
             1.769265270828983e+03, // 66
             8.867329260832464e+02, // 67
            -1.114989452849146e+02, // 68
             4.764167385826951e+03, // 69
            -2.199887971149793e+03, // 70
            -1.742810404910829e+03, // 71
             3.349316910672428e+02, // 72
            -7.174982518008190e+02, // 73
            -4.861919074090034e+02, // 74
             7.444771214766890e+02, // 75
             3.552203996822905e+03, // 76
             8.917387531325708e+02, // 77
            -1.867660898012166e+03, // 78
            -3.030784483374483e+02, // 79
             7.214361508066615e+02, // 80
            -7.814591774207304e+01, // 81
            -4.166370822139813e+02, // 82
             2.342397684057116e+02, // 83
             1.456533676474241e+02, // 84
            -9.721676638903000e+01, // 85
            -5.007400830302767e+02, // 86
             4.319890544574687e+02, // 87
            -2.736329096880431e+02, // 88
             9.031328747582556e+02, // 89
             2.365046396271783e+01, // 90
             1.232194122795412e+02, // 91
            -2.515600547110917e+03, // 92
             2.147419147006461e+02, // 93
             1.529302919327520e+03, // 94
            -2.005585308415711e+02, // 95
             9.611652008896150e+02, // 96
            -4.163442769751671e+02, // 97
            -4.862521890454202e+02, // 98
            -9.719340872597388e+02, // 99
             4.888209739046027e+02, // 100
             2.866305818458189e+03, // 101
            -3.042393973724452e+01, // 102
             4.106174148835985e+02, // 103
            -4.355156459272175e+02, // 104
            -1.792478557262144e+03, // 105
            -1.647145585117063e+02, // 106
            -1.287216462026692e+03, // 107
            -6.158758966727810e+01, // 108
            -2.338807128628420e+02, // 109
             1.067272404021701e+03, // 110
            -3.852345880137273e+02, // 111
             6.095797443789712e+02, // 112
             1.546456974291190e+03, // 113
             7.550710516464867e+02, // 114
            -1.085802044216846e+03, // 115
             3.817171062562424e+02, // 116
            -2.226148146825686e+02, // 117
            -4.973333727388963e+02, // 118
             1.637358990805535e+03, // 119
            -5.882220080643077e+02, // 120
             2.494811251442512e+02, // 121
             1.381033925533938e+03, // 122
            -6.123420791365719e+02, // 123
             2.531582404313253e+02, // 124
            -5.355062792279474e+02, // 125
            -1.659277333570844e+02, // 126
            -2.145556962604554e+03, // 127
            -1.301274005181166e+02, // 128
             1.405437227161799e+02, // 129
            -1.050197477732458e+02, // 130
             7.836943429823438e+02, // 131
             1.345110754326374e+03, // 132
            -9.062003740920272e+01, // 133
             1.536391233883798e+03, // 134
             8.444488449464384e+02, // 135
             2.255142305587131e+03, // 136
             4.370843012236040e+02, // 137
            -3.293013588946197e+02, // 138
             5.599431996257721e+02, // 139
            -3.138566660811302e+02, // 140
             1.444418604857147e+03, // 141
             1.122442946979322e+03, // 142
            -2.105229306246341e+01, // 143
             3.204070309337458e+02, // 144
             7.797695692890027e+02, // 145
             7.000431402647839e+02, // 146
            -5.460849662467079e+02, // 147
             9.212028785017413e+02, // 148
            -3.877151753499861e+02, // 149
            -3.327595100463164e+02, // 150
             1.297136833561558e+03, // 151
            -2.556840503223144e+02, // 152
            -9.208427670248585e+02, // 153
            -1.453796487974496e+03, // 154
             2.850307882941855e+03, // 155
             2.474044358601729e+01, // 156
             6.548594141210870e+03, // 157
             1.053902347555032e+02, // 158
             8.108294101038426e+02, // 159
             1.418504996307101e+03, // 160
            -6.919177120178604e+01, // 161
             9.316243084538902e+02, // 162
             3.394654263109739e+02, // 163
             1.094890939135540e+02, // 164
             4.359344454484050e+00, // 165
             1.460588121286980e+03, // 166
            -3.955258437630090e+01, // 167
             1.045033710451448e+03, // 168
            -3.399945681443583e+02, // 169
             4.900175052106438e+01, // 170
            -2.981590244528485e+02, // 171
            -2.405609508557937e+02, // 172
             2.827149953802667e+03, // 173
            -1.023888223079916e+03, // 174
            -1.266193509099211e+02, // 175
            -2.227058350674671e+03, // 176
            -1.363385207239515e+03, // 177
            -3.320648684645641e+01, // 178
            -1.174694561754824e+03, // 179
            -1.758885512708270e+03, // 180
             8.759102864987726e+01, // 181
             3.904893161477881e+02, // 182
             1.626935375701574e+02, // 183
            -1.472411347138309e+03, // 184
             1.654199593055288e+02, // 185
             4.588365369202708e+02, // 186
             1.178537433077965e+03, // 187
             5.949649062970528e+02, // 188
            -3.134882952202908e+02, // 189
             1.447579257574277e+03, // 190
             4.406548014926715e+01, // 191
             5.809110476497769e+02, // 192
             3.982070320686465e+02, // 193
             3.949883478627481e+02, // 194
            -6.625492816095780e+03, // 195
            -1.068884324283095e+03, // 196
            -5.353733807442449e+02, // 197
             3.360063403606649e+03, // 198
             6.720033281306183e+02, // 199
            -2.091971081210959e+01, // 200
             3.929021580861679e+02, // 201
            -8.531587854070705e+01, // 202
            -9.488025401329313e+02, // 203
            -5.185912441219053e+02, // 204
             4.116101793318007e+02, // 205
            -2.309116243599835e+02, // 206
             2.690250333446610e+02, // 207
             7.020971800769047e+02, // 208
             4.068069547027346e+01, // 209
            -8.115929018651353e+02, // 210
            -2.932026406884692e+02, // 211
             2.527145109189867e+02, // 212
            -7.436592426374823e+02, // 213
            -2.121785252767874e+01, // 214
            -3.563678866960710e+03, // 215
            -3.013472616825910e+02, // 216
            -1.823562361775619e+02, // 217
             3.283880654242377e+02}; // 218
    m_k_x_intra_A_B_1 =  1.361154932746947e+00; // A^(-1))
    m_k_x_intra_A_C_1 =  1.546749702951077e+00; // A^(-1))
    m_k_x_intra_A_D_1 =  3.822434506442086e-01; // A^(-1))
    m_k_x_intra_B_C_1 =  4.668020164658152e-01; // A^(-1))
    m_k_x_intra_B_D_1 =  1.824754714555610e+00; // A^(-1))
    m_k_x_intra_C_C_1 =  5.447117907923629e-01; // A^(-1))
    m_k_x_intra_C_D_1 =  3.647858449678392e-01; // A^(-1))
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
