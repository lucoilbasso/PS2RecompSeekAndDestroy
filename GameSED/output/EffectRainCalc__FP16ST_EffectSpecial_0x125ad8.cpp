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

// Function: EffectRainCalc__FP16ST_EffectSpecial
// Address: 0x125ad8 - 0x125d28
void EffectRainCalc__FP16ST_EffectSpecial_0x125ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectRainCalc__FP16ST_EffectSpecial_0x125ad8");
#endif

    switch (ctx->pc) {
        case 0x125ad8u: goto label_125ad8;
        case 0x125adcu: goto label_125adc;
        case 0x125ae0u: goto label_125ae0;
        case 0x125ae4u: goto label_125ae4;
        case 0x125ae8u: goto label_125ae8;
        case 0x125aecu: goto label_125aec;
        case 0x125af0u: goto label_125af0;
        case 0x125af4u: goto label_125af4;
        case 0x125af8u: goto label_125af8;
        case 0x125afcu: goto label_125afc;
        case 0x125b00u: goto label_125b00;
        case 0x125b04u: goto label_125b04;
        case 0x125b08u: goto label_125b08;
        case 0x125b0cu: goto label_125b0c;
        case 0x125b10u: goto label_125b10;
        case 0x125b14u: goto label_125b14;
        case 0x125b18u: goto label_125b18;
        case 0x125b1cu: goto label_125b1c;
        case 0x125b20u: goto label_125b20;
        case 0x125b24u: goto label_125b24;
        case 0x125b28u: goto label_125b28;
        case 0x125b2cu: goto label_125b2c;
        case 0x125b30u: goto label_125b30;
        case 0x125b34u: goto label_125b34;
        case 0x125b38u: goto label_125b38;
        case 0x125b3cu: goto label_125b3c;
        case 0x125b40u: goto label_125b40;
        case 0x125b44u: goto label_125b44;
        case 0x125b48u: goto label_125b48;
        case 0x125b4cu: goto label_125b4c;
        case 0x125b50u: goto label_125b50;
        case 0x125b54u: goto label_125b54;
        case 0x125b58u: goto label_125b58;
        case 0x125b5cu: goto label_125b5c;
        case 0x125b60u: goto label_125b60;
        case 0x125b64u: goto label_125b64;
        case 0x125b68u: goto label_125b68;
        case 0x125b6cu: goto label_125b6c;
        case 0x125b70u: goto label_125b70;
        case 0x125b74u: goto label_125b74;
        case 0x125b78u: goto label_125b78;
        case 0x125b7cu: goto label_125b7c;
        case 0x125b80u: goto label_125b80;
        case 0x125b84u: goto label_125b84;
        case 0x125b88u: goto label_125b88;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b90u: goto label_125b90;
        case 0x125b94u: goto label_125b94;
        case 0x125b98u: goto label_125b98;
        case 0x125b9cu: goto label_125b9c;
        case 0x125ba0u: goto label_125ba0;
        case 0x125ba4u: goto label_125ba4;
        case 0x125ba8u: goto label_125ba8;
        case 0x125bacu: goto label_125bac;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb4u: goto label_125bb4;
        case 0x125bb8u: goto label_125bb8;
        case 0x125bbcu: goto label_125bbc;
        case 0x125bc0u: goto label_125bc0;
        case 0x125bc4u: goto label_125bc4;
        case 0x125bc8u: goto label_125bc8;
        case 0x125bccu: goto label_125bcc;
        case 0x125bd0u: goto label_125bd0;
        case 0x125bd4u: goto label_125bd4;
        case 0x125bd8u: goto label_125bd8;
        case 0x125bdcu: goto label_125bdc;
        case 0x125be0u: goto label_125be0;
        case 0x125be4u: goto label_125be4;
        case 0x125be8u: goto label_125be8;
        case 0x125becu: goto label_125bec;
        case 0x125bf0u: goto label_125bf0;
        case 0x125bf4u: goto label_125bf4;
        case 0x125bf8u: goto label_125bf8;
        case 0x125bfcu: goto label_125bfc;
        case 0x125c00u: goto label_125c00;
        case 0x125c04u: goto label_125c04;
        case 0x125c08u: goto label_125c08;
        case 0x125c0cu: goto label_125c0c;
        case 0x125c10u: goto label_125c10;
        case 0x125c14u: goto label_125c14;
        case 0x125c18u: goto label_125c18;
        case 0x125c1cu: goto label_125c1c;
        case 0x125c20u: goto label_125c20;
        case 0x125c24u: goto label_125c24;
        case 0x125c28u: goto label_125c28;
        case 0x125c2cu: goto label_125c2c;
        case 0x125c30u: goto label_125c30;
        case 0x125c34u: goto label_125c34;
        case 0x125c38u: goto label_125c38;
        case 0x125c3cu: goto label_125c3c;
        case 0x125c40u: goto label_125c40;
        case 0x125c44u: goto label_125c44;
        case 0x125c48u: goto label_125c48;
        case 0x125c4cu: goto label_125c4c;
        case 0x125c50u: goto label_125c50;
        case 0x125c54u: goto label_125c54;
        case 0x125c58u: goto label_125c58;
        case 0x125c5cu: goto label_125c5c;
        case 0x125c60u: goto label_125c60;
        case 0x125c64u: goto label_125c64;
        case 0x125c68u: goto label_125c68;
        case 0x125c6cu: goto label_125c6c;
        case 0x125c70u: goto label_125c70;
        case 0x125c74u: goto label_125c74;
        case 0x125c78u: goto label_125c78;
        case 0x125c7cu: goto label_125c7c;
        case 0x125c80u: goto label_125c80;
        case 0x125c84u: goto label_125c84;
        case 0x125c88u: goto label_125c88;
        case 0x125c8cu: goto label_125c8c;
        case 0x125c90u: goto label_125c90;
        case 0x125c94u: goto label_125c94;
        case 0x125c98u: goto label_125c98;
        case 0x125c9cu: goto label_125c9c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125ca4u: goto label_125ca4;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cacu: goto label_125cac;
        case 0x125cb0u: goto label_125cb0;
        case 0x125cb4u: goto label_125cb4;
        case 0x125cb8u: goto label_125cb8;
        case 0x125cbcu: goto label_125cbc;
        case 0x125cc0u: goto label_125cc0;
        case 0x125cc4u: goto label_125cc4;
        case 0x125cc8u: goto label_125cc8;
        case 0x125cccu: goto label_125ccc;
        case 0x125cd0u: goto label_125cd0;
        case 0x125cd4u: goto label_125cd4;
        case 0x125cd8u: goto label_125cd8;
        case 0x125cdcu: goto label_125cdc;
        case 0x125ce0u: goto label_125ce0;
        case 0x125ce4u: goto label_125ce4;
        case 0x125ce8u: goto label_125ce8;
        case 0x125cecu: goto label_125cec;
        case 0x125cf0u: goto label_125cf0;
        case 0x125cf4u: goto label_125cf4;
        case 0x125cf8u: goto label_125cf8;
        case 0x125cfcu: goto label_125cfc;
        case 0x125d00u: goto label_125d00;
        case 0x125d04u: goto label_125d04;
        case 0x125d08u: goto label_125d08;
        case 0x125d0cu: goto label_125d0c;
        case 0x125d10u: goto label_125d10;
        case 0x125d14u: goto label_125d14;
        case 0x125d18u: goto label_125d18;
        case 0x125d1cu: goto label_125d1c;
        case 0x125d20u: goto label_125d20;
        case 0x125d24u: goto label_125d24;
        default: break;
    }

    ctx->pc = 0x125ad8u;

