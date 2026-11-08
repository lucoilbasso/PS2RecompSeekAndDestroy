#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SpecialCalcCoordinate__16ST_EffectSpecial
// Address: 0x123638 - 0x123c38
void SpecialCalcCoordinate__16ST_EffectSpecial_0x123638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpecialCalcCoordinate__16ST_EffectSpecial_0x123638");
#endif

    switch (ctx->pc) {
        case 0x123638u: goto label_123638;
        case 0x12363cu: goto label_12363c;
        case 0x123640u: goto label_123640;
        case 0x123644u: goto label_123644;
        case 0x123648u: goto label_123648;
        case 0x12364cu: goto label_12364c;
        case 0x123650u: goto label_123650;
        case 0x123654u: goto label_123654;
        case 0x123658u: goto label_123658;
        case 0x12365cu: goto label_12365c;
        case 0x123660u: goto label_123660;
        case 0x123664u: goto label_123664;
        case 0x123668u: goto label_123668;
        case 0x12366cu: goto label_12366c;
        case 0x123670u: goto label_123670;
        case 0x123674u: goto label_123674;
        case 0x123678u: goto label_123678;
        case 0x12367cu: goto label_12367c;
        case 0x123680u: goto label_123680;
        case 0x123684u: goto label_123684;
        case 0x123688u: goto label_123688;
        case 0x12368cu: goto label_12368c;
        case 0x123690u: goto label_123690;
        case 0x123694u: goto label_123694;
        case 0x123698u: goto label_123698;
        case 0x12369cu: goto label_12369c;
        case 0x1236a0u: goto label_1236a0;
        case 0x1236a4u: goto label_1236a4;
        case 0x1236a8u: goto label_1236a8;
        case 0x1236acu: goto label_1236ac;
        case 0x1236b0u: goto label_1236b0;
        case 0x1236b4u: goto label_1236b4;
        case 0x1236b8u: goto label_1236b8;
        case 0x1236bcu: goto label_1236bc;
        case 0x1236c0u: goto label_1236c0;
        case 0x1236c4u: goto label_1236c4;
        case 0x1236c8u: goto label_1236c8;
        case 0x1236ccu: goto label_1236cc;
        case 0x1236d0u: goto label_1236d0;
        case 0x1236d4u: goto label_1236d4;
        case 0x1236d8u: goto label_1236d8;
        case 0x1236dcu: goto label_1236dc;
        case 0x1236e0u: goto label_1236e0;
        case 0x1236e4u: goto label_1236e4;
        case 0x1236e8u: goto label_1236e8;
        case 0x1236ecu: goto label_1236ec;
        case 0x1236f0u: goto label_1236f0;
        case 0x1236f4u: goto label_1236f4;
        case 0x1236f8u: goto label_1236f8;
        case 0x1236fcu: goto label_1236fc;
        case 0x123700u: goto label_123700;
        case 0x123704u: goto label_123704;
        case 0x123708u: goto label_123708;
        case 0x12370cu: goto label_12370c;
        case 0x123710u: goto label_123710;
        case 0x123714u: goto label_123714;
        case 0x123718u: goto label_123718;
        case 0x12371cu: goto label_12371c;
        case 0x123720u: goto label_123720;
        case 0x123724u: goto label_123724;
        case 0x123728u: goto label_123728;
        case 0x12372cu: goto label_12372c;
        case 0x123730u: goto label_123730;
        case 0x123734u: goto label_123734;
        case 0x123738u: goto label_123738;
        case 0x12373cu: goto label_12373c;
        case 0x123740u: goto label_123740;
        case 0x123744u: goto label_123744;
        case 0x123748u: goto label_123748;
        case 0x12374cu: goto label_12374c;
        case 0x123750u: goto label_123750;
        case 0x123754u: goto label_123754;
        case 0x123758u: goto label_123758;
        case 0x12375cu: goto label_12375c;
        case 0x123760u: goto label_123760;
        case 0x123764u: goto label_123764;
        case 0x123768u: goto label_123768;
        case 0x12376cu: goto label_12376c;
        case 0x123770u: goto label_123770;
        case 0x123774u: goto label_123774;
        case 0x123778u: goto label_123778;
        case 0x12377cu: goto label_12377c;
        case 0x123780u: goto label_123780;
        case 0x123784u: goto label_123784;
        case 0x123788u: goto label_123788;
        case 0x12378cu: goto label_12378c;
        case 0x123790u: goto label_123790;
        case 0x123794u: goto label_123794;
        case 0x123798u: goto label_123798;
        case 0x12379cu: goto label_12379c;
        case 0x1237a0u: goto label_1237a0;
        case 0x1237a4u: goto label_1237a4;
        case 0x1237a8u: goto label_1237a8;
        case 0x1237acu: goto label_1237ac;
        case 0x1237b0u: goto label_1237b0;
        case 0x1237b4u: goto label_1237b4;
        case 0x1237b8u: goto label_1237b8;
        case 0x1237bcu: goto label_1237bc;
        case 0x1237c0u: goto label_1237c0;
        case 0x1237c4u: goto label_1237c4;
        case 0x1237c8u: goto label_1237c8;
        case 0x1237ccu: goto label_1237cc;
        case 0x1237d0u: goto label_1237d0;
        case 0x1237d4u: goto label_1237d4;
        case 0x1237d8u: goto label_1237d8;
        case 0x1237dcu: goto label_1237dc;
        case 0x1237e0u: goto label_1237e0;
        case 0x1237e4u: goto label_1237e4;
        case 0x1237e8u: goto label_1237e8;
        case 0x1237ecu: goto label_1237ec;
        case 0x1237f0u: goto label_1237f0;
        case 0x1237f4u: goto label_1237f4;
        case 0x1237f8u: goto label_1237f8;
        case 0x1237fcu: goto label_1237fc;
        case 0x123800u: goto label_123800;
        case 0x123804u: goto label_123804;
        case 0x123808u: goto label_123808;
        case 0x12380cu: goto label_12380c;
        case 0x123810u: goto label_123810;
        case 0x123814u: goto label_123814;
        case 0x123818u: goto label_123818;
        case 0x12381cu: goto label_12381c;
        case 0x123820u: goto label_123820;
        case 0x123824u: goto label_123824;
        case 0x123828u: goto label_123828;
        case 0x12382cu: goto label_12382c;
        case 0x123830u: goto label_123830;
        case 0x123834u: goto label_123834;
        case 0x123838u: goto label_123838;
        case 0x12383cu: goto label_12383c;
        case 0x123840u: goto label_123840;
        case 0x123844u: goto label_123844;
        case 0x123848u: goto label_123848;
        case 0x12384cu: goto label_12384c;
        case 0x123850u: goto label_123850;
        case 0x123854u: goto label_123854;
        case 0x123858u: goto label_123858;
        case 0x12385cu: goto label_12385c;
        case 0x123860u: goto label_123860;
        case 0x123864u: goto label_123864;
        case 0x123868u: goto label_123868;
        case 0x12386cu: goto label_12386c;
        case 0x123870u: goto label_123870;
        case 0x123874u: goto label_123874;
        case 0x123878u: goto label_123878;
        case 0x12387cu: goto label_12387c;
        case 0x123880u: goto label_123880;
        case 0x123884u: goto label_123884;
        case 0x123888u: goto label_123888;
        case 0x12388cu: goto label_12388c;
        case 0x123890u: goto label_123890;
        case 0x123894u: goto label_123894;
        case 0x123898u: goto label_123898;
        case 0x12389cu: goto label_12389c;
        case 0x1238a0u: goto label_1238a0;
        case 0x1238a4u: goto label_1238a4;
        case 0x1238a8u: goto label_1238a8;
        case 0x1238acu: goto label_1238ac;
        case 0x1238b0u: goto label_1238b0;
        case 0x1238b4u: goto label_1238b4;
        case 0x1238b8u: goto label_1238b8;
        case 0x1238bcu: goto label_1238bc;
        case 0x1238c0u: goto label_1238c0;
        case 0x1238c4u: goto label_1238c4;
        case 0x1238c8u: goto label_1238c8;
        case 0x1238ccu: goto label_1238cc;
        case 0x1238d0u: goto label_1238d0;
        case 0x1238d4u: goto label_1238d4;
        case 0x1238d8u: goto label_1238d8;
        case 0x1238dcu: goto label_1238dc;
        case 0x1238e0u: goto label_1238e0;
        case 0x1238e4u: goto label_1238e4;
        case 0x1238e8u: goto label_1238e8;
        case 0x1238ecu: goto label_1238ec;
        case 0x1238f0u: goto label_1238f0;
        case 0x1238f4u: goto label_1238f4;
        case 0x1238f8u: goto label_1238f8;
        case 0x1238fcu: goto label_1238fc;
        case 0x123900u: goto label_123900;
        case 0x123904u: goto label_123904;
        case 0x123908u: goto label_123908;
        case 0x12390cu: goto label_12390c;
        case 0x123910u: goto label_123910;
        case 0x123914u: goto label_123914;
        case 0x123918u: goto label_123918;
        case 0x12391cu: goto label_12391c;
        case 0x123920u: goto label_123920;
        case 0x123924u: goto label_123924;
        case 0x123928u: goto label_123928;
        case 0x12392cu: goto label_12392c;
        case 0x123930u: goto label_123930;
        case 0x123934u: goto label_123934;
        case 0x123938u: goto label_123938;
        case 0x12393cu: goto label_12393c;
        case 0x123940u: goto label_123940;
        case 0x123944u: goto label_123944;
        case 0x123948u: goto label_123948;
        case 0x12394cu: goto label_12394c;
        case 0x123950u: goto label_123950;
        case 0x123954u: goto label_123954;
        case 0x123958u: goto label_123958;
        case 0x12395cu: goto label_12395c;
        case 0x123960u: goto label_123960;
        case 0x123964u: goto label_123964;
        case 0x123968u: goto label_123968;
        case 0x12396cu: goto label_12396c;
        case 0x123970u: goto label_123970;
        case 0x123974u: goto label_123974;
        case 0x123978u: goto label_123978;
        case 0x12397cu: goto label_12397c;
        case 0x123980u: goto label_123980;
        case 0x123984u: goto label_123984;
        case 0x123988u: goto label_123988;
        case 0x12398cu: goto label_12398c;
        case 0x123990u: goto label_123990;
        case 0x123994u: goto label_123994;
        case 0x123998u: goto label_123998;
        case 0x12399cu: goto label_12399c;
        case 0x1239a0u: goto label_1239a0;
        case 0x1239a4u: goto label_1239a4;
        case 0x1239a8u: goto label_1239a8;
        case 0x1239acu: goto label_1239ac;
        case 0x1239b0u: goto label_1239b0;
        case 0x1239b4u: goto label_1239b4;
        case 0x1239b8u: goto label_1239b8;
        case 0x1239bcu: goto label_1239bc;
        case 0x1239c0u: goto label_1239c0;
        case 0x1239c4u: goto label_1239c4;
        case 0x1239c8u: goto label_1239c8;
        case 0x1239ccu: goto label_1239cc;
        case 0x1239d0u: goto label_1239d0;
        case 0x1239d4u: goto label_1239d4;
        case 0x1239d8u: goto label_1239d8;
        case 0x1239dcu: goto label_1239dc;
        case 0x1239e0u: goto label_1239e0;
        case 0x1239e4u: goto label_1239e4;
        case 0x1239e8u: goto label_1239e8;
        case 0x1239ecu: goto label_1239ec;
        case 0x1239f0u: goto label_1239f0;
        case 0x1239f4u: goto label_1239f4;
        case 0x1239f8u: goto label_1239f8;
        case 0x1239fcu: goto label_1239fc;
        case 0x123a00u: goto label_123a00;
        case 0x123a04u: goto label_123a04;
        case 0x123a08u: goto label_123a08;
        case 0x123a0cu: goto label_123a0c;
        case 0x123a10u: goto label_123a10;
        case 0x123a14u: goto label_123a14;
        case 0x123a18u: goto label_123a18;
        case 0x123a1cu: goto label_123a1c;
        case 0x123a20u: goto label_123a20;
        case 0x123a24u: goto label_123a24;
        case 0x123a28u: goto label_123a28;
        case 0x123a2cu: goto label_123a2c;
        case 0x123a30u: goto label_123a30;
        case 0x123a34u: goto label_123a34;
        case 0x123a38u: goto label_123a38;
        case 0x123a3cu: goto label_123a3c;
        case 0x123a40u: goto label_123a40;
        case 0x123a44u: goto label_123a44;
        case 0x123a48u: goto label_123a48;
        case 0x123a4cu: goto label_123a4c;
        case 0x123a50u: goto label_123a50;
        case 0x123a54u: goto label_123a54;
        case 0x123a58u: goto label_123a58;
        case 0x123a5cu: goto label_123a5c;
        case 0x123a60u: goto label_123a60;
        case 0x123a64u: goto label_123a64;
        case 0x123a68u: goto label_123a68;
        case 0x123a6cu: goto label_123a6c;
        case 0x123a70u: goto label_123a70;
        case 0x123a74u: goto label_123a74;
        case 0x123a78u: goto label_123a78;
        case 0x123a7cu: goto label_123a7c;
        case 0x123a80u: goto label_123a80;
        case 0x123a84u: goto label_123a84;
        case 0x123a88u: goto label_123a88;
        case 0x123a8cu: goto label_123a8c;
        case 0x123a90u: goto label_123a90;
        case 0x123a94u: goto label_123a94;
        case 0x123a98u: goto label_123a98;
        case 0x123a9cu: goto label_123a9c;
        case 0x123aa0u: goto label_123aa0;
        case 0x123aa4u: goto label_123aa4;
        case 0x123aa8u: goto label_123aa8;
        case 0x123aacu: goto label_123aac;
        case 0x123ab0u: goto label_123ab0;
        case 0x123ab4u: goto label_123ab4;
        case 0x123ab8u: goto label_123ab8;
        case 0x123abcu: goto label_123abc;
        case 0x123ac0u: goto label_123ac0;
        case 0x123ac4u: goto label_123ac4;
        case 0x123ac8u: goto label_123ac8;
        case 0x123accu: goto label_123acc;
        case 0x123ad0u: goto label_123ad0;
        case 0x123ad4u: goto label_123ad4;
        case 0x123ad8u: goto label_123ad8;
        case 0x123adcu: goto label_123adc;
        case 0x123ae0u: goto label_123ae0;
        case 0x123ae4u: goto label_123ae4;
        case 0x123ae8u: goto label_123ae8;
        case 0x123aecu: goto label_123aec;
        case 0x123af0u: goto label_123af0;
        case 0x123af4u: goto label_123af4;
        case 0x123af8u: goto label_123af8;
        case 0x123afcu: goto label_123afc;
        case 0x123b00u: goto label_123b00;
        case 0x123b04u: goto label_123b04;
        case 0x123b08u: goto label_123b08;
        case 0x123b0cu: goto label_123b0c;
        case 0x123b10u: goto label_123b10;
        case 0x123b14u: goto label_123b14;
        case 0x123b18u: goto label_123b18;
        case 0x123b1cu: goto label_123b1c;
        case 0x123b20u: goto label_123b20;
        case 0x123b24u: goto label_123b24;
        case 0x123b28u: goto label_123b28;
        case 0x123b2cu: goto label_123b2c;
        case 0x123b30u: goto label_123b30;
        case 0x123b34u: goto label_123b34;
        case 0x123b38u: goto label_123b38;
        case 0x123b3cu: goto label_123b3c;
        case 0x123b40u: goto label_123b40;
        case 0x123b44u: goto label_123b44;
        case 0x123b48u: goto label_123b48;
        case 0x123b4cu: goto label_123b4c;
        case 0x123b50u: goto label_123b50;
        case 0x123b54u: goto label_123b54;
        case 0x123b58u: goto label_123b58;
        case 0x123b5cu: goto label_123b5c;
        case 0x123b60u: goto label_123b60;
        case 0x123b64u: goto label_123b64;
        case 0x123b68u: goto label_123b68;
        case 0x123b6cu: goto label_123b6c;
        case 0x123b70u: goto label_123b70;
        case 0x123b74u: goto label_123b74;
        case 0x123b78u: goto label_123b78;
        case 0x123b7cu: goto label_123b7c;
        case 0x123b80u: goto label_123b80;
        case 0x123b84u: goto label_123b84;
        case 0x123b88u: goto label_123b88;
        case 0x123b8cu: goto label_123b8c;
        case 0x123b90u: goto label_123b90;
        case 0x123b94u: goto label_123b94;
        case 0x123b98u: goto label_123b98;
        case 0x123b9cu: goto label_123b9c;
        case 0x123ba0u: goto label_123ba0;
        case 0x123ba4u: goto label_123ba4;
        case 0x123ba8u: goto label_123ba8;
        case 0x123bacu: goto label_123bac;
        case 0x123bb0u: goto label_123bb0;
        case 0x123bb4u: goto label_123bb4;
        case 0x123bb8u: goto label_123bb8;
        case 0x123bbcu: goto label_123bbc;
        case 0x123bc0u: goto label_123bc0;
        case 0x123bc4u: goto label_123bc4;
        case 0x123bc8u: goto label_123bc8;
        case 0x123bccu: goto label_123bcc;
        case 0x123bd0u: goto label_123bd0;
        case 0x123bd4u: goto label_123bd4;
        case 0x123bd8u: goto label_123bd8;
        case 0x123bdcu: goto label_123bdc;
        case 0x123be0u: goto label_123be0;
        case 0x123be4u: goto label_123be4;
        case 0x123be8u: goto label_123be8;
        case 0x123becu: goto label_123bec;
        case 0x123bf0u: goto label_123bf0;
        case 0x123bf4u: goto label_123bf4;
        case 0x123bf8u: goto label_123bf8;
        case 0x123bfcu: goto label_123bfc;
        case 0x123c00u: goto label_123c00;
        case 0x123c04u: goto label_123c04;
        case 0x123c08u: goto label_123c08;
        case 0x123c0cu: goto label_123c0c;
        case 0x123c10u: goto label_123c10;
        case 0x123c14u: goto label_123c14;
        case 0x123c18u: goto label_123c18;
        case 0x123c1cu: goto label_123c1c;
        case 0x123c20u: goto label_123c20;
        case 0x123c24u: goto label_123c24;
        case 0x123c28u: goto label_123c28;
        case 0x123c2cu: goto label_123c2c;
        case 0x123c30u: goto label_123c30;
        case 0x123c34u: goto label_123c34;
        default: break;
    }

    ctx->pc = 0x123638u;

