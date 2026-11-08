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

// Function: ApH_Cylin2Cylin__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork
// Address: 0x159b18 - 0x159dc0
void ApH_Cylin2Cylin__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x159b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApH_Cylin2Cylin__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x159b18");
#endif

    switch (ctx->pc) {
        case 0x159b18u: goto label_159b18;
        case 0x159b1cu: goto label_159b1c;
        case 0x159b20u: goto label_159b20;
        case 0x159b24u: goto label_159b24;
        case 0x159b28u: goto label_159b28;
        case 0x159b2cu: goto label_159b2c;
        case 0x159b30u: goto label_159b30;
        case 0x159b34u: goto label_159b34;
        case 0x159b38u: goto label_159b38;
        case 0x159b3cu: goto label_159b3c;
        case 0x159b40u: goto label_159b40;
        case 0x159b44u: goto label_159b44;
        case 0x159b48u: goto label_159b48;
        case 0x159b4cu: goto label_159b4c;
        case 0x159b50u: goto label_159b50;
        case 0x159b54u: goto label_159b54;
        case 0x159b58u: goto label_159b58;
        case 0x159b5cu: goto label_159b5c;
        case 0x159b60u: goto label_159b60;
        case 0x159b64u: goto label_159b64;
        case 0x159b68u: goto label_159b68;
        case 0x159b6cu: goto label_159b6c;
        case 0x159b70u: goto label_159b70;
        case 0x159b74u: goto label_159b74;
        case 0x159b78u: goto label_159b78;
        case 0x159b7cu: goto label_159b7c;
        case 0x159b80u: goto label_159b80;
        case 0x159b84u: goto label_159b84;
        case 0x159b88u: goto label_159b88;
        case 0x159b8cu: goto label_159b8c;
        case 0x159b90u: goto label_159b90;
        case 0x159b94u: goto label_159b94;
        case 0x159b98u: goto label_159b98;
        case 0x159b9cu: goto label_159b9c;
        case 0x159ba0u: goto label_159ba0;
        case 0x159ba4u: goto label_159ba4;
        case 0x159ba8u: goto label_159ba8;
        case 0x159bacu: goto label_159bac;
        case 0x159bb0u: goto label_159bb0;
        case 0x159bb4u: goto label_159bb4;
        case 0x159bb8u: goto label_159bb8;
        case 0x159bbcu: goto label_159bbc;
        case 0x159bc0u: goto label_159bc0;
        case 0x159bc4u: goto label_159bc4;
        case 0x159bc8u: goto label_159bc8;
        case 0x159bccu: goto label_159bcc;
        case 0x159bd0u: goto label_159bd0;
        case 0x159bd4u: goto label_159bd4;
        case 0x159bd8u: goto label_159bd8;
        case 0x159bdcu: goto label_159bdc;
        case 0x159be0u: goto label_159be0;
        case 0x159be4u: goto label_159be4;
        case 0x159be8u: goto label_159be8;
        case 0x159becu: goto label_159bec;
        case 0x159bf0u: goto label_159bf0;
        case 0x159bf4u: goto label_159bf4;
        case 0x159bf8u: goto label_159bf8;
        case 0x159bfcu: goto label_159bfc;
        case 0x159c00u: goto label_159c00;
        case 0x159c04u: goto label_159c04;
        case 0x159c08u: goto label_159c08;
        case 0x159c0cu: goto label_159c0c;
        case 0x159c10u: goto label_159c10;
        case 0x159c14u: goto label_159c14;
        case 0x159c18u: goto label_159c18;
        case 0x159c1cu: goto label_159c1c;
        case 0x159c20u: goto label_159c20;
        case 0x159c24u: goto label_159c24;
        case 0x159c28u: goto label_159c28;
        case 0x159c2cu: goto label_159c2c;
        case 0x159c30u: goto label_159c30;
        case 0x159c34u: goto label_159c34;
        case 0x159c38u: goto label_159c38;
        case 0x159c3cu: goto label_159c3c;
        case 0x159c40u: goto label_159c40;
        case 0x159c44u: goto label_159c44;
        case 0x159c48u: goto label_159c48;
        case 0x159c4cu: goto label_159c4c;
        case 0x159c50u: goto label_159c50;
        case 0x159c54u: goto label_159c54;
        case 0x159c58u: goto label_159c58;
        case 0x159c5cu: goto label_159c5c;
        case 0x159c60u: goto label_159c60;
        case 0x159c64u: goto label_159c64;
        case 0x159c68u: goto label_159c68;
        case 0x159c6cu: goto label_159c6c;
        case 0x159c70u: goto label_159c70;
        case 0x159c74u: goto label_159c74;
        case 0x159c78u: goto label_159c78;
        case 0x159c7cu: goto label_159c7c;
        case 0x159c80u: goto label_159c80;
        case 0x159c84u: goto label_159c84;
        case 0x159c88u: goto label_159c88;
        case 0x159c8cu: goto label_159c8c;
        case 0x159c90u: goto label_159c90;
        case 0x159c94u: goto label_159c94;
        case 0x159c98u: goto label_159c98;
        case 0x159c9cu: goto label_159c9c;
        case 0x159ca0u: goto label_159ca0;
        case 0x159ca4u: goto label_159ca4;
        case 0x159ca8u: goto label_159ca8;
        case 0x159cacu: goto label_159cac;
        case 0x159cb0u: goto label_159cb0;
        case 0x159cb4u: goto label_159cb4;
        case 0x159cb8u: goto label_159cb8;
        case 0x159cbcu: goto label_159cbc;
        case 0x159cc0u: goto label_159cc0;
        case 0x159cc4u: goto label_159cc4;
        case 0x159cc8u: goto label_159cc8;
        case 0x159cccu: goto label_159ccc;
        case 0x159cd0u: goto label_159cd0;
        case 0x159cd4u: goto label_159cd4;
        case 0x159cd8u: goto label_159cd8;
        case 0x159cdcu: goto label_159cdc;
        case 0x159ce0u: goto label_159ce0;
        case 0x159ce4u: goto label_159ce4;
        case 0x159ce8u: goto label_159ce8;
        case 0x159cecu: goto label_159cec;
        case 0x159cf0u: goto label_159cf0;
        case 0x159cf4u: goto label_159cf4;
        case 0x159cf8u: goto label_159cf8;
        case 0x159cfcu: goto label_159cfc;
        case 0x159d00u: goto label_159d00;
        case 0x159d04u: goto label_159d04;
        case 0x159d08u: goto label_159d08;
        case 0x159d0cu: goto label_159d0c;
        case 0x159d10u: goto label_159d10;
        case 0x159d14u: goto label_159d14;
        case 0x159d18u: goto label_159d18;
        case 0x159d1cu: goto label_159d1c;
        case 0x159d20u: goto label_159d20;
        case 0x159d24u: goto label_159d24;
        case 0x159d28u: goto label_159d28;
        case 0x159d2cu: goto label_159d2c;
        case 0x159d30u: goto label_159d30;
        case 0x159d34u: goto label_159d34;
        case 0x159d38u: goto label_159d38;
        case 0x159d3cu: goto label_159d3c;
        case 0x159d40u: goto label_159d40;
        case 0x159d44u: goto label_159d44;
        case 0x159d48u: goto label_159d48;
        case 0x159d4cu: goto label_159d4c;
        case 0x159d50u: goto label_159d50;
        case 0x159d54u: goto label_159d54;
        case 0x159d58u: goto label_159d58;
        case 0x159d5cu: goto label_159d5c;
        case 0x159d60u: goto label_159d60;
        case 0x159d64u: goto label_159d64;
        case 0x159d68u: goto label_159d68;
        case 0x159d6cu: goto label_159d6c;
        case 0x159d70u: goto label_159d70;
        case 0x159d74u: goto label_159d74;
        case 0x159d78u: goto label_159d78;
        case 0x159d7cu: goto label_159d7c;
        case 0x159d80u: goto label_159d80;
        case 0x159d84u: goto label_159d84;
        case 0x159d88u: goto label_159d88;
        case 0x159d8cu: goto label_159d8c;
        case 0x159d90u: goto label_159d90;
        case 0x159d94u: goto label_159d94;
        case 0x159d98u: goto label_159d98;
        case 0x159d9cu: goto label_159d9c;
        case 0x159da0u: goto label_159da0;
        case 0x159da4u: goto label_159da4;
        case 0x159da8u: goto label_159da8;
        case 0x159dacu: goto label_159dac;
        case 0x159db0u: goto label_159db0;
        case 0x159db4u: goto label_159db4;
        case 0x159db8u: goto label_159db8;
        case 0x159dbcu: goto label_159dbc;
        default: break;
    }

    ctx->pc = 0x159b18u;