label_125ad8:
    // 0x125ad8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x125ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_125adc:
    // 0x125adc: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x125adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_125ae0:
    // 0x125ae0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x125ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_125ae4:
    // 0x125ae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x125ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125ae8:
    // 0x125ae8: 0xe7b600a8  swc1        $f22, 0xA8($sp)
    ctx->pc = 0x125ae8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_125aec:
    // 0x125aec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x125aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_125af0:
    // 0x125af0: 0xe7b500a0  swc1        $f21, 0xA0($sp)
    ctx->pc = 0x125af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_125af4:
    // 0x125af4: 0x24a5f640  addiu       $a1, $a1, -0x9C0
    ctx->pc = 0x125af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
label_125af8:
    // 0x125af8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x125af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_125afc:
    // 0x125afc: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x125afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_125b00:
    // 0x125b00: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_125b04:
    // 0x125b04: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x125b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_125b08:
    // 0x125b08: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x125b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_125b0c:
    // 0x125b0c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x125b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_125b10:
    // 0x125b10: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x125b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_125b14:
    // 0x125b14: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x125b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_125b18:
    // 0x125b18: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x125b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_125b1c:
    // 0x125b1c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x125b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_125b20:
    // 0x125b20: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x125b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_125b24:
    // 0x125b24: 0xe7b700b0  swc1        $f23, 0xB0($sp)
    ctx->pc = 0x125b24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_125b28:
    // 0x125b28: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x125b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_125b2c:
    // 0x125b2c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_125b30:
    // 0x125b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125b34:
    // 0x125b34: 0x8e4301b8  lw          $v1, 0x1B8($s2)
    ctx->pc = 0x125b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_125b38:
    // 0x125b38: 0x8cc70154  lw          $a3, 0x154($a2)
    ctx->pc = 0x125b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