label_123638:
    // 0x123638: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x123638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_12363c:
    // 0x12363c: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x12363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
label_123640:
    // 0x123640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123644:
    // 0x123644: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x123644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_123648:
    // 0x123648: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x123648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12364c:
    // 0x12364c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x12364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_123650:
    // 0x123650: 0xe7b500d0  swc1        $f21, 0xD0($sp)
    ctx->pc = 0x123650u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_123654:
    // 0x123654: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x123654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_123658:
    // 0x123658: 0x9623002e  lhu         $v1, 0x2E($s1)
    ctx->pc = 0x123658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_12365c:
    // 0x12365c: 0x1064016f  beq         $v1, $a0, . + 4 + (0x16F << 2)
label_123660:
    if (ctx->pc == 0x123660u) {
        ctx->pc = 0x123660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12365Cu;
        // 0x123660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123664u;
        goto label_123664;
    }
    ctx->pc = 0x12365Cu;
    {
        const bool branch_taken_0x12365c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x123660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12365Cu;
        // 0x123660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12365c) {
            ctx->pc = 0x123C1Cu;
            goto label_123c1c;
        }
    }
    ctx->pc = 0x123664u;
label_123664:
    // 0x123664: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x123664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_123668:
    // 0x123668: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123668u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12366c:
    // 0x12366c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12366cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_123670:
    // 0x123670: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123670u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_123674:
    // 0x123674: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123674u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_123678:
    // 0x123678: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_12367c:
    // 0x12367c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x12367cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_123680:
    // 0x123680: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x123680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_123684:
    // 0x123684: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x123684u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_123688:
    // 0x123688: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x123688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_12368c:
    // 0x12368c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12368cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_123690:
    // 0x123690: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x123690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123694:
    // 0x123694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x123694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123698:
    // 0x123698: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