label_159b18:
    // 0x159b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_159b1c:
    // 0x159b1c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x159b1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159b20:
    // 0x159b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_159b24:
    // 0x159b24: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x159b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159b28:
    // 0x159b28: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x159b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159b2c:
    // 0x159b2c: 0x8d4b0160  lw          $t3, 0x160($t2)
    ctx->pc = 0x159b2cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 352)));
label_159b30:
    // 0x159b30: 0xe4e10470  swc1        $f1, 0x470($a3)
    ctx->pc = 0x159b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 1136), bits); }
label_159b34:
    // 0x159b34: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x159b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159b38:
    // 0x159b38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_159b3c:
    // 0x159b3c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x159b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_159b40:
    // 0x159b40: 0xe4e00474  swc1        $f0, 0x474($a3)
    ctx->pc = 0x159b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 1140), bits); }
label_159b44:
    // 0x159b44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159b48:
    // 0x159b48: 0x15220005  bne         $t1, $v0, . + 4 + (0x5 << 2)
label_159b4c:
    if (ctx->pc == 0x159B4Cu) {
        ctx->pc = 0x159B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B48u;
        // 0x159b4c: 0x24e40400  addiu       $a0, $a3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B50u;
        goto label_159b50;
    }
    ctx->pc = 0x159B48u;
    {
        const bool branch_taken_0x159b48 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x159B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B48u;
        // 0x159b4c: 0x24e40400  addiu       $a0, $a3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b48) {
            ctx->pc = 0x159B60u;
            goto label_159b60;
        }
    }
    ctx->pc = 0x159B50u;