label_125b3c:
    // 0x125b3c: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x125b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
label_125b40:
    // 0x125b40: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x125b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_125b44:
    // 0x125b44: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x125b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_125b48:
    // 0x125b48: 0x8ce60088  lw          $a2, 0x88($a3)
    ctx->pc = 0x125b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_125b4c:
    // 0x125b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_125b50:
    // 0x125b50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x125b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_125b54:
    // 0x125b54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x125b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_125b58:
    // 0x125b58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x125b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_125b5c:
    // 0x125b5c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x125b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125b60:
    // 0x125b60: 0x8cc70048  lw          $a3, 0x48($a2)
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_125b64:
    // 0x125b64: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x125b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125b68:
    // 0x125b68: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x125b68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_125b6c:
    // 0x125b6c: 0x8cf502f8  lw          $s5, 0x2F8($a3)
    ctx->pc = 0x125b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 760)));
label_125b70:
    // 0x125b70: 0xc066f72  jal         func_19BDC8
label_125b74:
    if (ctx->pc == 0x125B74u) {
        ctx->pc = 0x125B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B70u;
        // 0x125b74: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B78u;
        goto label_125b78;
    }
    ctx->pc = 0x125B70u;
    SET_GPR_U32(ctx, 31, 0x125B78u);
    ctx->pc = 0x125B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B70u;
    // 0x125b74: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x125B70u, 0x125B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B78u;
label_125b78:
    // 0x125b78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125b7c:
    // 0x125b7c: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x125b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_125b80:
    // 0x125b80: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_125b84:
    // 0x125b84: 0x3404c350  ori         $a0, $zero, 0xC350
    ctx->pc = 0x125b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_125b88:
    // 0x125b88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_125b8c:
    // 0x125b8c: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x125b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_125b90:
    // 0x125b90: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x125b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_125b94:
    // 0x125b94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_125b98:
    if (ctx->pc == 0x125B98u) {
        ctx->pc = 0x125B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B94u;
        // 0x125b98: 0xae4201b8  sw          $v0, 0x1B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B9Cu;
        goto label_125b9c;
    }
    ctx->pc = 0x125B94u;
    {
        const bool branch_taken_0x125b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B94u;
        // 0x125b98: 0xae4201b8  sw          $v0, 0x1B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b94) {
            ctx->pc = 0x125BA0u;
            goto label_125ba0;
        }
    }
    ctx->pc = 0x125B9Cu;
label_125b9c:
    // 0x125b9c: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x125b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
label_125ba0:
    // 0x125ba0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_125ba4:
    // 0x125ba4: 0xc79480e8  lwc1        $f20, -0x7F18($gp)
    ctx->pc = 0x125ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_125ba8:
    // 0x125ba8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_125bac:
    // 0x125bac: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x125bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_125bb0:
    // 0x125bb0: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x125bb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
label_125bb4:
    // 0x125bb4: 0x26f70ad0  addiu       $s7, $s7, 0xAD0
    ctx->pc = 0x125bb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2768));
