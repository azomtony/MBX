#include "mbnrg_1b_A1C1B3D1_deg3_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1C1B3D1_deg3 {

mbnrg_A1C1B3D1_deg3_v1::mbnrg_A1C1B3D1_deg3_v1(const std::string mon1) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==


    if (mon1 == "methanol") {
        coefficients = std::vector<double> {
             5.484159750382379e+01, // 0
            -1.658397756073087e+03, // 1
             6.176396087970597e+03, // 2
            -2.226579335320420e+02, // 3
            -1.812576940583443e+03, // 4
             2.308155595770070e+03, // 5
             2.735969513034499e+03, // 6
             1.345244052250923e+02, // 7
             9.154007979128197e+02, // 8
             1.562599817720948e+03, // 9
             1.674383360196972e+03, // 10
            -2.985701310652293e+03, // 11
            -1.435791526430164e+03, // 12
             1.340375242009861e+03, // 13
             1.277853679699480e+03, // 14
            -1.484243027990984e+03, // 15
            -3.304917456202103e+03, // 16
            -2.624749000175106e+03, // 17
            -1.834159448907083e+03, // 18
             6.886636494138672e+03, // 19
             1.313421681897396e+03, // 20
             1.837929175702619e+03, // 21
             1.664221753586081e+03, // 22
            -3.383514059954288e+02, // 23
             6.498854841384859e+02, // 24
             6.012484924013647e+02, // 25
             3.719494197252341e+03, // 26
            -7.932337596876825e+03, // 27
            -5.659390938122052e+03, // 28
            -1.415638969942192e+03, // 29
            -4.928952362016427e+02, // 30
            -3.478988586155737e+00, // 31
             2.679349461336659e+03, // 32
             7.751444152081379e+03, // 33
            -2.302214663039543e+03, // 34
             7.704635007498399e+02, // 35
            -9.522086262241793e+01, // 36
            -2.135019946002759e+02, // 37
            -4.345019223811243e+02, // 38
            -1.316173582803333e+03, // 39
             2.713031336698479e+03, // 40
            -4.777578762271198e+02, // 41
             1.491013418118329e+02, // 42
            -1.601648163676186e+03, // 43
            -1.627264936557011e+03, // 44
             7.815095270327360e+01, // 45
             6.435650920727834e+02, // 46
            -7.595985448324699e+02, // 47
             2.205830203198354e+03, // 48
             7.012014660795327e+02, // 49
            -2.417193155389456e+02, // 50
            -9.317074356635941e+02, // 51
            -4.416565284023743e+02, // 52
             3.515957993809740e+02, // 53
             6.621680980374935e+02, // 54
            -2.698019005945473e+03, // 55
            -1.996874579542920e+03, // 56
             3.961176039624137e+03, // 57
            -2.128754904822554e+02, // 58
            -9.180565966944080e+02, // 59
            -8.336778908740125e+01, // 60
            -1.722045899274095e+03, // 61
             2.312055163494561e+03, // 62
            -1.283903962567730e+03, // 63
             2.973263416550416e+03, // 64
            -4.544758223920995e+03, // 65
             1.055856661269022e+03, // 66
             4.131531965296712e+02, // 67
             1.489602073992074e+03, // 68
            -1.889765090886038e+03, // 69
            -2.460620085969850e+03, // 70
             1.944656583447152e+03, // 71
             1.508638364661546e+03, // 72
            -1.398506032641041e+03, // 73
             2.177002123311648e+02, // 74
            -5.473839564103705e+02, // 75
            -3.359568470006635e+01, // 76
             1.583602676849919e+03, // 77
            -2.282032258860496e+02, // 78
             5.395636864410289e+02, // 79
             1.533048865966653e+02, // 80
            -2.363776968476753e+02, // 81
            -8.467942277894252e+02, // 82
             1.304525112221988e+03, // 83
            -5.043010816812753e+02, // 84
             1.131570398149907e+02, // 85
             1.901889340138355e+02, // 86
            -6.835076358921001e+02, // 87
            -7.672980921386259e+02, // 88
             4.436981359476033e+01, // 89
            -3.925633727497586e+02, // 90
            -5.289598657561778e+01, // 91
            -7.626321118920147e+02, // 92
            -4.698183432075213e+02, // 93
            -7.248035593439801e+02, // 94
            -2.239607888241184e+01, // 95
            -4.910003674625744e+00, // 96
            -1.690749274271353e+02, // 97
            -1.487050819564901e+01, // 98
            -5.605413832701581e+01, // 99
            -8.881276749605719e+00, // 100
            -6.028991073934097e+02, // 101
             2.414037252777048e+02, // 102
             4.622277514511474e+01, // 103
            -1.788415713687310e+03, // 104
            -8.685026011996633e+02, // 105
            -1.684922649243825e+03, // 106
             1.132892596184094e+03, // 107
            -6.443833853513981e+01, // 108
             5.120688983428330e+02, // 109
            -5.131935894853260e+02, // 110
             5.571819326596592e+02, // 111
             2.020104639625208e+03, // 112
             6.424977462187995e+02, // 113
             6.210659662629377e+01, // 114
             4.443561730466124e+02, // 115
            -1.003099422546095e+03, // 116
             4.572664066364654e+02, // 117
             3.681496140205271e+02, // 118
            -5.258675624597892e+02, // 119
             3.547337692991142e+02, // 120
            -1.102387622892947e+02, // 121
            -9.888250933350155e+02, // 122
            -3.827927661206200e+02, // 123
            -1.118617842417546e+03, // 124
            -1.082971693526900e+03, // 125
            -1.144084448721326e+03, // 126
            -1.269621705826466e+01, // 127
             5.553696784508853e+02, // 128
             2.466507824374063e+02, // 129
             2.149408676343134e+03, // 130
             1.516705185109869e+03, // 131
             1.202354693606232e+03, // 132
            -1.836179753963097e+02, // 133
             8.786507590305728e+02, // 134
            -3.054629296110994e+02, // 135
             2.287366742002846e+02, // 136
            -7.720043620037831e+02, // 137
            -1.854762478345918e+02, // 138
             9.419828110539214e+02, // 139
             4.388662464281861e+02, // 140
            -3.066438815133170e+03, // 141
             1.057676512893497e+03, // 142
             1.296744575592074e+03, // 143
            -4.980305570918658e+02, // 144
             1.700369945337777e+02, // 145
             7.072337534735700e+02, // 146
            -1.616679616964722e+02, // 147
             1.591258165550781e+02, // 148
             6.273023803839278e+01, // 149
            -3.739153179412855e+02, // 150
             6.076261060943411e+02, // 151
            -2.941926315762963e+02, // 152
            -2.222909337900170e+03, // 153
            -1.416039491768854e+03, // 154
             7.871253212486989e+02, // 155
            -2.250932938759376e+03, // 156
             6.628324918697559e+02, // 157
             2.537089275948192e+03, // 158
            -2.562018782770238e+02, // 159
             9.590659355740520e+00, // 160
             8.051994708933875e+02, // 161
             2.335333285668351e+02, // 162
             4.528070138072015e+01, // 163
            -2.194053454462856e+03, // 164
             4.583440855270840e+02, // 165
            -1.080708071960372e+03, // 166
            -4.285404156537722e+02, // 167
            -5.055194873871385e+02, // 168
             4.133733773703362e+02, // 169
             3.373353451981869e+03, // 170
            -1.617245661501187e+03, // 171
            -1.099290163229396e+03, // 172
            -1.587855231516648e+02, // 173
            -6.855938925183896e+02, // 174
            -1.101604969764875e+03, // 175
             1.591111012237327e+03, // 176
             7.237135099437612e+02, // 177
            -3.179792832217621e+02, // 178
             1.197652213462340e+03, // 179
             2.346444277379859e+02, // 180
            -8.150747180294130e+01, // 181
             7.772522163559019e+02, // 182
             7.836551219466901e+01, // 183
             9.617742481824776e+01, // 184
            -2.112816894674024e+01, // 185
             1.438332584539897e+02, // 186
             3.968706987785354e+02, // 187
             4.611191379027645e+02, // 188
             3.372948109298899e+02, // 189
            -2.147340760889019e+02, // 190
            -2.014432867186109e+03, // 191
            -3.096955328004863e+02, // 192
            -2.732590452124925e+02, // 193
            -8.591922120213216e+02, // 194
             4.208690702219183e+02, // 195
             2.032124348689921e+02, // 196
             2.021346939570953e+02, // 197
             9.687279887130900e+00, // 198
             1.083662152047615e+02, // 199
            -2.595663350145326e+02, // 200
             3.460762796431925e+02, // 201
             1.557284263798263e+02, // 202
            -6.131891326751103e+02, // 203
             3.822640377917966e+02, // 204
             2.285175769270686e+02, // 205
             3.248812813397856e+01, // 206
            -9.030164693374982e+02, // 207
            -4.385798588225258e+02, // 208
             5.051697315254657e+02, // 209
            -2.401065571295540e+02, // 210
             3.319751761624393e+02, // 211
             1.301792403266786e+03, // 212
             1.169121156362733e+03, // 213
             7.002741046489938e+02, // 214
             4.160929981414070e+02, // 215
            -6.582729269843410e+02, // 216
            -3.874548929114879e+02, // 217
             3.401562081074655e+03}; // 218
    m_k_x_intra_A_B_1 =  1.078399888459258e+00; // A^(-1))
    m_k_x_intra_A_C_1 =  1.337867591099812e+00; // A^(-1))
    m_k_x_intra_A_D_1 =  2.451107793431553e+00; // A^(-1))
    m_k_x_intra_B_B_1 =  5.658488869234299e-01; // A^(-1))
    m_k_x_intra_B_C_1 =  4.491766453158949e-01; // A^(-1))
    m_k_x_intra_B_D_1 =  3.156061907103480e-01; // A^(-1))
    m_k_x_intra_C_D_1 =  1.287741659434377e+00; // A^(-1))
    m_ri =  6.000000000000000e+00; // A
    m_ro =  8.000000000000000e+00; // A

    } // end if mon1 == "methanol"
    // =====>> END SECTION CONSTRUCTOR <<=====
}

