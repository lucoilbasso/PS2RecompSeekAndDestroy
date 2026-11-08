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

// Function: TankMovmentProc__7ApcTank
// Address: 0x1518a0 - 0x151d7c
void TankMovmentProc__7ApcTank_0x1518a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankMovmentProc__7ApcTank_0x1518a0");
#endif

    switch (ctx->pc) {
        case 0x1518a0u: goto label_1518a0;
        case 0x1518a4u: goto label_1518a4;
        case 0x1518a8u: goto label_1518a8;
        case 0x1518acu: goto label_1518ac;
        case 0x1518b0u: goto label_1518b0;
        case 0x1518b4u: goto label_1518b4;
        case 0x1518b8u: goto label_1518b8;
        case 0x1518bcu: goto label_1518bc;
        case 0x1518c0u: goto label_1518c0;
        case 0x1518c4u: goto label_1518c4;
        case 0x1518c8u: goto label_1518c8;
        case 0x1518ccu: goto label_1518cc;
        case 0x1518d0u: goto label_1518d0;
        case 0x1518d4u: goto label_1518d4;
        case 0x1518d8u: goto label_1518d8;
        case 0x1518dcu: goto label_1518dc;
        case 0x1518e0u: goto label_1518e0;
        case 0x1518e4u: goto label_1518e4;
        case 0x1518e8u: goto label_1518e8;
        case 0x1518ecu: goto label_1518ec;
        case 0x1518f0u: goto label_1518f0;
        case 0x1518f4u: goto label_1518f4;
        case 0x1518f8u: goto label_1518f8;
        case 0x1518fcu: goto label_1518fc;
        case 0x151900u: goto label_151900;
        case 0x151904u: goto label_151904;
        case 0x151908u: goto label_151908;
        case 0x15190cu: goto label_15190c;
        case 0x151910u: goto label_151910;
        case 0x151914u: goto label_151914;
        case 0x151918u: goto label_151918;
        case 0x15191cu: goto label_15191c;
        case 0x151920u: goto label_151920;
        case 0x151924u: goto label_151924;
        case 0x151928u: goto label_151928;
        case 0x15192cu: goto label_15192c;
        case 0x151930u: goto label_151930;
        case 0x151934u: goto label_151934;
        case 0x151938u: goto label_151938;
        case 0x15193cu: goto label_15193c;
        case 0x151940u: goto label_151940;
        case 0x151944u: goto label_151944;
        case 0x151948u: goto label_151948;
        case 0x15194cu: goto label_15194c;
        case 0x151950u: goto label_151950;
        case 0x151954u: goto label_151954;
        case 0x151958u: goto label_151958;
        case 0x15195cu: goto label_15195c;
        case 0x151960u: goto label_151960;
        case 0x151964u: goto label_151964;
        case 0x151968u: goto label_151968;
        case 0x15196cu: goto label_15196c;
        case 0x151970u: goto label_151970;
        case 0x151974u: goto label_151974;
        case 0x151978u: goto label_151978;
        case 0x15197cu: goto label_15197c;
        case 0x151980u: goto label_151980;
        case 0x151984u: goto label_151984;
        case 0x151988u: goto label_151988;
        case 0x15198cu: goto label_15198c;
        case 0x151990u: goto label_151990;
        case 0x151994u: goto label_151994;
        case 0x151998u: goto label_151998;
        case 0x15199cu: goto label_15199c;
        case 0x1519a0u: goto label_1519a0;
        case 0x1519a4u: goto label_1519a4;
        case 0x1519a8u: goto label_1519a8;
        case 0x1519acu: goto label_1519ac;
        case 0x1519b0u: goto label_1519b0;
        case 0x1519b4u: goto label_1519b4;
        case 0x1519b8u: goto label_1519b8;
        case 0x1519bcu: goto label_1519bc;
        case 0x1519c0u: goto label_1519c0;
        case 0x1519c4u: goto label_1519c4;
        case 0x1519c8u: goto label_1519c8;
        case 0x1519ccu: goto label_1519cc;
        case 0x1519d0u: goto label_1519d0;
        case 0x1519d4u: goto label_1519d4;
        case 0x1519d8u: goto label_1519d8;
        case 0x1519dcu: goto label_1519dc;
        case 0x1519e0u: goto label_1519e0;
        case 0x1519e4u: goto label_1519e4;
        case 0x1519e8u: goto label_1519e8;
        case 0x1519ecu: goto label_1519ec;
        case 0x1519f0u: goto label_1519f0;
        case 0x1519f4u: goto label_1519f4;
        case 0x1519f8u: goto label_1519f8;
        case 0x1519fcu: goto label_1519fc;
        case 0x151a00u: goto label_151a00;
        case 0x151a04u: goto label_151a04;
        case 0x151a08u: goto label_151a08;
        case 0x151a0cu: goto label_151a0c;
        case 0x151a10u: goto label_151a10;
        case 0x151a14u: goto label_151a14;
        case 0x151a18u: goto label_151a18;
        case 0x151a1cu: goto label_151a1c;
        case 0x151a20u: goto label_151a20;
        case 0x151a24u: goto label_151a24;
        case 0x151a28u: goto label_151a28;
        case 0x151a2cu: goto label_151a2c;
        case 0x151a30u: goto label_151a30;
        case 0x151a34u: goto label_151a34;
        case 0x151a38u: goto label_151a38;
        case 0x151a3cu: goto label_151a3c;
        case 0x151a40u: goto label_151a40;
        case 0x151a44u: goto label_151a44;
        case 0x151a48u: goto label_151a48;
        case 0x151a4cu: goto label_151a4c;
        case 0x151a50u: goto label_151a50;
        case 0x151a54u: goto label_151a54;
        case 0x151a58u: goto label_151a58;
        case 0x151a5cu: goto label_151a5c;
        case 0x151a60u: goto label_151a60;
        case 0x151a64u: goto label_151a64;
        case 0x151a68u: goto label_151a68;
        case 0x151a6cu: goto label_151a6c;
        case 0x151a70u: goto label_151a70;
        case 0x151a74u: goto label_151a74;
        case 0x151a78u: goto label_151a78;
        case 0x151a7cu: goto label_151a7c;
        case 0x151a80u: goto label_151a80;
        case 0x151a84u: goto label_151a84;
        case 0x151a88u: goto label_151a88;
        case 0x151a8cu: goto label_151a8c;
        case 0x151a90u: goto label_151a90;
        case 0x151a94u: goto label_151a94;
        case 0x151a98u: goto label_151a98;
        case 0x151a9cu: goto label_151a9c;
        case 0x151aa0u: goto label_151aa0;
        case 0x151aa4u: goto label_151aa4;
        case 0x151aa8u: goto label_151aa8;
        case 0x151aacu: goto label_151aac;
        case 0x151ab0u: goto label_151ab0;
        case 0x151ab4u: goto label_151ab4;
        case 0x151ab8u: goto label_151ab8;
        case 0x151abcu: goto label_151abc;
        case 0x151ac0u: goto label_151ac0;
        case 0x151ac4u: goto label_151ac4;
        case 0x151ac8u: goto label_151ac8;
        case 0x151accu: goto label_151acc;
        case 0x151ad0u: goto label_151ad0;
        case 0x151ad4u: goto label_151ad4;
        case 0x151ad8u: goto label_151ad8;
        case 0x151adcu: goto label_151adc;
        case 0x151ae0u: goto label_151ae0;
        case 0x151ae4u: goto label_151ae4;
        case 0x151ae8u: goto label_151ae8;
        case 0x151aecu: goto label_151aec;
        case 0x151af0u: goto label_151af0;
        case 0x151af4u: goto label_151af4;
        case 0x151af8u: goto label_151af8;
        case 0x151afcu: goto label_151afc;
        case 0x151b00u: goto label_151b00;
        case 0x151b04u: goto label_151b04;
        case 0x151b08u: goto label_151b08;
        case 0x151b0cu: goto label_151b0c;
        case 0x151b10u: goto label_151b10;
        case 0x151b14u: goto label_151b14;
        case 0x151b18u: goto label_151b18;
        case 0x151b1cu: goto label_151b1c;
        case 0x151b20u: goto label_151b20;
        case 0x151b24u: goto label_151b24;
        case 0x151b28u: goto label_151b28;
        case 0x151b2cu: goto label_151b2c;
        case 0x151b30u: goto label_151b30;
        case 0x151b34u: goto label_151b34;
        case 0x151b38u: goto label_151b38;
        case 0x151b3cu: goto label_151b3c;
        case 0x151b40u: goto label_151b40;
        case 0x151b44u: goto label_151b44;
        case 0x151b48u: goto label_151b48;
        case 0x151b4cu: goto label_151b4c;
        case 0x151b50u: goto label_151b50;
        case 0x151b54u: goto label_151b54;
        case 0x151b58u: goto label_151b58;
        case 0x151b5cu: goto label_151b5c;
        case 0x151b60u: goto label_151b60;
        case 0x151b64u: goto label_151b64;
        case 0x151b68u: goto label_151b68;
        case 0x151b6cu: goto label_151b6c;
        case 0x151b70u: goto label_151b70;
        case 0x151b74u: goto label_151b74;
        case 0x151b78u: goto label_151b78;
        case 0x151b7cu: goto label_151b7c;
        case 0x151b80u: goto label_151b80;
        case 0x151b84u: goto label_151b84;
        case 0x151b88u: goto label_151b88;
        case 0x151b8cu: goto label_151b8c;
        case 0x151b90u: goto label_151b90;
        case 0x151b94u: goto label_151b94;
        case 0x151b98u: goto label_151b98;
        case 0x151b9cu: goto label_151b9c;
        case 0x151ba0u: goto label_151ba0;
        case 0x151ba4u: goto label_151ba4;
        case 0x151ba8u: goto label_151ba8;
        case 0x151bacu: goto label_151bac;
        case 0x151bb0u: goto label_151bb0;
        case 0x151bb4u: goto label_151bb4;
        case 0x151bb8u: goto label_151bb8;
        case 0x151bbcu: goto label_151bbc;
        case 0x151bc0u: goto label_151bc0;
        case 0x151bc4u: goto label_151bc4;
        case 0x151bc8u: goto label_151bc8;
        case 0x151bccu: goto label_151bcc;
        case 0x151bd0u: goto label_151bd0;
        case 0x151bd4u: goto label_151bd4;
        case 0x151bd8u: goto label_151bd8;
        case 0x151bdcu: goto label_151bdc;
        case 0x151be0u: goto label_151be0;
        case 0x151be4u: goto label_151be4;
        case 0x151be8u: goto label_151be8;
        case 0x151becu: goto label_151bec;
        case 0x151bf0u: goto label_151bf0;
        case 0x151bf4u: goto label_151bf4;
        case 0x151bf8u: goto label_151bf8;
        case 0x151bfcu: goto label_151bfc;
        case 0x151c00u: goto label_151c00;
        case 0x151c04u: goto label_151c04;
        case 0x151c08u: goto label_151c08;
        case 0x151c0cu: goto label_151c0c;
        case 0x151c10u: goto label_151c10;
        case 0x151c14u: goto label_151c14;
        case 0x151c18u: goto label_151c18;
        case 0x151c1cu: goto label_151c1c;
        case 0x151c20u: goto label_151c20;
        case 0x151c24u: goto label_151c24;
        case 0x151c28u: goto label_151c28;
        case 0x151c2cu: goto label_151c2c;
        case 0x151c30u: goto label_151c30;
        case 0x151c34u: goto label_151c34;
        case 0x151c38u: goto label_151c38;
        case 0x151c3cu: goto label_151c3c;
        case 0x151c40u: goto label_151c40;
        case 0x151c44u: goto label_151c44;
        case 0x151c48u: goto label_151c48;
        case 0x151c4cu: goto label_151c4c;
        case 0x151c50u: goto label_151c50;
        case 0x151c54u: goto label_151c54;
        case 0x151c58u: goto label_151c58;
        case 0x151c5cu: goto label_151c5c;
        case 0x151c60u: goto label_151c60;
        case 0x151c64u: goto label_151c64;
        case 0x151c68u: goto label_151c68;
        case 0x151c6cu: goto label_151c6c;
        case 0x151c70u: goto label_151c70;
        case 0x151c74u: goto label_151c74;
        case 0x151c78u: goto label_151c78;
        case 0x151c7cu: goto label_151c7c;
        case 0x151c80u: goto label_151c80;
        case 0x151c84u: goto label_151c84;
        case 0x151c88u: goto label_151c88;
        case 0x151c8cu: goto label_151c8c;
        case 0x151c90u: goto label_151c90;
        case 0x151c94u: goto label_151c94;
        case 0x151c98u: goto label_151c98;
        case 0x151c9cu: goto label_151c9c;
        case 0x151ca0u: goto label_151ca0;
        case 0x151ca4u: goto label_151ca4;
        case 0x151ca8u: goto label_151ca8;
        case 0x151cacu: goto label_151cac;
        case 0x151cb0u: goto label_151cb0;
        case 0x151cb4u: goto label_151cb4;
        case 0x151cb8u: goto label_151cb8;
        case 0x151cbcu: goto label_151cbc;
        case 0x151cc0u: goto label_151cc0;
        case 0x151cc4u: goto label_151cc4;
        case 0x151cc8u: goto label_151cc8;
        case 0x151cccu: goto label_151ccc;
        case 0x151cd0u: goto label_151cd0;
        case 0x151cd4u: goto label_151cd4;
        case 0x151cd8u: goto label_151cd8;
        case 0x151cdcu: goto label_151cdc;
        case 0x151ce0u: goto label_151ce0;
        case 0x151ce4u: goto label_151ce4;
        case 0x151ce8u: goto label_151ce8;
        case 0x151cecu: goto label_151cec;
        case 0x151cf0u: goto label_151cf0;
        case 0x151cf4u: goto label_151cf4;
        case 0x151cf8u: goto label_151cf8;
        case 0x151cfcu: goto label_151cfc;
        case 0x151d00u: goto label_151d00;
        case 0x151d04u: goto label_151d04;
        case 0x151d08u: goto label_151d08;
        case 0x151d0cu: goto label_151d0c;
        case 0x151d10u: goto label_151d10;
        case 0x151d14u: goto label_151d14;
        case 0x151d18u: goto label_151d18;
        case 0x151d1cu: goto label_151d1c;
        case 0x151d20u: goto label_151d20;
        case 0x151d24u: goto label_151d24;
        case 0x151d28u: goto label_151d28;
        case 0x151d2cu: goto label_151d2c;
        case 0x151d30u: goto label_151d30;
        case 0x151d34u: goto label_151d34;
        case 0x151d38u: goto label_151d38;
        case 0x151d3cu: goto label_151d3c;
        case 0x151d40u: goto label_151d40;
        case 0x151d44u: goto label_151d44;
        case 0x151d48u: goto label_151d48;
        case 0x151d4cu: goto label_151d4c;
        case 0x151d50u: goto label_151d50;
        case 0x151d54u: goto label_151d54;
        case 0x151d58u: goto label_151d58;
        case 0x151d5cu: goto label_151d5c;
        case 0x151d60u: goto label_151d60;
        case 0x151d64u: goto label_151d64;
        case 0x151d68u: goto label_151d68;
        case 0x151d6cu: goto label_151d6c;
        case 0x151d70u: goto label_151d70;
        case 0x151d74u: goto label_151d74;
        case 0x151d78u: goto label_151d78;
        default: break;
    }

    ctx->pc = 0x1518a0u;