label_12369c:
    if (ctx->pc == 0x12369Cu) {
        ctx->pc = 0x12369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123698u;
        // 0x12369c: 0xc62700ec  lwc1        $f7, 0xEC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236A0u;
        goto label_1236a0;
    }
    ctx->pc = 0x123698u;
    {
        const bool branch_taken_0x123698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123698) {
            ctx->pc = 0x12369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123698u;
            // 0x12369c: 0xc62700ec  lwc1        $f7, 0xEC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x123744u;
            goto label_123744;
        }
    }
    ctx->pc = 0x1236A0u;
label_1236a0:
    // 0x1236a0: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_1236a4:
    // 0x1236a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1236a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1236a8:
    // 0x1236a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1236ac:
    if (ctx->pc == 0x1236ACu) {
        ctx->pc = 0x1236ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236A8u;
        // 0x1236ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236B0u;
        goto label_1236b0;
    }
    ctx->pc = 0x1236A8u;
    {
        const bool branch_taken_0x1236a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1236ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236A8u;
        // 0x1236ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236a8) {
            ctx->pc = 0x1236C0u;
            goto label_1236c0;
        }
    }
    ctx->pc = 0x1236B0u;
label_1236b0:
    // 0x1236b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1236b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1236b4:
    // 0x1236b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1236b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1236b8:
    // 0x1236b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1236bc:
    if (ctx->pc == 0x1236BCu) {
        ctx->pc = 0x1236C0u;
        goto label_1236c0;
    }
    ctx->pc = 0x1236B8u;
    {
        const bool branch_taken_0x1236b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1236b8) {
            ctx->pc = 0x1236D4u;
            goto label_1236d4;
        }
    }
    ctx->pc = 0x1236C0u;