label_159b50:
    // 0x159b50: 0x24e303d0  addiu       $v1, $a3, 0x3D0
    ctx->pc = 0x159b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
label_159b54:
    // 0x159b54: 0x10000004  b           . + 4 + (0x4 << 2)
label_159b58:
    if (ctx->pc == 0x159B58u) {
        ctx->pc = 0x159B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B54u;
        // 0x159b58: 0x24e203c0  addiu       $v0, $a3, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B5Cu;
        goto label_159b5c;
    }
    ctx->pc = 0x159B54u;
    {
        const bool branch_taken_0x159b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B54u;
        // 0x159b58: 0x24e203c0  addiu       $v0, $a3, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b54) {
            ctx->pc = 0x159B68u;
            goto label_159b68;
        }
    }
    ctx->pc = 0x159B5Cu;
label_159b5c:
    // 0x159b5c: 0x0  nop
    ctx->pc = 0x159b5cu;
    // NOP
label_159b60:
    // 0x159b60: 0x24e303d0  addiu       $v1, $a3, 0x3D0
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
label_159b64:
    // 0x159b64: 0x24e203b0  addiu       $v0, $a3, 0x3B0
    ctx->pc = 0x159b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 944));
label_159b68:
    // 0x159b68: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x159b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_159b6c:
    // 0x159b6c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x159b6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_159b70:
    // 0x159b70: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x159b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_159b74:
    // 0x159b74: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x159b74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_159b78:
    // 0x159b78: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x159b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159b7c:
    // 0x159b7c: 0xc4c2001c  lwc1        $f2, 0x1C($a2)
    ctx->pc = 0x159b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_159b80:
    // 0x159b80: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x159b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159b84:
    // 0x159b84: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x159b84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_159b88:
    // 0x159b88: 0xc4e10404  lwc1        $f1, 0x404($a3)
    ctx->pc = 0x159b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159b8c:
    // 0x159b8c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x159b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_159b90:
    // 0x159b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x159b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_159b94:
    // 0x159b94: 0x4501007d  bc1t        . + 4 + (0x7D << 2)