label_1518a0:
    // 0x1518a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1518a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1518a4:
    // 0x1518a4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1518a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1518a8:
    // 0x1518a8: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1518a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_1518ac:
    // 0x1518ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1518acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1518b0:
    // 0x1518b0: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1518b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
label_1518b4:
    // 0x1518b4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1518b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_1518b8:
    // 0x1518b8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1518b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_1518bc:
    // 0x1518bc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1518bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1518c0:
    // 0x1518c0: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x1518c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1518c4:
    // 0x1518c4: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x1518c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_1518c8:
    // 0x1518c8: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x1518c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
label_1518cc:
    // 0x1518cc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1518ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1518d0:
    // 0x1518d0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1518d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1518d4:
    // 0x1518d4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1518d8:
    if (ctx->pc == 0x1518D8u) {
        ctx->pc = 0x1518D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518D4u;
        // 0x1518d8: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1518DCu;
        goto label_1518dc;
    }
    ctx->pc = 0x1518D4u;
    {
        const bool branch_taken_0x1518d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1518D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518D4u;
        // 0x1518d8: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518d4) {
            ctx->pc = 0x1518F4u;
            goto label_1518f4;
        }
    }
    ctx->pc = 0x1518DCu;
label_1518dc:
    // 0x1518dc: 0x26420630  addiu       $v0, $s2, 0x630
    ctx->pc = 0x1518dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_1518e0:
    // 0x1518e0: 0x26430820  addiu       $v1, $s2, 0x820
    ctx->pc = 0x1518e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