label_1236c0:
    // 0x1236c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1236c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1236c4:
    // 0x1236c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1236c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1236c8:
    // 0x1236c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1236c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1236cc:
    // 0x1236cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1236ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1236d0:
    // 0x1236d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1236d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1236d4:
    // 0x1236d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1236d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1236d8:
    // 0x1236d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1236d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1236dc:
    // 0x1236dc: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x1236dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1236e0:
    // 0x1236e0: 0x0  nop
    ctx->pc = 0x1236e0u;
    // NOP
label_1236e4:
    // 0x1236e4: 0x0  nop
    ctx->pc = 0x1236e4u;
    // NOP
label_1236e8:
    // 0x1236e8: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x1236e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
label_1236ec:
    // 0x1236ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1236ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1236f0:
    // 0x1236f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1236f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1236f4:
    // 0x1236f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1236f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1236f8:
    // 0x1236f8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1236fc:
    if (ctx->pc == 0x1236FCu) {
        ctx->pc = 0x1236FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236F8u;
        // 0x1236fc: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123700u;
        goto label_123700;
    }
    ctx->pc = 0x1236F8u;
    {
        const bool branch_taken_0x1236f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1236FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236F8u;
        // 0x1236fc: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236f8) {
            ctx->pc = 0x123740u;
            goto label_123740;
        }
    }
    ctx->pc = 0x123700u;
label_123700:
    // 0x123700: 0x8e2500e8  lw          $a1, 0xE8($s1)
    ctx->pc = 0x123700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_123704:
    // 0x123704: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x123704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_123708:
    // 0x123708: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x123708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_12370c:
    // 0x12370c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_123710:
    // 0x123710: 0xc047898  jal         func_11E260
label_123714:
    if (ctx->pc == 0x123714u) {
        ctx->pc = 0x123714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123710u;
        // 0x123714: 0xae2500e4  sw          $a1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123718u;
        goto label_123718;
    }
    ctx->pc = 0x123710u;
    SET_GPR_U32(ctx, 31, 0x123718u);
    ctx->pc = 0x123714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123710u;
    // 0x123714: 0xae2500e4  sw          $a1, 0xE4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x123710u, 0x123718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123718u;
label_123718:
    // 0x123718: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x123718u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12371c:
    // 0x12371c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_123720:
    if (ctx->pc == 0x123720u) {
        ctx->pc = 0x123720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12371Cu;
        // 0x123720: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123724u;
        goto label_123724;
    }
    ctx->pc = 0x12371Cu;
    {
        const bool branch_taken_0x12371c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12371Cu;
        // 0x123720: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12371c) {
            ctx->pc = 0x123738u;
            goto label_123738;
        }
    }
    ctx->pc = 0x123724u;
label_123724:
    // 0x123724: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x123724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_123728:
    // 0x123728: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_12372c:
    if (ctx->pc == 0x12372Cu) {
        ctx->pc = 0x12372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123728u;
        // 0x12372c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123730u;
        goto label_123730;
    }
    ctx->pc = 0x123728u;
    {
        const bool branch_taken_0x123728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123728) {
            ctx->pc = 0x12372Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123728u;
            // 0x12372c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12373Cu;
            goto label_12373c;
        }
    }
    ctx->pc = 0x123730u;
label_123730:
    // 0x123730: 0x10000002  b           . + 4 + (0x2 << 2)