label_159b98:
    if (ctx->pc == 0x159B98u) {
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B9Cu;
        goto label_159b9c;
    }
    ctx->pc = 0x159B94u;
    {
        const bool branch_taken_0x159b94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b94) {
            ctx->pc = 0x159D8Cu;
            goto label_159d8c;
        }
    }
    ctx->pc = 0x159B9Cu;
label_159b9c:
    // 0x159b9c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x159b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159ba0:
    // 0x159ba0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x159ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_159ba4:
    // 0x159ba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_159ba8:
    // 0x159ba8: 0x45010078  bc1t        . + 4 + (0x78 << 2)
label_159bac:
    if (ctx->pc == 0x159BACu) {
        ctx->pc = 0x159BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BA8u;
        // 0x159bac: 0x24e30400  addiu       $v1, $a3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BB0u;
        goto label_159bb0;
    }
    ctx->pc = 0x159BA8u;
    {
        const bool branch_taken_0x159ba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BA8u;
        // 0x159bac: 0x24e30400  addiu       $v1, $a3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ba8) {
            ctx->pc = 0x159D8Cu;
            goto label_159d8c;
        }
    }
    ctx->pc = 0x159BB0u;
label_159bb0:
    // 0x159bb0: 0xace00404  sw          $zero, 0x404($a3)
    ctx->pc = 0x159bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1028), GPR_U32(ctx, 0));
label_159bb4:
    // 0x159bb4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_159bb8:
    // 0x159bb8: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x159bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_159bbc:
    // 0x159bbc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x159bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_159bc0:
    // 0x159bc0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x159bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_159bc4:
    // 0x159bc4: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x159bc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_159bc8:
    // 0x159bc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_159bcc:
    // 0x159bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159bd0:
    // 0x159bd0: 0xc780830c  lwc1        $f0, -0x7CF4($gp)
    ctx->pc = 0x159bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159bd4:
    // 0x159bd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_159bd8:
    // 0x159bd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_159bdc:
    if (ctx->pc == 0x159BDCu) {
        ctx->pc = 0x159BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BD8u;
        // 0x159bdc: 0xe4e10478  swc1        $f1, 0x478($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 1144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BE0u;
        goto label_159be0;
    }
    ctx->pc = 0x159BD8u;
    {
        const bool branch_taken_0x159bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BD8u;
        // 0x159bdc: 0xe4e10478  swc1        $f1, 0x478($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bd8) {
            ctx->pc = 0x159BF0u;
            goto label_159bf0;
        }
    }
    ctx->pc = 0x159BE0u;
label_159be0:
    // 0x159be0: 0x55220004  bnel        $t1, $v0, . + 4 + (0x4 << 2)
label_159be4:
    if (ctx->pc == 0x159BE4u) {
        ctx->pc = 0x159BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BE0u;
        // 0x159be4: 0xc4e10478  lwc1        $f1, 0x478($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BE8u;
        goto label_159be8;
    }
    ctx->pc = 0x159BE0u;
    {
        const bool branch_taken_0x159be0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x159be0) {
            ctx->pc = 0x159BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159BE0u;
            // 0x159be4: 0xc4e10478  lwc1        $f1, 0x478($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x159BF4u;
            goto label_159bf4;
        }
    }
    ctx->pc = 0x159BE8u;