label_1518e4:
    // 0x1518e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1518e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1518e8:
    // 0x1518e8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1518e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1518ec:
    // 0x1518ec: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1518ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1518f0:
    // 0x1518f0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1518f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1518f4:
    // 0x1518f4: 0xc7948288  lwc1        $f20, -0x7D78($gp)
    ctx->pc = 0x1518f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1518f8:
    // 0x1518f8: 0x26440630  addiu       $a0, $s2, 0x630
    ctx->pc = 0x1518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_1518fc:
    // 0x1518fc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1518fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_151900:
    // 0x151900: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x151900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_151904:
    // 0x151904: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x151904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_151908:
    // 0x151908: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x151908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_15190c:
    // 0x15190c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_151910:
    // 0x151910: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x151910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
label_151914:
    // 0x151914: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x151914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_151918:
    // 0x151918: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15191c:
    if (ctx->pc == 0x15191Cu) {
        ctx->pc = 0x15191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151918u;
        // 0x15191c: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151920u;
        goto label_151920;
    }
    ctx->pc = 0x151918u;
    {
        const bool branch_taken_0x151918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151918u;
        // 0x15191c: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151918) {
            ctx->pc = 0x15192Cu;
            goto label_15192c;
        }
    }
    ctx->pc = 0x151920u;