//----------------------------------------------------------------------------//

double mbnrg_A1C1B3D1_deg3_v1::f_switch(const double r, double& g)
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

 std::vector<double> mbnrg_A1C1B3D1_deg3_v1::eval(const double *xyz1, const size_t n) {
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

        const double* coords_C_1_a = xyz.data() + 3;

        const double* coords_B_1_a = xyz.data() + 6;

        const double* coords_B_2_a = xyz.data() + 9;

        const double* coords_B_3_a = xyz.data() + 12;

        const double* coords_D_1_a = xyz.data() + 15;


        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
        variable vs[15];

        double xs[15];

        xs[0] = vs[0].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_1_a);
        xs[1] = vs[1].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_2_a);
        xs[2] = vs[2].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_3_a);
        xs[3] = vs[3].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_1_a);
        xs[4] = vs[4].v_exp(m_k_x_intra_A_D_1, coords_A_1_a, coords_D_1_a);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_2_a);
        xs[6] = vs[6].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_3_a);
        xs[7] = vs[7].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_1_a);
        xs[8] = vs[8].v_exp(m_k_x_intra_B_D_1, coords_B_1_a, coords_D_1_a);
        xs[9] = vs[9].v_exp(m_k_x_intra_B_B_1, coords_B_2_a, coords_B_3_a);
        xs[10] = vs[10].v_exp(m_k_x_intra_B_C_1, coords_B_2_a, coords_C_1_a);
        xs[11] = vs[11].v_exp(m_k_x_intra_B_D_1, coords_B_2_a, coords_D_1_a);
        xs[12] = vs[12].v_exp(m_k_x_intra_B_C_1, coords_B_3_a, coords_C_1_a);
        xs[13] = vs[13].v_exp(m_k_x_intra_B_D_1, coords_B_3_a, coords_D_1_a);
        xs[14] = vs[14].v_exp(m_k_x_intra_C_D_1, coords_C_1_a, coords_D_1_a);


        sw = 1.0;

        energies[j] = my_poly.eval(xs,coefficients.data());
        energies_sw[j] = energies[j]*sw;

    }
    return energies_sw;

}