label_123734:
    if (ctx->pc == 0x123734u) {
        ctx->pc = 0x123734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123730u;
        // 0x123734: 0xe63500ec  swc1        $f21, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123738u;
        goto label_123738;
    }
    ctx->pc = 0x123730u;
    {
        const bool branch_taken_0x123730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123730u;
        // 0x123734: 0xe63500ec  swc1        $f21, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123730) {
            ctx->pc = 0x12373Cu;
            goto label_12373c;
        }
    }
    ctx->pc = 0x123738u;
label_123738:
    // 0x123738: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_12373c:
    // 0x12373c: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x12373cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_123740:
    // 0x123740: 0xc62700ec  lwc1        $f7, 0xEC($s1)
    ctx->pc = 0x123740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_123744:
    // 0x123744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123748:
    // 0x123748: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x123748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12374c:
    // 0x12374c: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
label_123750:
    if (ctx->pc == 0x123750u) {
        ctx->pc = 0x123750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12374Cu;
        // 0x123750: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123754u;
        goto label_123754;
    }
    ctx->pc = 0x12374Cu;
    {
        const bool branch_taken_0x12374c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12374c) {
            ctx->pc = 0x123750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12374Cu;
            // 0x123750: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123808u;
            goto label_123808;
        }
    }
    ctx->pc = 0x123754u;
label_123754:
    // 0x123754: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x123754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_123758:
    // 0x123758: 0x8e2600e4  lw          $a2, 0xE4($s1)
    ctx->pc = 0x123758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_12375c:
    // 0x12375c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_123760:
    // 0x123760: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x123760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_123764:
    // 0x123764: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x123764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_123768:
    // 0x123768: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x123768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_12376c:
    // 0x12376c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x12376cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_123770:
    // 0x123770: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_123774:
    // 0x123774: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x123774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_123778:
    // 0x123778: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x123778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_12377c:
    // 0x12377c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x12377cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_123780:
    // 0x123780: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x123780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_123784:
    // 0x123784: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x123784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_123788:
    // 0x123788: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x123788u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12378c:
    // 0x12378c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12378cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_123790:
    // 0x123790: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x123790u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_123794:
    // 0x123794: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x123794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_123798:
    // 0x123798: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x123798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_12379c:
    // 0x12379c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x12379cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1237a0:
    // 0x1237a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1237a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1237a4:
    // 0x1237a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1237a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1237a8:
    // 0x1237a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1237a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1237ac:
    // 0x1237ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1237acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1237b0:
    // 0x1237b0: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x1237b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
label_1237b4:
    // 0x1237b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1237b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1237b8:
    // 0x1237b8: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x1237b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_1237bc:
    // 0x1237bc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1237bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1237c0:
    // 0x1237c0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1237c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_1237c4:
    // 0x1237c4: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x1237c4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1237c8:
    // 0x1237c8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1237c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1237cc:
    // 0x1237cc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1237ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1237d0:
    // 0x1237d0: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x1237d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_1237d4:
    // 0x1237d4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1237d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1237d8:
    // 0x1237d8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1237d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1237dc:
    // 0x1237dc: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1237dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1237e0:
    // 0x1237e0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1237e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1237e4:
    // 0x1237e4: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x1237e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1237e8:
    // 0x1237e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1237ec:
    // 0x1237ec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1237ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1237f0:
    // 0x1237f0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1237f0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_1237f4:
    // 0x1237f4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1237f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1237f8:
    // 0x1237f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1237f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1237fc:
    // 0x1237fc: 0x10000016  b           . + 4 + (0x16 << 2)
label_123800:
    if (ctx->pc == 0x123800u) {
        ctx->pc = 0x123800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237FCu;
        // 0x123800: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123804u;
        goto label_123804;
    }
    ctx->pc = 0x1237FCu;
    {
        const bool branch_taken_0x1237fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237FCu;
        // 0x123800: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237fc) {
            ctx->pc = 0x123858u;
            goto label_123858;
        }
    }
    ctx->pc = 0x123804u;
label_123804:
    // 0x123804: 0x0  nop
    ctx->pc = 0x123804u;
    // NOP
label_123808:
    // 0x123808: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x123808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
label_12380c:
    // 0x12380c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12380cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_123810:
    // 0x123810: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x123810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123814:
    // 0x123814: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x123814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_123818:
    // 0x123818: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x123818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12381c:
    // 0x12381c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12381cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_123820:
    // 0x123820: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x123820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123824:
    // 0x123824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_123828:
    // 0x123828: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x123828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12382c:
    // 0x12382c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12382cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_123830:
    // 0x123830: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x123830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_123834:
    // 0x123834: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x123834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_123838:
    // 0x123838: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x123838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_12383c:
    // 0x12383c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12383cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_123840:
    // 0x123840: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_123844:
    // 0x123844: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x123844u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_123848:
    // 0x123848: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x123848u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_12384c:
    // 0x12384c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12384cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_123850:
    // 0x123850: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x123850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_123854:
    // 0x123854: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x123854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_123858:
    // 0x123858: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x123858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12385c:
    // 0x12385c: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x12385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_123860:
    // 0x123860: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_123864:
    if (ctx->pc == 0x123864u) {
        ctx->pc = 0x123864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123860u;
        // 0x123864: 0x26220120  addiu       $v0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123868u;
        goto label_123868;
    }
    ctx->pc = 0x123860u;
    {
        const bool branch_taken_0x123860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x123864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123860u;
        // 0x123864: 0x26220120  addiu       $v0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123860) {
            ctx->pc = 0x123888u;
            goto label_123888;
        }
    }
    ctx->pc = 0x123868u;
label_123868:
    // 0x123868: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x123868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12386c:
    // 0x12386c: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x12386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
label_123870:
    // 0x123870: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x123870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_123874:
    // 0x123874: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x123874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_123878:
    // 0x123878: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x123878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12387c:
    // 0x12387c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12387cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_123880:
    // 0x123880: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x123880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_123884:
    // 0x123884: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x123884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_123888:
    // 0x123888: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x123888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12388c:
    // 0x12388c: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x12388cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_123890:
    // 0x123890: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x123890u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_123894:
    // 0x123894: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_123898:
    // 0x123898: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x123898u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12389c:
    // 0x12389c: 0x4b01286a  vmul.x      $vf1, $vf5, $vf1
    ctx->pc = 0x12389cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1238a0:
    // 0x1238a0: 0x4a8228aa  vmul.y      $vf2, $vf5, $vf2
    ctx->pc = 0x1238a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1238a4:
    // 0x1238a4: 0x4a4328ea  vmul.z      $vf3, $vf5, $vf3
    ctx->pc = 0x1238a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1238a8:
    // 0x1238a8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1238a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1238ac:
    // 0x1238ac: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1238acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