label_151920:
    // 0x151920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151924:
    // 0x151924: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x151924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_151928:
    // 0x151928: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x151928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15192c:
    // 0x15192c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x15192cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_151930:
    // 0x151930: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x151930u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151934:
    // 0x151934: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_151938:
    // 0x151938: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151938u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15193c:
    // 0x15193c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_151940:
    // 0x151940: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x151940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_151944:
    // 0x151944: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x151944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_151948:
    // 0x151948: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15194c:
    if (ctx->pc == 0x15194Cu) {
        ctx->pc = 0x15194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151948u;
        // 0x15194c: 0x8f8288cc  lw          $v0, -0x7734($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151950u;
        goto label_151950;
    }
    ctx->pc = 0x151948u;
    {
        const bool branch_taken_0x151948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151948u;
        // 0x15194c: 0x8f8288cc  lw          $v0, -0x7734($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151948) {
            ctx->pc = 0x151968u;
            goto label_151968;
        }
    }
    ctx->pc = 0x151950u;
label_151950:
    // 0x151950: 0x264200c0  addiu       $v0, $s2, 0xC0
    ctx->pc = 0x151950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_151954:
    // 0x151954: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_151958:
    // 0x151958: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x151958u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15195c:
    // 0x15195c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15195cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_151960:
    // 0x151960: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151960u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_151964:
    // 0x151964: 0x8f8288cc  lw          $v0, -0x7734($gp)
    ctx->pc = 0x151964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
label_151968:
    // 0x151968: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_15196c:
    if (ctx->pc == 0x15196Cu) {
        ctx->pc = 0x15196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151968u;
        // 0x15196c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151970u;
        goto label_151970;
    }
    ctx->pc = 0x151968u;
    {
        const bool branch_taken_0x151968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151968u;
        // 0x15196c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151968) {
            ctx->pc = 0x1519B4u;
            goto label_1519b4;
        }
    }
    ctx->pc = 0x151970u;
label_151970:
    // 0x151970: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_151974:
    // 0x151974: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x151974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_151978:
    // 0x151978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x151978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15197c:
    // 0x15197c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x15197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_151980:
    // 0x151980: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x151980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_151984:
    // 0x151984: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_151988:
    // 0x151988: 0x40f809  jalr        $v0
label_15198c:
    if (ctx->pc == 0x15198Cu) {
        ctx->pc = 0x15198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151988u;
        // 0x15198c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151990u;
        goto label_151990;
    }
    ctx->pc = 0x151988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151990u);
        ctx->pc = 0x15198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151988u;
        // 0x15198c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151988u, 0x151990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151990u;
label_151990:
    // 0x151990: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_151994:
    // 0x151994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151998:
    // 0x151998: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15199c:
    // 0x15199c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1519a0:
    // 0x1519a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1519a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1519a4:
    // 0x1519a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1519a8:
    // 0x1519a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1519a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1519ac:
    // 0x1519ac: 0x40f809  jalr        $v0
label_1519b0:
    if (ctx->pc == 0x1519B0u) {
        ctx->pc = 0x1519B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519ACu;
        // 0x1519b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519B4u;
        goto label_1519b4;
    }
    ctx->pc = 0x1519ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1519B4u);
        ctx->pc = 0x1519B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519ACu;
        // 0x1519b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519ACu, 0x1519B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1519B4u;
label_1519b4:
    // 0x1519b4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1519b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1519b8:
    // 0x1519b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1519b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1519bc:
    // 0x1519bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1519bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1519c0:
    // 0x1519c0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1519c4:
    // 0x1519c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1519c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1519c8:
    // 0x1519c8: 0xc0618c2  jal         func_186308
label_1519cc:
    if (ctx->pc == 0x1519CCu) {
        ctx->pc = 0x1519CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519C8u;
        // 0x1519cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519D0u;
        goto label_1519d0;
    }
    ctx->pc = 0x1519C8u;
    SET_GPR_U32(ctx, 31, 0x1519D0u);
    ctx->pc = 0x1519CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519C8u;
    // 0x1519cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1519C8u, 0x1519D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519D0u;
label_1519d0:
    // 0x1519d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1519d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1519d4:
    // 0x1519d4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_1519d8:
    // 0x1519d8: 0x26420820  addiu       $v0, $s2, 0x820
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
label_1519dc:
    // 0x1519dc: 0x24639cb0  addiu       $v1, $v1, -0x6350
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941872));
label_1519e0:
    // 0x1519e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1519e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1519e4:
    // 0x1519e4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1519e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1519e8:
    // 0x1519e8: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1519e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1519ec:
    // 0x1519ec: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1519ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1519f0:
    // 0x1519f0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1519f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1519f4:
    // 0x1519f4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1519f8:
    // 0x1519f8: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
label_1519fc:
    // 0x1519fc: 0x26480400  addiu       $t0, $s2, 0x400
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
label_151a00:
    // 0x151a00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x151a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_151a04:
    // 0x151a04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x151a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_151a08:
    // 0x151a08: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x151a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_151a0c:
    // 0x151a0c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x151a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_151a10:
    // 0x151a10: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x151a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_151a14:
    // 0x151a14: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x151a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_151a18:
    // 0x151a18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x151a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_151a1c:
    // 0x151a1c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x151a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_151a20:
    // 0x151a20: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x151a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_151a24:
    // 0x151a24: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