label_125bb8:
    // 0x125bb8: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x125bb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_125bbc:
    // 0x125bbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125bc0:
    // 0x125bc0: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x125bc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_125bc4:
    // 0x125bc4: 0x26b40170  addiu       $s4, $s5, 0x170
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
label_125bc8:
    // 0x125bc8: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x125bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_125bcc:
    // 0x125bcc: 0x0  nop
    ctx->pc = 0x125bccu;
    // NOP
label_125bd0:
    // 0x125bd0: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x125bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_125bd4:
    // 0x125bd4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x125bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125bd8:
    // 0x125bd8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x125bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_125bdc:
    // 0x125bdc: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x125bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_125be0:
    // 0x125be0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x125be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125be4:
    // 0x125be4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x125be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125be8:
    // 0x125be8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x125be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_125bec:
    // 0x125bec: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x125becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125bf0:
    // 0x125bf0: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x125bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_125bf4:
    // 0x125bf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125bf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_125bf8:
    // 0x125bf8: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x125bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_125bfc:
    // 0x125bfc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x125bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c00:
    // 0x125c00: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x125c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_125c04:
    // 0x125c04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x125c04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_125c08:
    // 0x125c08: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x125c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_125c0c:
    // 0x125c0c: 0x4602b836  c.le.s      $f23, $f2
    ctx->pc = 0x125c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125c10:
    // 0x125c10: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x125c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c14:
    // 0x125c14: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x125c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_125c18:
    // 0x125c18: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x125c18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_125c1c:
    // 0x125c1c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_125c20:
    if (ctx->pc == 0x125C20u) {
        ctx->pc = 0x125C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C1Cu;
        // 0x125c20: 0xe6230018  swc1        $f3, 0x18($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C24u;
        goto label_125c24;
    }
    ctx->pc = 0x125C1Cu;
    {
        const bool branch_taken_0x125c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C1Cu;
        // 0x125c20: 0xe6230018  swc1        $f3, 0x18($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c1c) {
            ctx->pc = 0x125CDCu;
            goto label_125cdc;
        }
    }
    ctx->pc = 0x125C24u;
label_125c24:
    // 0x125c24: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x125c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_125c28:
    // 0x125c28: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x125c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_125c2c:
    // 0x125c2c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x125c2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_125c30:
    // 0x125c30: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x125c30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_125c34:
    // 0x125c34: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x125c34u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_125c38:
    // 0x125c38: 0xfac40000  sqc2        $vf4, 0x0($s6)
    ctx->pc = 0x125c38u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_125c3c:
    // 0x125c3c: 0xfac50010  sqc2        $vf5, 0x10($s6)
    ctx->pc = 0x125c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_125c40:
    // 0x125c40: 0xfac60020  sqc2        $vf6, 0x20($s6)
    ctx->pc = 0x125c40u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_125c44:
    // 0x125c44: 0xfac70030  sqc2        $vf7, 0x30($s6)
    ctx->pc = 0x125c44u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_125c48:
    // 0x125c48: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x125c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_125c4c:
    // 0x125c4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x125c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_125c50:
    // 0x125c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125c54:
    // 0x125c54: 0xc06ee76  jal         func_1BB9D8
label_125c58:
    if (ctx->pc == 0x125C58u) {
        ctx->pc = 0x125C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C54u;
        // 0x125c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C5Cu;
        goto label_125c5c;
    }
    ctx->pc = 0x125C54u;
    SET_GPR_U32(ctx, 31, 0x125C5Cu);
    ctx->pc = 0x125C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C54u;
    // 0x125c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x125C54u, 0x125C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C5Cu;
label_125c5c:
    // 0x125c5c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x125c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125c60:
    // 0x125c60: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x125c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c64:
    // 0x125c64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x125c64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_125c68:
    // 0x125c68: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x125c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_125c6c:
    // 0x125c6c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x125c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_125c70:
    // 0x125c70: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x125c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_125c74:
    // 0x125c74: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x125c74u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_125c78:
    // 0x125c78: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x125c78u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_125c7c:
    // 0x125c7c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x125c7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_125c80:
    // 0x125c80: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x125c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_125c84:
    // 0x125c84: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x125c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_125c88:
    // 0x125c88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125c8c:
    // 0x125c8c: 0x24c60068  addiu       $a2, $a2, 0x68
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
label_125c90:
    // 0x125c90: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_125c94:
    // 0x125c94: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_125c98:
    // 0x125c98: 0x40f809  jalr        $v0