label_1238b0:
    // 0x1238b0: 0xf8430020  sqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1238b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[3]));
label_1238b4:
    // 0x1238b4: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x1238b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1238b8:
    // 0x1238b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1238b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1238bc:
    // 0x1238bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1238bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1238c0:
    // 0x1238c0: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_1238c4:
    if (ctx->pc == 0x1238C4u) {
        ctx->pc = 0x1238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238C0u;
        // 0x1238c4: 0xc62200dc  lwc1        $f2, 0xDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238C8u;
        goto label_1238c8;
    }
    ctx->pc = 0x1238C0u;
    {
        const bool branch_taken_0x1238c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1238c0) {
            ctx->pc = 0x1238C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1238C0u;
            // 0x1238c4: 0xc62200dc  lwc1        $f2, 0xDC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x123954u;
            goto label_123954;
        }
    }
    ctx->pc = 0x1238C8u;
label_1238c8:
    // 0x1238c8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_1238cc:
    // 0x1238cc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1238ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1238d0:
    // 0x1238d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1238d4:
    if (ctx->pc == 0x1238D4u) {
        ctx->pc = 0x1238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238D0u;
        // 0x1238d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238D8u;
        goto label_1238d8;
    }
    ctx->pc = 0x1238D0u;
    {
        const bool branch_taken_0x1238d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238D0u;
        // 0x1238d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238d0) {
            ctx->pc = 0x1238E8u;
            goto label_1238e8;
        }
    }
    ctx->pc = 0x1238D8u;
label_1238d8:
    // 0x1238d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1238d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1238dc:
    // 0x1238dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1238dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1238e0:
    // 0x1238e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1238e4:
    if (ctx->pc == 0x1238E4u) {
        ctx->pc = 0x1238E8u;
        goto label_1238e8;
    }
    ctx->pc = 0x1238E0u;
    {
        const bool branch_taken_0x1238e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238e0) {
            ctx->pc = 0x1238FCu;
            goto label_1238fc;
        }
    }
    ctx->pc = 0x1238E8u;
label_1238e8:
    // 0x1238e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1238e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1238ec:
    // 0x1238ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1238ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1238f0:
    // 0x1238f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1238f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1238f4:
    // 0x1238f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1238f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1238f8:
    // 0x1238f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1238f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1238fc:
    // 0x1238fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1238fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_123900:
    // 0x123900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123904:
    // 0x123904: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x123904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123908:
    // 0x123908: 0x0  nop
    ctx->pc = 0x123908u;
    // NOP
label_12390c:
    // 0x12390c: 0x0  nop
    ctx->pc = 0x12390cu;
    // NOP
label_123910:
    // 0x123910: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x123910u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_123914:
    // 0x123914: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x123914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_123918:
    // 0x123918: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x123918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12391c:
    // 0x12391c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12391cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123920:
    // 0x123920: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_123924:
    if (ctx->pc == 0x123924u) {
        ctx->pc = 0x123924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123920u;
        // 0x123924: 0xe62100dc  swc1        $f1, 0xDC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123928u;
        goto label_123928;
    }
    ctx->pc = 0x123920u;
    {
        const bool branch_taken_0x123920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123920u;
        // 0x123924: 0xe62100dc  swc1        $f1, 0xDC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123920) {
            ctx->pc = 0x12394Cu;
            goto label_12394c;
        }
    }
    ctx->pc = 0x123928u;
label_123928:
    // 0x123928: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_12392c:
    // 0x12392c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_123930:
    // 0x123930: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x123930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_123934:
    // 0x123934: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x123934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_123938:
    // 0x123938: 0xc047898  jal         func_11E260
label_12393c:
    if (ctx->pc == 0x12393Cu) {
        ctx->pc = 0x12393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123938u;
        // 0x12393c: 0xae2500d4  sw          $a1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123940u;
        goto label_123940;
    }
    ctx->pc = 0x123938u;
    SET_GPR_U32(ctx, 31, 0x123940u);
    ctx->pc = 0x12393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123938u;
    // 0x12393c: 0xae2500d4  sw          $a1, 0xD4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x123938u, 0x123940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123940u;
label_123940:
    // 0x123940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_123944:
    // 0x123944: 0xe62000dc  swc1        $f0, 0xDC($s1)
    ctx->pc = 0x123944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
label_123948:
    // 0x123948: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x123948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_12394c:
    // 0x12394c: 0xc62200dc  lwc1        $f2, 0xDC($s1)
    ctx->pc = 0x12394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123950:
    // 0x123950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123954:
    // 0x123954: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x123954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123958:
    // 0x123958: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
label_12395c:
    if (ctx->pc == 0x12395Cu) {
        ctx->pc = 0x12395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123958u;
        // 0x12395c: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123960u;
        goto label_123960;
    }
    ctx->pc = 0x123958u;
    {
        const bool branch_taken_0x123958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123958) {
            ctx->pc = 0x12395Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123958u;
            // 0x12395c: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1239F8u;
            goto label_1239f8;
        }
    }
    ctx->pc = 0x123960u;
label_123960:
    // 0x123960: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x123960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_123964:
    // 0x123964: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x123964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_123968:
    // 0x123968: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x123968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_12396c:
    // 0x12396c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x12396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_123970:
    // 0x123970: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x123970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123974:
    // 0x123974: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_123978:
    // 0x123978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12397c:
    // 0x12397c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12397cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_123980:
    // 0x123980: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x123980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_123984:
    // 0x123984: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x123984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_123988:
    // 0x123988: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x123988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_12398c:
    // 0x12398c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x12398cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_123990:
    // 0x123990: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x123990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_123994:
    // 0x123994: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x123994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_123998:
    // 0x123998: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12399c:
    // 0x12399c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x12399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1239a0:
    // 0x1239a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1239a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1239a4:
    // 0x1239a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1239a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1239a8:
    // 0x1239a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1239a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1239ac:
    // 0x1239ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1239acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1239b0:
    // 0x1239b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1239b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1239b4:
    // 0x1239b4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1239b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_1239b8:
    // 0x1239b8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1239b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1239bc:
    // 0x1239bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1239bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1239c0:
    // 0x1239c0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1239c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1239c4:
    // 0x1239c4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1239c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1239c8:
    // 0x1239c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1239c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1239cc:
    // 0x1239cc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1239ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1239d0:
    // 0x1239d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1239d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1239d4:
    // 0x1239d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1239d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1239d8:
    // 0x1239d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1239d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1239dc:
    // 0x1239dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1239dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1239e0:
    // 0x1239e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1239e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1239e4:
    // 0x1239e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1239e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1239e8:
    // 0x1239e8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1239ec:
    // 0x1239ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1239f0:
    if (ctx->pc == 0x1239F0u) {
        ctx->pc = 0x1239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239ECu;
        // 0x1239f0: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239F4u;
        goto label_1239f4;
    }
    ctx->pc = 0x1239ECu;
    {
        const bool branch_taken_0x1239ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239ECu;
        // 0x1239f0: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239ec) {
            ctx->pc = 0x123A10u;
            goto label_123a10;
        }
    }
    ctx->pc = 0x1239F4u;
