#include "mbnrg_1b_A1B1C3D1_deg3_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B1C3D1_deg3 {

mbnrg_A1B1C3D1_deg3_v1::mbnrg_A1B1C3D1_deg3_v1(const std::string mon1) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==


    if (mon1 == "methanol") {
        coefficients = std::vector<double> {
             6.869417721441074e+02, // 0
            -1.174292744823505e+03, // 1
             5.937800263717147e+02, // 2
            -9.587900025998067e+01, // 3
            -4.655819916089491e+02, // 4
             7.889610809583523e+02, // 5
            -1.469180391846829e+02, // 6
             1.103469439186840e+03, // 7
             4.213673756604786e+02, // 8
             6.257879613232576e+02, // 9
             1.717421158838628e+02, // 10
            -8.966487408034317e+01, // 11
            -3.393145362858535e+02, // 12
            -6.934852173851368e+02, // 13
             6.600066971220084e+02, // 14
            -7.202321366465910e+02, // 15
            -1.429671728781937e+03, // 16
            -1.915728894547691e+03, // 17
            -7.543103251725863e+02, // 18
             6.559417722116916e+02, // 19
             7.267715018828681e+02, // 20
            -1.437830546746864e+03, // 21
            -1.356245477559321e+03, // 22
             7.740672941144435e+02, // 23
            -5.934163051972675e+02, // 24
             8.256208755542347e+01, // 25
             7.283699207662152e+02, // 26
            -3.817991811808639e+02, // 27
             3.896296447500819e+01, // 28
            -1.266022688382620e+03, // 29
            -1.532422568393695e+03, // 30
             3.168869363229932e+02, // 31
            -4.806196827459701e+02, // 32
            -1.957527751843175e+02, // 33
             1.189241318948112e+03, // 34
             3.426564972552027e+02, // 35
             5.834694221944790e+01, // 36
             1.190605113306520e+02, // 37
            -2.338862623932302e+02, // 38
             2.247996332149668e+02, // 39
            -4.728506170990975e+02, // 40
             7.914613823778201e+02, // 41
            -7.399096825059365e+02, // 42
             5.104370438137936e+01, // 43
            -2.827766116211682e+02, // 44
            -2.289814297421625e+02, // 45
             5.909248205604714e+02, // 46
             3.070752396976906e+02, // 47
             2.102198502943796e+03, // 48
            -1.216987279188267e+02, // 49
            -5.424438375143777e+02, // 50
            -9.168733936349279e+02, // 51
            -3.871600209227550e+03, // 52
             4.040966223794134e+02, // 53
             2.133288428637722e+03, // 54
             6.267790296354864e+02, // 55
            -1.628838610627499e+03, // 56
             1.670536925150746e+03, // 57
             1.214032441296313e+03, // 58
            -2.571294385022911e+02, // 59
             1.516441231009784e+03, // 60
            -4.772133103806709e+03, // 61
            -5.378553473454934e+02, // 62
            -3.130233010324854e+02, // 63
             2.925177438015915e+02, // 64
            -2.309217233792025e+02, // 65
             1.769172008889386e+03, // 66
             8.867471962890801e+02, // 67
            -1.115028512394688e+02, // 68
             4.764240762139954e+03, // 69
            -2.199908920726729e+03, // 70
            -1.742875151256344e+03, // 71
             3.349161332787890e+02, // 72
            -7.174788416615769e+02, // 73
            -4.862743410129295e+02, // 74
             7.442553654799043e+02, // 75
             3.552260823046431e+03, // 76
             8.917736899653712e+02, // 77
            -1.867678570243632e+03, // 78
            -3.030912412897183e+02, // 79
             7.214513911790830e+02, // 80
            -7.806496318075813e+01, // 81
            -4.166321091393954e+02, // 82
             2.343913490853430e+02, // 83
             1.456632837015689e+02, // 84
            -9.723069618435397e+01, // 85
            -5.008049663871952e+02, // 86
             4.319484031446114e+02, // 87
            -2.736550980550052e+02, // 88
             9.032411575181653e+02, // 89
             2.372708275786974e+01, // 90
             1.232633370124217e+02, // 91
            -2.515615542107487e+03, // 92
             2.147174930139587e+02, // 93
             1.529300285884856e+03, // 94
            -2.005285412721025e+02, // 95
             9.611636435130414e+02, // 96
            -4.159573839092864e+02, // 97
            -4.862644162689523e+02, // 98
            -9.719247523092828e+02, // 99
             4.886153660544783e+02, // 100
             2.866399628860384e+03, // 101
            -3.040761184209772e+01, // 102
             4.106476027689635e+02, // 103
            -4.355551502059078e+02, // 104
            -1.792538021898572e+03, // 105
            -1.647361888141772e+02, // 106
            -1.287284659472452e+03, // 107
            -6.157472631725906e+01, // 108
            -2.338130532641410e+02, // 109
             1.067289767353275e+03, // 110
            -3.853522010827639e+02, // 111
             6.096048315157641e+02, // 112
             1.546385156222409e+03, // 113
             7.550549655849679e+02, // 114
            -1.085801942836855e+03, // 115
             3.817087362554532e+02, // 116
            -2.226580731931410e+02, // 117
            -4.973514379711621e+02, // 118
             1.637135126653998e+03, // 119
            -5.881644848566229e+02, // 120
             2.494981467279936e+02, // 121
             1.381048642174424e+03, // 122
            -6.124035223340250e+02, // 123
             2.531848598368619e+02, // 124
            -5.354550252981505e+02, // 125
            -1.659681043194554e+02, // 126
            -2.145427038555480e+03, // 127
            -1.300891802965656e+02, // 128
             1.405318836804934e+02, // 129
            -1.050269653285619e+02, // 130
             7.836832624999962e+02, // 131
             1.345148187937639e+03, // 132
            -9.060644142869357e+01, // 133
             1.536359834542312e+03, // 134
             8.444697313266113e+02, // 135
             2.255047411958396e+03, // 136
             4.366982100765576e+02, // 137
            -3.294908258335051e+02, // 138
             5.597407811615781e+02, // 139
            -3.138558302408290e+02, // 140
             1.444496655545526e+03, // 141
             1.122348641150702e+03, // 142
            -2.105933887869987e+01, // 143
             3.204785277670978e+02, // 144
             7.797590416636280e+02, // 145
             7.000182488943617e+02, // 146
            -5.461169632155065e+02, // 147
             9.211620730716737e+02, // 148
            -3.877638379329915e+02, // 149
            -3.327768712605827e+02, // 150
             1.297009629762434e+03, // 151
            -2.555927142672743e+02, // 152
            -9.208275055197829e+02, // 153
            -1.453830142036125e+03, // 154
             2.850157155106594e+03, // 155
             2.473074853065598e+01, // 156
             6.548568672367091e+03, // 157
             1.052233077866956e+02, // 158
             8.108235369897487e+02, // 159
             1.418266625025253e+03, // 160
            -6.929824596519968e+01, // 161
             9.316071014434880e+02, // 162
             3.394712571686108e+02, // 163
             1.095289058364717e+02, // 164
             4.280784423634820e+00, // 165
             1.460567596211349e+03, // 166
            -3.951922013340871e+01, // 167
             1.045126260532237e+03, // 168
            -3.399522864293149e+02, // 169
             4.905697080576257e+01, // 170
            -2.981819636704132e+02, // 171
            -2.405500845629309e+02, // 172
             2.827212177037462e+03, // 173
            -1.023967069732004e+03, // 174
            -1.265807967736361e+02, // 175
            -2.226958233288446e+03, // 176
            -1.363360878011282e+03, // 177
            -3.314030118598758e+01, // 178
            -1.174628180459862e+03, // 179
            -1.758915986514551e+03, // 180
             8.759278325443960e+01, // 181
             3.905911419875146e+02, // 182
             1.626380966753025e+02, // 183
            -1.472312281268586e+03, // 184
             1.654632204303712e+02, // 185
             4.588425948414145e+02, // 186
             1.178520716440722e+03, // 187
             5.949202326964968e+02, // 188
            -3.133960751189883e+02, // 189
             1.447438613448471e+03, // 190
             4.398668182173584e+01, // 191
             5.808329082925362e+02, // 192
             3.981030905440293e+02, // 193
             3.950030331701954e+02, // 194
            -6.625506055030047e+03, // 195
            -1.068728662969961e+03, // 196
            -5.353330628560319e+02, // 197
             3.360025655123659e+03, // 198
             6.720622285598416e+02, // 199
            -2.089561029360650e+01, // 200
             3.929117273488453e+02, // 201
            -8.535346537783586e+01, // 202
            -9.487482246610932e+02, // 203
            -5.186332012275062e+02, // 204
             4.115781026945709e+02, // 205
            -2.309054783920465e+02, // 206
             2.690955314478742e+02, // 207
             7.022205787776089e+02, // 208
             4.069228715676463e+01, // 209
            -8.116570495646513e+02, // 210
            -2.930944539787195e+02, // 211
             2.527465691162181e+02, // 212
            -7.436231512661694e+02, // 213
            -2.122014996561975e+01, // 214
            -3.563703477654594e+03, // 215
            -3.014917247628472e+02, // 216
            -1.823592300863171e+02, // 217
             3.283396985384794e+02}; // 218
    m_k_x_intra_A_B_1 =  1.361132483743297e+00; // A^(-1))
    m_k_x_intra_A_C_1 =  1.546599026934351e+00; // A^(-1))
    m_k_x_intra_A_D_1 =  3.821856157298635e-01; // A^(-1))
    m_k_x_intra_B_C_1 =  4.668188001043816e-01; // A^(-1))
    m_k_x_intra_B_D_1 =  1.824766617378106e+00; // A^(-1))
    m_k_x_intra_C_C_1 =  5.447430527141226e-01; // A^(-1))
    m_k_x_intra_C_D_1 =  3.647739859666888e-01; // A^(-1))
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