label_151a28:
    // 0x151a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_151a2c:
    // 0x151a2c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x151a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_151a30:
    // 0x151a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_151a34:
    // 0x151a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_151a38:
    // 0x151a38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x151a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151a3c:
    // 0x151a3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x151a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_151a40:
    // 0x151a40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x151a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151a44:
    // 0x151a44: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x151a44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_151a48:
    // 0x151a48: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x151a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_151a4c:
    // 0x151a4c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x151a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_151a50:
    // 0x151a50: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x151a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_151a54:
    // 0x151a54: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x151a54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_151a58:
    // 0x151a58: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x151a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_151a5c:
    // 0x151a5c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151a60:
    // 0x151a60: 0x4bc1106c  vsub.xyz    $vf1, $vf2, $vf1
    ctx->pc = 0x151a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_151a64:
    // 0x151a64: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x151a64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_151a68:
    // 0x151a68: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x151a68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_151a6c:
    // 0x151a6c: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x151a6cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_151a70:
    // 0x151a70: 0x4be64b3d  vmr32.xyzw  $vf6, $vf9
    ctx->pc = 0x151a70u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_151a74:
    // 0x151a74: 0x4be5333d  vmr32.xyzw  $vf5, $vf6
    ctx->pc = 0x151a74u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_151a78:
    // 0x151a78: 0x4aa42b3d  vmr32.yw    $vf4, $vf5
    ctx->pc = 0x151a78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_151a7c:
    // 0x151a7c: 0x4b461b3c  vmove.xz    $vf6, $vf3
    ctx->pc = 0x151a7cu;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
label_151a80:
    // 0x151a80: 0x4bc121bc  vmulax.xyz  $ACC, $vf4, $vf1x
    ctx->pc = 0x151a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_151a84:
    // 0x151a84: 0x4bc128bd  vmadday.xyz $ACC, $vf5, $vf1y
    ctx->pc = 0x151a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_151a88:
    // 0x151a88: 0x4bc1304a  vmaddz.xyz  $vf1, $vf6, $vf1z
    ctx->pc = 0x151a88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_151a8c:
    // 0x151a8c: 0x4bc221bc  vmulax.xyz  $ACC, $vf4, $vf2x
    ctx->pc = 0x151a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_151a90:
    // 0x151a90: 0x4bc228bd  vmadday.xyz $ACC, $vf5, $vf2y
    ctx->pc = 0x151a90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_151a94:
    // 0x151a94: 0x4bc230ca  vmaddz.xyz  $vf3, $vf6, $vf2z
    ctx->pc = 0x151a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_151a98:
    // 0x151a98: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x151a98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_151a9c:
    // 0x151a9c: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x151a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_151aa0:
    // 0x151aa0: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x151aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_151aa4:
    // 0x151aa4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x151aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_151aa8:
    // 0x151aa8: 0x264303b0  addiu       $v1, $s2, 0x3B0
    ctx->pc = 0x151aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
label_151aac:
    // 0x151aac: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x151aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_151ab0:
    // 0x151ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151ab4:
    // 0x151ab4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x151ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_151ab8:
    // 0x151ab8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x151ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_151abc:
    // 0x151abc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x151abcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_151ac0:
    // 0x151ac0: 0xc781828c  lwc1        $f1, -0x7D74($gp)
    ctx->pc = 0x151ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151ac4:
    // 0x151ac4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x151ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_151ac8:
    // 0x151ac8: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x151ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_151acc:
    // 0x151acc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x151accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_151ad0:
    // 0x151ad0: 0x8e4501ac  lw          $a1, 0x1AC($s2)
    ctx->pc = 0x151ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_151ad4:
    // 0x151ad4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x151ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_151ad8:
    // 0x151ad8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x151ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_151adc:
    // 0x151adc: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x151adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_151ae0:
    // 0x151ae0: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x151ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_151ae4:
    // 0x151ae4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_151ae8:
    if (ctx->pc == 0x151AE8u) {
        ctx->pc = 0x151AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AE4u;
        // 0x151ae8: 0xe6420088  swc1        $f2, 0x88($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AECu;
        goto label_151aec;
    }
    ctx->pc = 0x151AE4u;
    {
        const bool branch_taken_0x151ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AE4u;
        // 0x151ae8: 0xe6420088  swc1        $f2, 0x88($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ae4) {
            ctx->pc = 0x151AFCu;
            goto label_151afc;
        }
    }
    ctx->pc = 0x151AECu;
label_151aec:
    // 0x151aec: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x151aecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
label_151af0:
    // 0x151af0: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x151af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151af4:
    // 0x151af4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x151af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_151af8:
    // 0x151af8: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x151af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_151afc:
    // 0x151afc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x151afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_151b00:
    // 0x151b00: 0x4600a146  mov.s       $f5, $f20
    ctx->pc = 0x151b00u;
    ctx->f[5] = FPU_MOV_S(ctx->f[20]);
label_151b04:
    // 0x151b04: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x151b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151b08:
    // 0x151b08: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x151b08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_151b0c:
    // 0x151b0c: 0xc6420650  lwc1        $f2, 0x650($s2)
    ctx->pc = 0x151b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_151b10:
    // 0x151b10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151b10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_151b14:
    // 0x151b14: 0xc6400658  lwc1        $f0, 0x658($s2)
    ctx->pc = 0x151b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151b18:
    // 0x151b18: 0xc7848290  lwc1        $f4, -0x7D70($gp)
    ctx->pc = 0x151b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_151b1c:
    // 0x151b1c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x151b1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_151b20:
    // 0x151b20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_151b24:
    // 0x151b24: 0xe6420650  swc1        $f2, 0x650($s2)
    ctx->pc = 0x151b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1616), bits); }
label_151b28:
    // 0x151b28: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