//----------------------------------------------------------------------------//

std::vector<double> mbnrg_A1C1B3D1_deg3_v1::eval(const double *xyz1, double *grad1 , const size_t n, std::vector<double> *virial) {
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

        const double* coords_C_1_a = xyz.data() + 3;

        const double* coords_B_1_a = xyz.data() + 6;

        const double* coords_B_2_a = xyz.data() + 9;

        const double* coords_B_3_a = xyz.data() + 12;

        const double* coords_D_1_a = xyz.data() + 15;


        double* coords_A_1_a_g = gradients.data() + 0;

        double* coords_C_1_a_g = gradients.data() + 3;

        double* coords_B_1_a_g = gradients.data() + 6;

        double* coords_B_2_a_g = gradients.data() + 9;

        double* coords_B_3_a_g = gradients.data() + 12;

        double* coords_D_1_a_g = gradients.data() + 15;



        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
        variable vs[15];

        double xs[15];


        double gxs[15];

        xs[0] = vs[0].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_1_a);
        xs[1] = vs[1].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_2_a);
        xs[2] = vs[2].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_3_a);
        xs[3] = vs[3].v_exp(m_k_x_intra_A_C_1, coords_A_1_a, coords_C_1_a);
        xs[4] = vs[4].v_exp(m_k_x_intra_A_D_1, coords_A_1_a, coords_D_1_a);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_2_a);
        xs[6] = vs[6].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_3_a);
        xs[7] = vs[7].v_exp(m_k_x_intra_B_C_1, coords_B_1_a, coords_C_1_a);
        xs[8] = vs[8].v_exp(m_k_x_intra_B_D_1, coords_B_1_a, coords_D_1_a);
        xs[9] = vs[9].v_exp(m_k_x_intra_B_B_1, coords_B_2_a, coords_B_3_a);
        xs[10] = vs[10].v_exp(m_k_x_intra_B_C_1, coords_B_2_a, coords_C_1_a);
        xs[11] = vs[11].v_exp(m_k_x_intra_B_D_1, coords_B_2_a, coords_D_1_a);
        xs[12] = vs[12].v_exp(m_k_x_intra_B_C_1, coords_B_3_a, coords_C_1_a);
        xs[13] = vs[13].v_exp(m_k_x_intra_B_D_1, coords_B_3_a, coords_D_1_a);
        xs[14] = vs[14].v_exp(m_k_x_intra_C_D_1, coords_C_1_a, coords_D_1_a);


        sw = 1.0;

        energies[j] = my_poly.eval(xs,coefficients.data(),gxs);
        energies_sw[j] = energies[j]*sw;

        for (size_t i = 0; i < 15; i++) {
            gxs[i] *= sw;
        }

        vs[0].grads(gxs[0], coords_A_1_a_g, coords_B_1_a_g, coords_A_1_a, coords_B_1_a);
        vs[1].grads(gxs[1], coords_A_1_a_g, coords_B_2_a_g, coords_A_1_a, coords_B_2_a);
        vs[2].grads(gxs[2], coords_A_1_a_g, coords_B_3_a_g, coords_A_1_a, coords_B_3_a);
        vs[3].grads(gxs[3], coords_A_1_a_g, coords_C_1_a_g, coords_A_1_a, coords_C_1_a);
        vs[4].grads(gxs[4], coords_A_1_a_g, coords_D_1_a_g, coords_A_1_a, coords_D_1_a);
        vs[5].grads(gxs[5], coords_B_1_a_g, coords_B_2_a_g, coords_B_1_a, coords_B_2_a);
        vs[6].grads(gxs[6], coords_B_1_a_g, coords_B_3_a_g, coords_B_1_a, coords_B_3_a);
        vs[7].grads(gxs[7], coords_B_1_a_g, coords_C_1_a_g, coords_B_1_a, coords_C_1_a);
        vs[8].grads(gxs[8], coords_B_1_a_g, coords_D_1_a_g, coords_B_1_a, coords_D_1_a);
        vs[9].grads(gxs[9], coords_B_2_a_g, coords_B_3_a_g, coords_B_2_a, coords_B_3_a);
        vs[10].grads(gxs[10], coords_B_2_a_g, coords_C_1_a_g, coords_B_2_a, coords_C_1_a);
        vs[11].grads(gxs[11], coords_B_2_a_g, coords_D_1_a_g, coords_B_2_a, coords_D_1_a);
        vs[12].grads(gxs[12], coords_B_3_a_g, coords_C_1_a_g, coords_B_3_a, coords_C_1_a);
        vs[13].grads(gxs[13], coords_B_3_a_g, coords_D_1_a_g, coords_B_3_a, coords_D_1_a);
        vs[14].grads(gxs[14], coords_C_1_a_g, coords_D_1_a_g, coords_C_1_a, coords_D_1_a);


        for (size_t i = 0; i < 3; i++) {
            gradients[0 + i] += 0.0 ;
        }


        for (size_t i = 0; i < 18; i++) {
            grad1[i + j*18] += gradients[0 + i];
        }

        
        if (virial != 0) {
        
            (*virial)[0] += -coords_A_1_a[0]*coords_A_1_a_g[0]
                        -coords_C_1_a[0]*coords_C_1_a_g[0]
                        -coords_B_1_a[0]*coords_B_1_a_g[0]
                        -coords_B_2_a[0]*coords_B_2_a_g[0]
                        -coords_B_3_a[0]*coords_B_3_a_g[0]
                        -coords_D_1_a[0]*coords_D_1_a_g[0];

        
            (*virial)[1] += -coords_A_1_a[0]*coords_A_1_a_g[1]
                        -coords_C_1_a[0]*coords_C_1_a_g[1]
                        -coords_B_1_a[0]*coords_B_1_a_g[1]
                        -coords_B_2_a[0]*coords_B_2_a_g[1]
                        -coords_B_3_a[0]*coords_B_3_a_g[1]
                        -coords_D_1_a[0]*coords_D_1_a_g[1];

        
            (*virial)[2] += -coords_A_1_a[0]*coords_A_1_a_g[2]
                        -coords_C_1_a[0]*coords_C_1_a_g[2]
                        -coords_B_1_a[0]*coords_B_1_a_g[2]
                        -coords_B_2_a[0]*coords_B_2_a_g[2]
                        -coords_B_3_a[0]*coords_B_3_a_g[2]
                        -coords_D_1_a[0]*coords_D_1_a_g[2];

        
            (*virial)[4] += -coords_A_1_a[1]*coords_A_1_a_g[1]
                        -coords_C_1_a[1]*coords_C_1_a_g[1]
                        -coords_B_1_a[1]*coords_B_1_a_g[1]
                        -coords_B_2_a[1]*coords_B_2_a_g[1]
                        -coords_B_3_a[1]*coords_B_3_a_g[1]
                        -coords_D_1_a[1]*coords_D_1_a_g[1];

        
            (*virial)[5] += -coords_A_1_a[1]*coords_A_1_a_g[2]
                        -coords_C_1_a[1]*coords_C_1_a_g[2]
                        -coords_B_1_a[1]*coords_B_1_a_g[2]
                        -coords_B_2_a[1]*coords_B_2_a_g[2]
                        -coords_B_3_a[1]*coords_B_3_a_g[2]
                        -coords_D_1_a[1]*coords_D_1_a_g[2];

        
            (*virial)[8] += -coords_A_1_a[2]*coords_A_1_a_g[2]
                        -coords_C_1_a[2]*coords_C_1_a_g[2]
                        -coords_B_1_a[2]*coords_B_1_a_g[2]
                        -coords_B_2_a[2]*coords_B_2_a_g[2]
                        -coords_B_3_a[2]*coords_B_3_a_g[2]
                        -coords_D_1_a[2]*coords_D_1_a_g[2];

            (*virial)[3] = (*virial)[1];
            (*virial)[6] = (*virial)[2];
            (*virial)[7] = (*virial)[5];


        }


    }
    return energies_sw;

}

//----------------------------------------------------------------------------//
} // namespace mbnrg_A1C1B3D1_deg3
