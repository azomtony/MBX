#include "mbnrg_1b_A1B1C3D1_deg3_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B1C3D1_deg3 {

mbnrg_A1B1C3D1_deg3_v1::mbnrg_A1B1C3D1_deg3_v1(const std::string mon1) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==


    if (mon1 == "methanol") {
        coefficients = std::vector<double> {
             7.142201495175825e+02, // 0
            -1.212528993316779e+03, // 1
             5.304960409188783e+02, // 2
            -4.605505573666439e+01, // 3
            -4.859241674188938e+02, // 4
             7.910679381117466e+02, // 5
             1.611556573429954e+01, // 6
             1.117271668225399e+03, // 7
             4.240253480567951e+02, // 8
             6.282521632247801e+02, // 9
             1.729552645667190e+02, // 10
            -4.847094648167743e+01, // 11
            -2.600769220510441e+02, // 12
            -7.146920323658779e+02, // 13
             6.187662883959184e+02, // 14
            -7.255647388924766e+02, // 15
            -1.427285682316477e+03, // 16
            -1.883839428272120e+03, // 17
            -7.714350277481227e+02, // 18
             5.690159871814841e+02, // 19
             8.211187253293783e+02, // 20
            -1.446679728914053e+03, // 21
            -1.390569483057658e+03, // 22
             6.762020231068171e+02, // 23
            -5.635432735808548e+02, // 24
             7.784396721605368e+01, // 25
             7.546409642269010e+02, // 26
            -4.018052877198801e+02, // 27
            -2.128267739587729e+00, // 28
            -1.275262832056208e+03, // 29
            -1.495231889087336e+03, // 30
             2.439195140890043e+02, // 31
            -5.940580092748555e+02, // 32
            -1.233129750887131e+02, // 33
             1.728529980832817e+03, // 34
             7.624621412048277e+02, // 35
            -9.405104645892767e+01, // 36
             8.178204936034714e+01, // 37
            -2.918358316854213e+02, // 38
             2.979651169603007e+02, // 39
            -5.316044168265144e+02, // 40
             8.591488883751764e+02, // 41
            -7.860491821348784e+02, // 42
             7.200290967809119e+01, // 43
            -3.302724013300933e+02, // 44
            -2.945570115978960e+02, // 45
             6.003115346538408e+02, // 46
             2.865762491818369e+02, // 47
             2.096649917139326e+03, // 48
            -1.487448888657068e+02, // 49
            -4.937424887493781e+02, // 50
            -9.205659592914708e+02, // 51
            -3.833569797783030e+03, // 52
             4.266690518220217e+02, // 53
             2.133083282135866e+03, // 54
             8.061381667973718e+02, // 55
            -1.578563549617709e+03, // 56
             1.625727535437722e+03, // 57
             1.212383468096910e+03, // 58
            -2.033378598554441e+02, // 59
             9.585989196118938e+02, // 60
            -4.800898892129137e+03, // 61
            -4.961276228633070e+02, // 62
            -2.404210748202663e+02, // 63
             2.806959653578480e+02, // 64
            -2.705121453059432e+02, // 65
             1.697151520989177e+03, // 66
             8.918635885787163e+02, // 67
            -1.269743448915140e+02, // 68
             4.763647860903096e+03, // 69
            -2.314119673457658e+03, // 70
            -1.751064998316063e+03, // 71
             2.590739158096808e+02, // 72
            -7.477274977388364e+02, // 73
            -4.356356256867844e+02, // 74
             8.999062527760645e+02, // 75
             3.536646637020022e+03, // 76
             9.290045791254718e+02, // 77
            -1.876676164477637e+03, // 78
            -3.356452431496949e+02, // 79
             7.741041116083928e+02, // 80
            -1.387137394377211e+02, // 81
            -3.972084935622646e+02, // 82
             1.654349828974870e+02, // 83
             1.708035025808715e+02, // 84
            -1.099653184932671e+02, // 85
            -4.714791249133877e+02, // 86
             4.008263275020437e+02, // 87
            -2.996014757349897e+02, // 88
             8.423964988106607e+02, // 89
             2.765716355811952e+00, // 90
             5.676597092021671e+01, // 91
            -2.526406373494568e+03, // 92
             1.909845270642079e+02, // 93
             1.499519673280695e+03, // 94
            -2.632622708529111e+02, // 95
             1.095341466973553e+03, // 96
            -2.415276484743522e+02, // 97
            -4.599928539670818e+02, // 98
            -1.074090645737278e+03, // 99
             7.653701691599615e+02, // 100
             3.044370839718397e+03, // 101
             1.172895088763690e+02, // 102
             3.992293618677213e+02, // 103
            -4.479314581178772e+01, // 104
            -1.793574030167714e+03, // 105
            -1.324831820075011e+02, // 106
            -1.245090988322158e+03, // 107
            -7.070213049243847e+01, // 108
            -2.105756972781535e+02, // 109
             1.048641197970416e+03, // 110
            -3.795950253438087e+02, // 111
             6.305246698497334e+02, // 112
             1.532472338848968e+03, // 113
             7.359020613096478e+02, // 114
            -1.052070197350517e+03, // 115
             3.571547433820271e+02, // 116
            -1.717150763935428e+02, // 117
            -5.353619326344624e+02, // 118
             1.499656550179972e+03, // 119
            -6.419347386150953e+02, // 120
             2.933576166725481e+02, // 121
             1.358736891805510e+03, // 122
            -6.508435380173187e+02, // 123
             2.756639674592567e+02, // 124
            -5.261636011049451e+02, // 125
            -1.440624457949552e+02, // 126
            -2.146751279975114e+03, // 127
            -9.838506490633033e+01, // 128
             1.459933314551641e+02, // 129
            -7.377810449217166e+01, // 130
             7.629070176254122e+02, // 131
             1.348854174349127e+03, // 132
            -7.282310646946665e+01, // 133
             1.442491452439027e+03, // 134
             8.230992115698890e+02, // 135
             2.191866819275442e+03, // 136
             7.389203258760651e+02, // 137
            -4.098564168849980e+02, // 138
             4.473677979231771e+02, // 139
            -3.270605782459189e+02, // 140
             1.551402073423211e+03, // 141
             1.154533369892395e+03, // 142
            -1.806962289715715e+00, // 143
             3.127753210471643e+02, // 144
             7.900789621972460e+02, // 145
             7.511166465005745e+02, // 146
            -5.251031128984537e+02, // 147
             9.141116885572802e+02, // 148
            -3.832516957602133e+02, // 149
            -3.394697219956517e+02, // 150
             1.280217299956050e+03, // 151
            -3.188876755434675e+02, // 152
            -9.086225335624130e+02, // 153
            -1.443022119269931e+03, // 154
             1.885940861374209e+03, // 155
             7.128507626663986e+00, // 156
             6.531195834809775e+03, // 157
             2.574576383080745e+02, // 158
             8.373395832715419e+02, // 159
             1.642521487901940e+03, // 160
             3.122002016118141e+01, // 161
             9.426718999567687e+02, // 162
             2.454470380373639e+02, // 163
             1.180356867363042e+02, // 164
             5.079020357679902e+01, // 165
             1.522803839526221e+03, // 166
            -4.674867522046367e+01, // 167
             9.486212469781810e+02, // 168
            -3.857622001054747e+02, // 169
            -5.185740462778151e+01, // 170
            -3.221473374140984e+02, // 171
            -2.300930018231073e+02, // 172
             2.858514820300627e+03, // 173
            -9.102383650408716e+02, // 174
            -1.618762992741590e+02, // 175
            -2.240080739656607e+03, // 176
            -1.347785253080897e+03, // 177
            -8.738848594458990e+01, // 178
            -1.241252480060089e+03, // 179
            -1.756966246598581e+03, // 180
             1.359898608343623e+02, // 181
             3.340556413140587e+02, // 182
             1.768670678216875e+02, // 183
            -1.411785168075687e+03, // 184
             1.664412828036519e+02, // 185
             4.371475351665655e+02, // 186
             1.155351676021962e+03, // 187
             9.377401991319002e+02, // 188
            -3.383864292991707e+02, // 189
             1.409014582350678e+03, // 190
             8.263630998606476e+01, // 191
             5.602392818196894e+02, // 192
             4.263477597784460e+02, // 193
             4.194692697515686e+02, // 194
            -6.651592301294975e+03, // 195
            -1.078227557336331e+03, // 196
            -5.118610130542781e+02, // 197
             3.343779586835922e+03, // 198
             6.381146329401961e+02, // 199
            -6.271345732777627e+01, // 200
             3.472919563217086e+02, // 201
            -1.095972067859985e+02, // 202
            -9.845376055122709e+02, // 203
            -5.152126789720741e+02, // 204
             3.429370192475560e+02, // 205
            -2.224507362233192e+02, // 206
             2.333170309771826e+02, // 207
             6.322193046942486e+02, // 208
             3.984525004653210e+01, // 209
            -7.342171116671217e+02, // 210
            -2.133502818341040e+02, // 211
             2.559475627590483e+02, // 212
            -7.429158432505060e+02, // 213
            -1.326590301092809e+01, // 214
            -3.564380465991335e+03, // 215
            -1.990967145778306e+02, // 216
            -1.924037889509290e+02, // 217
             3.687230658539361e+02}; // 218
    m_k_x_intra_A_B_1 =  1.331780497302666e+00; // A^(-1))
    m_k_x_intra_A_C_1 =  1.681221049707335e+00; // A^(-1))
    m_k_x_intra_A_D_1 =  3.593319862499402e-01; // A^(-1))
    m_k_x_intra_B_C_1 =  4.706766369162576e-01; // A^(-1))
    m_k_x_intra_B_D_1 =  1.971923698287737e+00; // A^(-1))
    m_k_x_intra_C_C_1 =  5.358241527540566e-01; // A^(-1))
    m_k_x_intra_C_D_1 =  3.630396027868917e-01; // A^(-1))
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