label_151b2c:
    if (ctx->pc == 0x151B2Cu) {
        ctx->pc = 0x151B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B28u;
        // 0x151b2c: 0xe6400658  swc1        $f0, 0x658($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1624), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B30u;
        goto label_151b30;
    }
    ctx->pc = 0x151B28u;
    {
        const bool branch_taken_0x151b28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B28u;
        // 0x151b2c: 0xe6400658  swc1        $f0, 0x658($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b28) {
            ctx->pc = 0x151B34u;
            goto label_151b34;
        }
    }
    ctx->pc = 0x151B30u;
label_151b30:
    // 0x151b30: 0xc7848294  lwc1        $f4, -0x7D6C($gp)
    ctx->pc = 0x151b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_151b34:
    // 0x151b34: 0x26440620  addiu       $a0, $s2, 0x620
    ctx->pc = 0x151b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_151b38:
    // 0x151b38: 0x26430830  addiu       $v1, $s2, 0x830
    ctx->pc = 0x151b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
label_151b3c:
    // 0x151b3c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x151b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_151b40:
    // 0x151b40: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x151b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_151b44:
    // 0x151b44: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151b44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_151b48:
    // 0x151b48: 0x4bc11068  vadd.xyz    $vf1, $vf2, $vf1
    ctx->pc = 0x151b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_151b4c:
    // 0x151b4c: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x151b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_151b50:
    // 0x151b50: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x151b50u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_151b54:
    // 0x151b54: 0x4bc80858  vmulx.xyz   $vf1, $vf1, $vf8x
    ctx->pc = 0x151b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_151b58:
    // 0x151b58: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x151b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_151b5c:
    // 0x151b5c: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x151b5cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_151b60:
    // 0x151b60: 0x4bc81098  vmulx.xyz   $vf2, $vf2, $vf8x
    ctx->pc = 0x151b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_151b64:
    // 0x151b64: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x151b64u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_151b68:
    // 0x151b68: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151b68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_151b6c:
    // 0x151b6c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x151b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_151b70:
    // 0x151b70: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x151b70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_151b74:
    // 0x151b74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x151b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151b78:
    // 0x151b78: 0xc0618da  jal         func_186368
label_151b7c:
    if (ctx->pc == 0x151B7Cu) {
        ctx->pc = 0x151B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B78u;
        // 0x151b7c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B80u;
        goto label_151b80;
    }
    ctx->pc = 0x151B78u;
    SET_GPR_U32(ctx, 31, 0x151B80u);
    ctx->pc = 0x151B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B78u;
    // 0x151b7c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x151B78u, 0x151B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B80u;
label_151b80:
    // 0x151b80: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x151b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_151b84:
    // 0x151b84: 0x8c620c08  lw          $v0, 0xC08($v1)
    ctx->pc = 0x151b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3080)));
label_151b88:
    // 0x151b88: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_151b8c:
    if (ctx->pc == 0x151B8Cu) {
        ctx->pc = 0x151B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B88u;
        // 0x151b8c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B90u;
        goto label_151b90;
    }
    ctx->pc = 0x151B88u;
    {
        const bool branch_taken_0x151b88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x151B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B88u;
        // 0x151b8c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b88) {
            ctx->pc = 0x151BA0u;
            goto label_151ba0;
        }
    }
    ctx->pc = 0x151B90u;
label_151b90:
    // 0x151b90: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x151b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
label_151b94:
    // 0x151b94: 0x10000003  b           . + 4 + (0x3 << 2)
label_151b98:
    if (ctx->pc == 0x151B98u) {
        ctx->pc = 0x151B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B94u;
        // 0x151b98: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B9Cu;
        goto label_151b9c;
    }
    ctx->pc = 0x151B94u;
    {
        const bool branch_taken_0x151b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B94u;
        // 0x151b98: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b94) {
            ctx->pc = 0x151BA4u;
            goto label_151ba4;
        }
    }
    ctx->pc = 0x151B9Cu;
label_151b9c:
    // 0x151b9c: 0x0  nop
    ctx->pc = 0x151b9cu;
    // NOP
label_151ba0:
    // 0x151ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151ba4:
    // 0x151ba4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x151ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_151ba8:
    // 0x151ba8: 0xc6420644  lwc1        $f2, 0x644($s2)
    ctx->pc = 0x151ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_151bac:
    // 0x151bac: 0xc7808298  lwc1        $f0, -0x7D68($gp)
    ctx->pc = 0x151bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151bb0:
    // 0x151bb0: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x151bb0u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
label_151bb4:
    // 0x151bb4: 0xe6420644  swc1        $f2, 0x644($s2)
    ctx->pc = 0x151bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1604), bits); }
label_151bb8:
    // 0x151bb8: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x151bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151bbc:
    // 0x151bbc: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x151bbcu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
label_151bc0:
    // 0x151bc0: 0xe6420644  swc1        $f2, 0x644($s2)
    ctx->pc = 0x151bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1604), bits); }
label_151bc4:
    // 0x151bc4: 0xc6400640  lwc1        $f0, 0x640($s2)
    ctx->pc = 0x151bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151bc8:
    // 0x151bc8: 0xc78182a0  lwc1        $f1, -0x7D60($gp)
    ctx->pc = 0x151bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151bcc:
    // 0x151bcc: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x151bccu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_151bd0:
    // 0x151bd0: 0xe6400640  swc1        $f0, 0x640($s2)
    ctx->pc = 0x151bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1600), bits); }
label_151bd4:
    // 0x151bd4: 0xc78182a4  lwc1        $f1, -0x7D5C($gp)
    ctx->pc = 0x151bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151bd8:
    // 0x151bd8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x151bd8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_151bdc:
    // 0x151bdc: 0xe6400640  swc1        $f0, 0x640($s2)
    ctx->pc = 0x151bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1600), bits); }
label_151be0:
    // 0x151be0: 0xc6410648  lwc1        $f1, 0x648($s2)
    ctx->pc = 0x151be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151be4:
    // 0x151be4: 0xc78082a8  lwc1        $f0, -0x7D58($gp)
    ctx->pc = 0x151be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151be8:
    // 0x151be8: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x151be8u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_151bec:
    // 0x151bec: 0xe6410648  swc1        $f1, 0x648($s2)
    ctx->pc = 0x151becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