label_125c9c:
    if (ctx->pc == 0x125C9Cu) {
        ctx->pc = 0x125C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C98u;
        // 0x125c9c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CA0u;
        goto label_125ca0;
    }
    ctx->pc = 0x125C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125CA0u);
        ctx->pc = 0x125C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C98u;
        // 0x125c9c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C98u, 0x125CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125CA0u;
label_125ca0:
    // 0x125ca0: 0x7e800000  sq          $zero, 0x0($s4)
    ctx->pc = 0x125ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 0));
label_125ca4:
    // 0x125ca4: 0x240400cf  addiu       $a0, $zero, 0xCF
    ctx->pc = 0x125ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
label_125ca8:
    // 0x125ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cac:
    // 0x125cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cb0:
    // 0x125cb0: 0xc04c5ac  jal         func_1316B0
label_125cb4:
    if (ctx->pc == 0x125CB4u) {
        ctx->pc = 0x125CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB0u;
        // 0x125cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CB8u;
        goto label_125cb8;
    }
    ctx->pc = 0x125CB0u;
    SET_GPR_U32(ctx, 31, 0x125CB8u);
    ctx->pc = 0x125CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CB0u;
    // 0x125cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x125CB0u, 0x125CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CB8u;
label_125cb8:
    // 0x125cb8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x125cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125cbc:
    // 0x125cbc: 0xae370020  sw          $s7, 0x20($s1)
    ctx->pc = 0x125cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 23));
label_125cc0:
    // 0x125cc0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x125cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_125cc4:
    // 0x125cc4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x125cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_125cc8:
    // 0x125cc8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x125cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125ccc:
    // 0x125ccc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x125cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125cd0:
    // 0x125cd0: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x125cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_125cd4:
    // 0x125cd4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x125cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_125cd8:
    // 0x125cd8: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x125cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_125cdc:
    // 0x125cdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x125cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_125ce0:
    // 0x125ce0: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x125ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_125ce4:
    // 0x125ce4: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
label_125ce8:
    if (ctx->pc == 0x125CE8u) {
        ctx->pc = 0x125CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CE4u;
        // 0x125ce8: 0x8e4301b0  lw          $v1, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CECu;
        goto label_125cec;
    }
    ctx->pc = 0x125CE4u;
    {
        const bool branch_taken_0x125ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125ce4) {
            ctx->pc = 0x125CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125CE4u;
            // 0x125ce8: 0x8e4301b0  lw          $v1, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125bd0;
        }
    }
    ctx->pc = 0x125CECu;
label_125cec:
    // 0x125cec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x125cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125cf0:
    // 0x125cf0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x125cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_125cf4:
    // 0x125cf4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x125cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_125cf8:
    // 0x125cf8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x125cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_125cfc:
    // 0x125cfc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x125cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_125d00:
    // 0x125d00: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x125d00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_125d04:
    // 0x125d04: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x125d04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_125d08:
    // 0x125d08: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x125d08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_125d0c:
    // 0x125d0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x125d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_125d10:
    // 0x125d10: 0xc7b700b0  lwc1        $f23, 0xB0($sp)
    ctx->pc = 0x125d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_125d14:
    // 0x125d14: 0xc7b600a8  lwc1        $f22, 0xA8($sp)
    ctx->pc = 0x125d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_125d18:
    // 0x125d18: 0xc7b500a0  lwc1        $f21, 0xA0($sp)
    ctx->pc = 0x125d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_125d1c:
    // 0x125d1c: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x125d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_125d20:
    // 0x125d20: 0x3e00008  jr          $ra
label_125d24:
    if (ctx->pc == 0x125D24u) {
        ctx->pc = 0x125D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D20u;
        // 0x125d24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D28u;
        goto label_fallthrough_0x125d20;
    }
    ctx->pc = 0x125D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D20u;
        // 0x125d24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125d20:
    ctx->pc = 0x125D28u;
}