label_1239f4:
    // 0x1239f4: 0x0  nop
    ctx->pc = 0x1239f4u;
    // NOP
label_1239f8:
    // 0x1239f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1239fc:
    // 0x1239fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1239fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_123a00:
    // 0x123a00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_123a04:
    // 0x123a04: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x123a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_123a08:
    // 0x123a08: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x123a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_123a0c:
    // 0x123a0c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x123a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_123a10:
    // 0x123a10: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x123a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_123a14:
    // 0x123a14: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_123a18:
    // 0x123a18: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_123a1c:
    if (ctx->pc == 0x123A1Cu) {
        ctx->pc = 0x123A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A18u;
        // 0x123a1c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A20u;
        goto label_123a20;
    }
    ctx->pc = 0x123A18u;
    {
        const bool branch_taken_0x123a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A18u;
        // 0x123a1c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a18) {
            ctx->pc = 0x123A58u;
            goto label_123a58;
        }
    }
    ctx->pc = 0x123A20u;
label_123a20:
    // 0x123a20: 0x262201b0  addiu       $v0, $s1, 0x1B0
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_123a24:
    // 0x123a24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x123a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_123a28:
    // 0x123a28: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x123a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_123a2c:
    // 0x123a2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_123a30:
    // 0x123a30: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x123a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_123a34:
    // 0x123a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_123a38:
    // 0x123a38: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x123a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_123a3c:
    // 0x123a3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x123a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_123a40:
    // 0x123a40: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_123a44:
    // 0x123a44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_123a48:
    // 0x123a48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x123a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_123a4c:
    // 0x123a4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x123a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_123a50:
    // 0x123a50: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x123a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_123a54:
    // 0x123a54: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x123a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_123a58:
    // 0x123a58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_123a5c:
    // 0x123a5c: 0xc067a86  jal         func_19EA18
label_123a60:
    if (ctx->pc == 0x123A60u) {
        ctx->pc = 0x123A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A5Cu;
        // 0x123a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A64u;
        goto label_123a64;
    }
    ctx->pc = 0x123A5Cu;
    SET_GPR_U32(ctx, 31, 0x123A64u);
    ctx->pc = 0x123A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A5Cu;
    // 0x123a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x123A5Cu, 0x123A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A64u;
label_123a64:
    // 0x123a64: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x123a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_123a68:
    // 0x123a68: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x123a68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_123a6c:
    // 0x123a6c: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x123a6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_123a70:
    // 0x123a70: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x123a70u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_123a74:
    // 0x123a74: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x123a74u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_123a78:
    // 0x123a78: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x123a78u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_123a7c:
    // 0x123a7c: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x123a7cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_123a80:
    // 0x123a80: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x123a80u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_123a84:
    // 0x123a84: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x123a84u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_123a88:
    // 0x123a88: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x123a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123a8c:
    // 0x123a8c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x123a8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123a90:
    // 0x123a90: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x123a90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123a94:
    // 0x123a94: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x123a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_123a98:
    // 0x123a98: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x123a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123a9c:
    // 0x123a9c: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x123a9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123aa0:
    // 0x123aa0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x123aa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123aa4:
    // 0x123aa4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x123aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_123aa8:
    // 0x123aa8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x123aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123aac:
    // 0x123aac: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x123aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123ab0:
    // 0x123ab0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x123ab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123ab4:
    // 0x123ab4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x123ab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_123ab8:
    // 0x123ab8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x123ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123abc:
    // 0x123abc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x123abcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123ac0:
    // 0x123ac0: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x123ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123ac4:
    // 0x123ac4: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x123ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_123ac8:
    // 0x123ac8: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x123ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_123acc:
    // 0x123acc: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x123accu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
label_123ad0:
    // 0x123ad0: 0xf86e0020  sqc2        $vf14, 0x20($v1)
    ctx->pc = 0x123ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[14]));
label_123ad4:
    // 0x123ad4: 0xf86f0030  sqc2        $vf15, 0x30($v1)
    ctx->pc = 0x123ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[15]));
label_123ad8:
    // 0x123ad8: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x123ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_123adc:
    // 0x123adc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x123adcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_123ae0:
    // 0x123ae0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x123ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_123ae4:
    // 0x123ae4: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x123ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_123ae8:
    // 0x123ae8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x123ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_123aec:
    // 0x123aec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x123aecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_123af0:
    // 0x123af0: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x123af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_123af4:
    // 0x123af4: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x123af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_123af8:
    // 0x123af8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_123afc:
    if (ctx->pc == 0x123AFCu) {
        ctx->pc = 0x123AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AF8u;
        // 0x123afc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B00u;
        goto label_123b00;
    }
    ctx->pc = 0x123AF8u;
    {
        const bool branch_taken_0x123af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123af8) {
            ctx->pc = 0x123AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123AF8u;
            // 0x123afc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B1Cu;
            goto label_123b1c;
        }
    }
    ctx->pc = 0x123B00u;
label_123b00:
    // 0x123b00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_123b04:
    // 0x123b04: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x123b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_123b08:
    // 0x123b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123b0c:
    // 0x123b0c: 0x8c427d98  lw          $v0, 0x7D98($v0)
    ctx->pc = 0x123b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32152)));
label_123b10:
    // 0x123b10: 0x40f809  jalr        $v0
label_123b14:
    if (ctx->pc == 0x123B14u) {
        ctx->pc = 0x123B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B10u;
        // 0x123b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B18u;
        goto label_123b18;
    }
    ctx->pc = 0x123B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123B18u);
        ctx->pc = 0x123B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B10u;
        // 0x123b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B10u, 0x123B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123B18u;