label_151bf0:
    // 0x151bf0: 0xc78082ac  lwc1        $f0, -0x7D54($gp)
    ctx->pc = 0x151bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151bf4:
    // 0x151bf4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x151bf4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_151bf8:
    // 0x151bf8: 0xe6410648  swc1        $f1, 0x648($s2)
    ctx->pc = 0x151bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
label_151bfc:
    // 0x151bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151c00:
    // 0x151c00: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x151c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_151c04:
    // 0x151c04: 0xc4401a34  lwc1        $f0, 0x1A34($v0)
    ctx->pc = 0x151c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151c08:
    // 0x151c08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x151c08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_151c0c:
    // 0x151c0c: 0xc0618bc  jal         func_1862F0
label_151c10:
    if (ctx->pc == 0x151C10u) {
        ctx->pc = 0x151C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C0Cu;
        // 0x151c10: 0xe62200d4  swc1        $f2, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C14u;
        goto label_151c14;
    }
    ctx->pc = 0x151C0Cu;
    SET_GPR_U32(ctx, 31, 0x151C14u);
    ctx->pc = 0x151C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C0Cu;
    // 0x151c10: 0xe62200d4  swc1        $f2, 0xD4($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x151C0Cu, 0x151C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C14u;
label_151c14:
    // 0x151c14: 0xc6400640  lwc1        $f0, 0x640($s2)
    ctx->pc = 0x151c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151c18:
    // 0x151c18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x151c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_151c1c:
    // 0x151c1c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x151c1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_151c20:
    // 0x151c20: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x151c20u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_151c24:
    // 0x151c24: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x151c24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_151c28:
    // 0x151c28: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x151c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_151c2c:
    // 0x151c2c: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x151c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_151c30:
    // 0x151c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151c34:
    // 0x151c34: 0xc0618d4  jal         func_186350
label_151c38:
    if (ctx->pc == 0x151C38u) {
        ctx->pc = 0x151C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C34u;
        // 0x151c38: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C3Cu;
        goto label_151c3c;
    }
    ctx->pc = 0x151C34u;
    SET_GPR_U32(ctx, 31, 0x151C3Cu);
    ctx->pc = 0x151C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C34u;
    // 0x151c38: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x151C34u, 0x151C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C3Cu;
label_151c3c:
    // 0x151c3c: 0xc6400648  lwc1        $f0, 0x648($s2)
    ctx->pc = 0x151c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151c40:
    // 0x151c40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x151c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_151c44:
    // 0x151c44: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x151c44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_151c48:
    // 0x151c48: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x151c48u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_151c4c:
    // 0x151c4c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x151c4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_151c50:
    // 0x151c50: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x151c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_151c54:
    // 0x151c54: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x151c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_151c58:
    // 0x151c58: 0xc0618d4  jal         func_186350
label_151c5c:
    if (ctx->pc == 0x151C5Cu) {
        ctx->pc = 0x151C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C58u;
        // 0x151c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C60u;
        goto label_151c60;
    }
    ctx->pc = 0x151C58u;
    SET_GPR_U32(ctx, 31, 0x151C60u);
    ctx->pc = 0x151C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C58u;
    // 0x151c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x151C58u, 0x151C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C60u;
label_151c60:
    // 0x151c60: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x151c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_151c64:
    // 0x151c64: 0x24849cc0  addiu       $a0, $a0, -0x6340
    ctx->pc = 0x151c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941888));
label_151c68:
    // 0x151c68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x151c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_151c6c:
    // 0x151c6c: 0x26430640  addiu       $v1, $s2, 0x640
    ctx->pc = 0x151c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_151c70:
    // 0x151c70: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x151c70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_151c74:
    // 0x151c74: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x151c74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_151c78:
    // 0x151c78: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_151c7c:
    // 0x151c7c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x151c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_151c80:
    // 0x151c80: 0x26420650  addiu       $v0, $s2, 0x650
    ctx->pc = 0x151c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_151c84:
    // 0x151c84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151c84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_151c88:
    // 0x151c88: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x151c88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_151c8c:
    // 0x151c8c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_151c90:
    // 0x151c90: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151c90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_151c94:
    // 0x151c94: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x151c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_151c98:
    // 0x151c98: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x151c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_151c9c:
    // 0x151c9c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_151ca0:
    if (ctx->pc == 0x151CA0u) {
        ctx->pc = 0x151CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C9Cu;
        // 0x151ca0: 0x8e420264  lw          $v0, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CA4u;
        goto label_151ca4;
    }
    ctx->pc = 0x151C9Cu;
    {
        const bool branch_taken_0x151c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c9c) {
            ctx->pc = 0x151CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151C9Cu;
            // 0x151ca0: 0x8e420264  lw          $v0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151CB0u;
            goto label_151cb0;
        }
    }
    ctx->pc = 0x151CA4u;
label_151ca4:
    // 0x151ca4: 0xc058988  jal         func_162620
label_151ca8:
    if (ctx->pc == 0x151CA8u) {
        ctx->pc = 0x151CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CA4u;
        // 0x151ca8: 0x8e440690  lw          $a0, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CACu;
        goto label_151cac;
    }
    ctx->pc = 0x151CA4u;
    SET_GPR_U32(ctx, 31, 0x151CACu);
    ctx->pc = 0x151CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151CA4u;
    // 0x151ca8: 0x8e440690  lw          $a0, 0x690($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162620u, 0x151CA4u, 0x151CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CACu;
label_151cac:
    // 0x151cac: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x151cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_151cb0:
    // 0x151cb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x151cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_151cb4:
    // 0x151cb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_151cb8:
    if (ctx->pc == 0x151CB8u) {
        ctx->pc = 0x151CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CB4u;
        // 0x151cb8: 0x8e4203b0  lw          $v0, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CBCu;
        goto label_151cbc;
    }
    ctx->pc = 0x151CB4u;
    {
        const bool branch_taken_0x151cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CB4u;
        // 0x151cb8: 0x8e4203b0  lw          $v0, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cb4) {
            ctx->pc = 0x151CD8u;
            goto label_151cd8;
        }
    }
    ctx->pc = 0x151CBCu;