label_159be8:
    // 0x159be8: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_159bec:
    if (ctx->pc == 0x159BECu) {
        ctx->pc = 0x159BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BE8u;
        // 0x159bec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BF0u;
        goto label_159bf0;
    }
    ctx->pc = 0x159BE8u;
    {
        const bool branch_taken_0x159be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BE8u;
        // 0x159bec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159be8) {
            ctx->pc = 0x159B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159b48;
        }
    }
    ctx->pc = 0x159BF0u;
label_159bf0:
    // 0x159bf0: 0xc4e10478  lwc1        $f1, 0x478($a3)
    ctx->pc = 0x159bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159bf4:
    // 0x159bf4: 0xc4e00474  lwc1        $f0, 0x474($a3)
    ctx->pc = 0x159bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159bf8:
    // 0x159bf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_159bfc:
    // 0x159bfc: 0x45000063  bc1f        . + 4 + (0x63 << 2)
label_159c00:
    if (ctx->pc == 0x159C00u) {
        ctx->pc = 0x159C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BFCu;
        // 0x159c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C04u;
        goto label_159c04;
    }
    ctx->pc = 0x159BFCu;
    {
        const bool branch_taken_0x159bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BFCu;
        // 0x159c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bfc) {
            ctx->pc = 0x159D8Cu;
            goto label_159d8c;
        }
    }
    ctx->pc = 0x159C04u;
label_159c04:
    // 0x159c04: 0x24e80120  addiu       $t0, $a3, 0x120
    ctx->pc = 0x159c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_159c08:
    // 0x159c08: 0xc4e20134  lwc1        $f2, 0x134($a3)
    ctx->pc = 0x159c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_159c0c:
    // 0x159c0c: 0x46010104  c1          0x10104
    ctx->pc = 0x159c0cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
label_159c10:
    // 0x159c10: 0xc7808310  lwc1        $f0, -0x7CF0($gp)
    ctx->pc = 0x159c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159c14:
    // 0x159c14: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x159c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_159c18:
    // 0x159c18: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_159c1c:
    if (ctx->pc == 0x159C1Cu) {
        ctx->pc = 0x159C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C18u;
        // 0x159c1c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C20u;
        goto label_159c20;
    }
    ctx->pc = 0x159C18u;
    {
        const bool branch_taken_0x159c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159c18) {
            ctx->pc = 0x159C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C18u;
            // 0x159c1c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C54u;
            goto label_159c54;
        }
    }
    ctx->pc = 0x159C20u;
label_159c20:
    // 0x159c20: 0x24e60400  addiu       $a2, $a3, 0x400
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
label_159c24:
    // 0x159c24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_159c28:
    // 0x159c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_159c2c:
    // 0x159c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_159c30:
    // 0x159c30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x159c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_159c34:
    // 0x159c34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x159c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_159c38:
    // 0x159c38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x159c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_159c3c:
    // 0x159c3c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x159c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_159c40:
    // 0x159c40: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159c40u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_159c44:
    // 0x159c44: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159c44u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_159c48:
    // 0x159c48: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159c48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_159c4c:
    // 0x159c4c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x159c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_159c50:
    // 0x159c50: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x159c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_159c54:
    // 0x159c54: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_159c58:
    if (ctx->pc == 0x159C58u) {
        ctx->pc = 0x159C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C54u;
        // 0x159c58: 0xc500001c  lwc1        $f0, 0x1C($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C5Cu;
        goto label_159c5c;
    }
    ctx->pc = 0x159C54u;
    {
        const bool branch_taken_0x159c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159c54) {
            ctx->pc = 0x159C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C54u;
            // 0x159c58: 0xc500001c  lwc1        $f0, 0x1C($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C70u;
            goto label_159c70;
        }
    }
    ctx->pc = 0x159C5Cu;