label_123b18:
    // 0x123b18: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x123b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123b1c:
    // 0x123b1c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_123b20:
    if (ctx->pc == 0x123B20u) {
        ctx->pc = 0x123B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B1Cu;
        // 0x123b20: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B24u;
        goto label_123b24;
    }
    ctx->pc = 0x123B1Cu;
    {
        const bool branch_taken_0x123b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B1Cu;
        // 0x123b20: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b1c) {
            ctx->pc = 0x123B58u;
            goto label_123b58;
        }
    }
    ctx->pc = 0x123B24u;
label_123b24:
    // 0x123b24: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_123b28:
    if (ctx->pc == 0x123B28u) {
        ctx->pc = 0x123B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B24u;
        // 0x123b28: 0x26220160  addiu       $v0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B2Cu;
        goto label_123b2c;
    }
    ctx->pc = 0x123B24u;
    {
        const bool branch_taken_0x123b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B24u;
        // 0x123b28: 0x26220160  addiu       $v0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b24) {
            ctx->pc = 0x123B80u;
            goto label_123b80;
        }
    }
    ctx->pc = 0x123B2Cu;
label_123b2c:
    // 0x123b2c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x123b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_123b30:
    // 0x123b30: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x123b30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_123b34:
    // 0x123b34: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x123b34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_123b38:
    // 0x123b38: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x123b38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_123b3c:
    // 0x123b3c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x123b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_123b40:
    // 0x123b40: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x123b40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_123b44:
    // 0x123b44: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x123b44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_123b48:
    // 0x123b48: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x123b48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_123b4c:
    // 0x123b4c: 0x1000000c  b           . + 4 + (0xC << 2)
label_123b50:
    if (ctx->pc == 0x123B50u) {
        ctx->pc = 0x123B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B4Cu;
        // 0x123b50: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B54u;
        goto label_123b54;
    }
    ctx->pc = 0x123B4Cu;
    {
        const bool branch_taken_0x123b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B4Cu;
        // 0x123b50: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b4c) {
            ctx->pc = 0x123B80u;
            goto label_123b80;
        }
    }
    ctx->pc = 0x123B54u;
label_123b54:
    // 0x123b54: 0x0  nop
    ctx->pc = 0x123b54u;
    // NOP
label_123b58:
    // 0x123b58: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_123b5c:
    if (ctx->pc == 0x123B5Cu) {
        ctx->pc = 0x123B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B58u;
        // 0x123b5c: 0x26220160  addiu       $v0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B60u;
        goto label_123b60;
    }
    ctx->pc = 0x123B58u;
    {
        const bool branch_taken_0x123b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B58u;
        // 0x123b5c: 0x26220160  addiu       $v0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b58) {
            ctx->pc = 0x123B80u;
            goto label_123b80;
        }
    }
    ctx->pc = 0x123B60u;
label_123b60:
    // 0x123b60: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x123b60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_123b64:
    // 0x123b64: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x123b64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_123b68:
    // 0x123b68: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x123b68u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_123b6c:
    // 0x123b6c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x123b6cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_123b70:
    // 0x123b70: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x123b70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_123b74:
    // 0x123b74: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x123b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_123b78:
    // 0x123b78: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x123b78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_123b7c:
    // 0x123b7c: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x123b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_123b80:
    // 0x123b80: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x123b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_123b84:
    // 0x123b84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x123b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_123b88:
    // 0x123b88: 0xc067a86  jal         func_19EA18
label_123b8c:
    if (ctx->pc == 0x123B8Cu) {
        ctx->pc = 0x123B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B88u;
        // 0x123b8c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B90u;
        goto label_123b90;
    }
    ctx->pc = 0x123B88u;
    SET_GPR_U32(ctx, 31, 0x123B90u);
    ctx->pc = 0x123B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B88u;
    // 0x123b8c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x123B88u, 0x123B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B90u;
label_123b90:
    // 0x123b90: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x123b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_123b94:
    // 0x123b94: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x123b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_123b98:
    // 0x123b98: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x123b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_123b9c:
    // 0x123b9c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x123b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_123ba0:
    // 0x123ba0: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x123ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_123ba4:
    // 0x123ba4: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x123ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_123ba8:
    // 0x123ba8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x123ba8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_123bac:
    // 0x123bac: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x123bacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_123bb0:
    // 0x123bb0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x123bb0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_123bb4:
    // 0x123bb4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x123bb4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_123bb8:
    // 0x123bb8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x123bb8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_123bbc:
    // 0x123bbc: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x123bbcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_123bc0:
    // 0x123bc0: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x123bc0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_123bc4:
    // 0x123bc4: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x123bc4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_123bc8:
    // 0x123bc8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x123bc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bcc:
    // 0x123bcc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x123bccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bd0:
    // 0x123bd0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x123bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bd4:
    // 0x123bd4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x123bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_123bd8:
    // 0x123bd8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x123bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bdc:
    // 0x123bdc: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x123bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123be0:
    // 0x123be0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x123be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123be4:
    // 0x123be4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x123be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_123be8:
    // 0x123be8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x123be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bec:
    // 0x123bec: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x123becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bf0:
    // 0x123bf0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x123bf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bf4:
    // 0x123bf4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x123bf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_123bf8:
    // 0x123bf8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x123bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123bfc:
    // 0x123bfc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x123bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123c00:
    // 0x123c00: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x123c00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_123c04:
    // 0x123c04: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x123c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_123c08:
    // 0x123c08: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x123c08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_123c0c:
    // 0x123c0c: 0xf84d0010  sqc2        $vf13, 0x10($v0)
    ctx->pc = 0x123c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[13]));
label_123c10:
    // 0x123c10: 0xf84e0020  sqc2        $vf14, 0x20($v0)
    ctx->pc = 0x123c10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[14]));
label_123c14:
    // 0x123c14: 0xf84f0030  sqc2        $vf15, 0x30($v0)
    ctx->pc = 0x123c14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[15]));
label_123c18:
    // 0x123c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123c1c:
    // 0x123c1c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x123c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_123c20:
    // 0x123c20: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x123c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_123c24:
    // 0x123c24: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x123c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_123c28:
    // 0x123c28: 0xc7b500d0  lwc1        $f21, 0xD0($sp)
    ctx->pc = 0x123c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_123c2c:
    // 0x123c2c: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x123c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123c30:
    // 0x123c30: 0x3e00008  jr          $ra
label_123c34:
    if (ctx->pc == 0x123C34u) {
        ctx->pc = 0x123C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C30u;
        // 0x123c34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C38u;
        goto label_fallthrough_0x123c30;
    }
    ctx->pc = 0x123C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C30u;
        // 0x123c34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123c30:
    ctx->pc = 0x123C38u;
}