label_151cbc:
    // 0x151cbc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x151cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_151cc0:
    // 0x151cc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_151cc4:
    if (ctx->pc == 0x151CC4u) {
        ctx->pc = 0x151CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CC0u;
        // 0x151cc4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CC8u;
        goto label_151cc8;
    }
    ctx->pc = 0x151CC0u;
    {
        const bool branch_taken_0x151cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CC0u;
        // 0x151cc4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cc0) {
            ctx->pc = 0x151CF8u;
            goto label_151cf8;
        }
    }
    ctx->pc = 0x151CC8u;
label_151cc8:
    // 0x151cc8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x151cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_151ccc:
    // 0x151ccc: 0x1000000b  b           . + 4 + (0xB << 2)
label_151cd0:
    if (ctx->pc == 0x151CD0u) {
        ctx->pc = 0x151CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CCCu;
        // 0x151cd0: 0x24439cf0  addiu       $v1, $v0, -0x6310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CD4u;
        goto label_151cd4;
    }
    ctx->pc = 0x151CCCu;
    {
        const bool branch_taken_0x151ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CCCu;
        // 0x151cd0: 0x24439cf0  addiu       $v1, $v0, -0x6310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ccc) {
            ctx->pc = 0x151CFCu;
            goto label_151cfc;
        }
    }
    ctx->pc = 0x151CD4u;
label_151cd4:
    // 0x151cd4: 0x0  nop
    ctx->pc = 0x151cd4u;
    // NOP
label_151cd8:
    // 0x151cd8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x151cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_151cdc:
    // 0x151cdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_151ce0:
    if (ctx->pc == 0x151CE0u) {
        ctx->pc = 0x151CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CDCu;
        // 0x151ce0: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CE4u;
        goto label_151ce4;
    }
    ctx->pc = 0x151CDCu;
    {
        const bool branch_taken_0x151cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CDCu;
        // 0x151ce0: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cdc) {
            ctx->pc = 0x151CECu;
            goto label_151cec;
        }
    }
    ctx->pc = 0x151CE4u;
label_151ce4:
    // 0x151ce4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_151ce8:
    if (ctx->pc == 0x151CE8u) {
        ctx->pc = 0x151CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CE4u;
        // 0x151ce8: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CECu;
        goto label_151cec;
    }
    ctx->pc = 0x151CE4u;
    {
        const bool branch_taken_0x151ce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ce4) {
            ctx->pc = 0x151CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151CE4u;
            // 0x151ce8: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151CF8u;
            goto label_151cf8;
        }
    }
    ctx->pc = 0x151CECu;
label_151cec:
    // 0x151cec: 0x10000003  b           . + 4 + (0x3 << 2)
label_151cf0:
    if (ctx->pc == 0x151CF0u) {
        ctx->pc = 0x151CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CECu;
        // 0x151cf0: 0x24439cd0  addiu       $v1, $v0, -0x6330 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CF4u;
        goto label_151cf4;
    }
    ctx->pc = 0x151CECu;
    {
        const bool branch_taken_0x151cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CECu;
        // 0x151cf0: 0x24439cd0  addiu       $v1, $v0, -0x6330 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cec) {
            ctx->pc = 0x151CFCu;
            goto label_151cfc;
        }
    }
    ctx->pc = 0x151CF4u;
label_151cf4:
    // 0x151cf4: 0x0  nop
    ctx->pc = 0x151cf4u;
    // NOP
label_151cf8:
    // 0x151cf8: 0x24439ce0  addiu       $v1, $v0, -0x6320
    ctx->pc = 0x151cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
label_151cfc:
    // 0x151cfc: 0x26420620  addiu       $v0, $s2, 0x620
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
label_151d00:
    // 0x151d00: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x151d00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_151d04:
    // 0x151d04: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x151d04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_151d08:
    // 0x151d08: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_151d0c:
    // 0x151d0c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x151d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_151d10:
    // 0x151d10: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x151d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_151d14:
    // 0x151d14: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x151d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_151d18:
    // 0x151d18: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
label_151d1c:
    // 0x151d1c: 0x26440650  addiu       $a0, $s2, 0x650
    ctx->pc = 0x151d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_151d20:
    // 0x151d20: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x151d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_151d24:
    // 0x151d24: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x151d24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_151d28:
    // 0x151d28: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_151d2c:
    // 0x151d2c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x151d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_151d30:
    // 0x151d30: 0x26420640  addiu       $v0, $s2, 0x640
    ctx->pc = 0x151d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_151d34:
    // 0x151d34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_151d38:
    // 0x151d38: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x151d38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_151d3c:
    // 0x151d3c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_151d40:
    // 0x151d40: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_151d44:
    // 0x151d44: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x151d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_151d48:
    // 0x151d48: 0x24639d10  addiu       $v1, $v1, -0x62F0
    ctx->pc = 0x151d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941968));
label_151d4c:
    // 0x151d4c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x151d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_151d50:
    // 0x151d50: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x151d50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_151d54:
    // 0x151d54: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_151d58:
    // 0x151d58: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x151d58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_151d5c:
    // 0x151d5c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x151d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_151d60:
    // 0x151d60: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x151d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_151d64:
    // 0x151d64: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x151d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_151d68:
    // 0x151d68: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x151d68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_151d6c:
    // 0x151d6c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x151d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_151d70:
    // 0x151d70: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x151d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_151d74:
    // 0x151d74: 0x3e00008  jr          $ra
label_151d78:
    if (ctx->pc == 0x151D78u) {
        ctx->pc = 0x151D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D74u;
        // 0x151d78: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151D7Cu;
        goto label_fallthrough_0x151d74;
    }
    ctx->pc = 0x151D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D74u;
        // 0x151d78: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x151d74:
    ctx->pc = 0x151D7Cu;
}