label_159c5c:
    // 0x159c5c: 0x24e20400  addiu       $v0, $a3, 0x400
    ctx->pc = 0x159c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
label_159c60:
    // 0x159c60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x159c60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_159c64:
    // 0x159c64: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x159c64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_159c68:
    // 0x159c68: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x159c68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_159c6c:
    // 0x159c6c: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x159c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159c70:
    // 0x159c70: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x159c70u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_159c74:
    // 0x159c74: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x159c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159c78:
    // 0x159c78: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x159c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_159c7c:
    // 0x159c7c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_159c80:
    // 0x159c80: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x159c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_159c84:
    // 0x159c84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_159c88:
    // 0x159c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x159c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_159c8c:
    // 0x159c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x159c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_159c90:
    // 0x159c90: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x159c90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_159c94:
    // 0x159c94: 0x24e50400  addiu       $a1, $a3, 0x400
    ctx->pc = 0x159c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
label_159c98:
    // 0x159c98: 0xa0c30020  sb          $v1, 0x20($a2)
    ctx->pc = 0x159c98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
label_159c9c:
    // 0x159c9c: 0x24e30150  addiu       $v1, $a3, 0x150
    ctx->pc = 0x159c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_159ca0:
    // 0x159ca0: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x159ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_159ca4:
    // 0x159ca4: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x159ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_159ca8:
    // 0x159ca8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x159ca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_159cac:
    // 0x159cac: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x159cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
label_159cb0:
    // 0x159cb0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_159cb4:
    // 0x159cb4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x159cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_159cb8:
    // 0x159cb8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x159cb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_159cbc:
    // 0x159cbc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x159cbcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_159cc0:
    // 0x159cc0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x159cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_159cc4:
    // 0x159cc4: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x159cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_159cc8:
    // 0x159cc8: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x159cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_159ccc:
    // 0x159ccc: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x159cccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_159cd0:
    // 0x159cd0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_159cd4:
    // 0x159cd4: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x159cd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_159cd8:
    // 0x159cd8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x159cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_159cdc:
    // 0x159cdc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x159cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_159ce0:
    // 0x159ce0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x159ce0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_159ce4:
    // 0x159ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_159ce8:
    // 0x159ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_159cec:
    // 0x159cec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_159cf0:
    // 0x159cf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_159cf4:
    // 0x159cf4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x159cf4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_159cf8:
    // 0x159cf8: 0xc7818314  lwc1        $f1, -0x7CEC($gp)
    ctx->pc = 0x159cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159cfc:
    // 0x159cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_159d00:
    // 0x159d00: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_159d04:
    if (ctx->pc == 0x159D04u) {
        ctx->pc = 0x159D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D00u;
        // 0x159d04: 0x24c30070  addiu       $v1, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D08u;
        goto label_159d08;
    }
    ctx->pc = 0x159D00u;
    {
        const bool branch_taken_0x159d00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D00u;
        // 0x159d04: 0x24c30070  addiu       $v1, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d00) {
            ctx->pc = 0x159D40u;
            goto label_159d40;
        }
    }
    ctx->pc = 0x159D08u;
label_159d08:
    // 0x159d08: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x159d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_159d0c:
    // 0x159d0c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159d0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_159d10:
    // 0x159d10: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x159d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_159d14:
    // 0x159d14: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_159d18:
    // 0x159d18: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_159d1c:
    // 0x159d1c: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x159d1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_159d20:
    // 0x159d20: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x159d20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_159d24:
    // 0x159d24: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x159d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_159d28:
    // 0x159d28: 0x4a0003bf  vwaitq
    ctx->pc = 0x159d28u;
    // VWAITQ (Q already resolved in this runtime)
label_159d2c:
    // 0x159d2c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x159d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_159d30:
    // 0x159d30: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x159d30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_159d34:
    // 0x159d34: 0x10000005  b           . + 4 + (0x5 << 2)
label_159d38:
    if (ctx->pc == 0x159D38u) {
        ctx->pc = 0x159D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D34u;
        // 0x159d38: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D3Cu;
        goto label_159d3c;
    }
    ctx->pc = 0x159D34u;
    {
        const bool branch_taken_0x159d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D34u;
        // 0x159d38: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d34) {
            ctx->pc = 0x159D4Cu;
            goto label_159d4c;
        }
    }
    ctx->pc = 0x159D3Cu;
label_159d3c:
    // 0x159d3c: 0x0  nop
    ctx->pc = 0x159d3cu;
    // NOP
label_159d40:
    // 0x159d40: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x159d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_159d44:
    // 0x159d44: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x159d44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_159d48:
    // 0x159d48: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_159d4c:
    // 0x159d4c: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_159d50:
    // 0x159d50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x159d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_159d54:
    // 0x159d54: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x159d54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_159d58:
    // 0x159d58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x159d58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_159d5c:
    // 0x159d5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x159d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_159d60:
    // 0x159d60: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x159d60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_159d64:
    // 0x159d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159d68:
    // 0x159d68: 0xc4c00084  lwc1        $f0, 0x84($a2)
    ctx->pc = 0x159d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159d6c:
    // 0x159d6c: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x159d6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_159d70:
    // 0x159d70: 0xacc80094  sw          $t0, 0x94($a2)
    ctx->pc = 0x159d70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 8));
label_159d74:
    // 0x159d74: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x159d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_159d78:
    // 0x159d78: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x159d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_159d7c:
    // 0x159d7c: 0xacc5009c  sw          $a1, 0x9C($a2)
    ctx->pc = 0x159d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 5));
label_159d80:
    // 0x159d80: 0xe4c30098  swc1        $f3, 0x98($a2)
    ctx->pc = 0x159d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
label_159d84:
    // 0x159d84: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x159d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_159d88:
    // 0x159d88: 0xe4c00084  swc1        $f0, 0x84($a2)
    ctx->pc = 0x159d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
label_159d8c:
    // 0x159d8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_159d90:
    if (ctx->pc == 0x159D90u) {
        ctx->pc = 0x159D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D8Cu;
        // 0x159d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D94u;
        goto label_159d94;
    }
    ctx->pc = 0x159D8Cu;
    {
        const bool branch_taken_0x159d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D8Cu;
        // 0x159d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d8c) {
            ctx->pc = 0x159DB8u;
            goto label_159db8;
        }
    }
    ctx->pc = 0x159D94u;
label_159d94:
    // 0x159d94: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x159d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_159d98:
    // 0x159d98: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x159d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_159d9c:
    // 0x159d9c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x159d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_159da0:
    // 0x159da0: 0x8ce50120  lw          $a1, 0x120($a3)
    ctx->pc = 0x159da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
label_159da4:
    // 0x159da4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x159da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_159da8:
    // 0x159da8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_159dac:
    // 0x159dac: 0x60f809  jalr        $v1
label_159db0:
    if (ctx->pc == 0x159DB0u) {
        ctx->pc = 0x159DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DACu;
        // 0x159db0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DB4u;
        goto label_159db4;
    }
    ctx->pc = 0x159DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159DB4u);
        ctx->pc = 0x159DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DACu;
        // 0x159db0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159DACu, 0x159DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159DB4u;
label_159db4:
    // 0x159db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159db8:
    // 0x159db8: 0x3e00008  jr          $ra
label_159dbc:
    if (ctx->pc == 0x159DBCu) {
        ctx->pc = 0x159DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DB8u;
        // 0x159dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DC0u;
        goto label_fallthrough_0x159db8;
    }
    ctx->pc = 0x159DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DB8u;
        // 0x159dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159db8:
    ctx->pc = 0x159DC0u;
}
