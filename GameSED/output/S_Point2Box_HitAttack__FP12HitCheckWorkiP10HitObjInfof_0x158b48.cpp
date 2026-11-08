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

// Function: S_Point2Box_HitAttack__FP12HitCheckWorkiP10HitObjInfof
// Address: 0x158b48 - 0x158c50
void S_Point2Box_HitAttack__FP12HitCheckWorkiP10HitObjInfof_0x158b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Box_HitAttack__FP12HitCheckWorkiP10HitObjInfof_0x158b48");
#endif

    switch (ctx->pc) {
        case 0x158b48u: goto label_158b48;
        case 0x158b4cu: goto label_158b4c;
        case 0x158b50u: goto label_158b50;
        case 0x158b54u: goto label_158b54;
        case 0x158b58u: goto label_158b58;
        case 0x158b5cu: goto label_158b5c;
        case 0x158b60u: goto label_158b60;
        case 0x158b64u: goto label_158b64;
        case 0x158b68u: goto label_158b68;
        case 0x158b6cu: goto label_158b6c;
        case 0x158b70u: goto label_158b70;
        case 0x158b74u: goto label_158b74;
        case 0x158b78u: goto label_158b78;
        case 0x158b7cu: goto label_158b7c;
        case 0x158b80u: goto label_158b80;
        case 0x158b84u: goto label_158b84;
        case 0x158b88u: goto label_158b88;
        case 0x158b8cu: goto label_158b8c;
        case 0x158b90u: goto label_158b90;
        case 0x158b94u: goto label_158b94;
        case 0x158b98u: goto label_158b98;
        case 0x158b9cu: goto label_158b9c;
        case 0x158ba0u: goto label_158ba0;
        case 0x158ba4u: goto label_158ba4;
        case 0x158ba8u: goto label_158ba8;
        case 0x158bacu: goto label_158bac;
        case 0x158bb0u: goto label_158bb0;
        case 0x158bb4u: goto label_158bb4;
        case 0x158bb8u: goto label_158bb8;
        case 0x158bbcu: goto label_158bbc;
        case 0x158bc0u: goto label_158bc0;
        case 0x158bc4u: goto label_158bc4;
        case 0x158bc8u: goto label_158bc8;
        case 0x158bccu: goto label_158bcc;
        case 0x158bd0u: goto label_158bd0;
        case 0x158bd4u: goto label_158bd4;
        case 0x158bd8u: goto label_158bd8;
        case 0x158bdcu: goto label_158bdc;
        case 0x158be0u: goto label_158be0;
        case 0x158be4u: goto label_158be4;
        case 0x158be8u: goto label_158be8;
        case 0x158becu: goto label_158bec;
        case 0x158bf0u: goto label_158bf0;
        case 0x158bf4u: goto label_158bf4;
        case 0x158bf8u: goto label_158bf8;
        case 0x158bfcu: goto label_158bfc;
        case 0x158c00u: goto label_158c00;
        case 0x158c04u: goto label_158c04;
        case 0x158c08u: goto label_158c08;
        case 0x158c0cu: goto label_158c0c;
        case 0x158c10u: goto label_158c10;
        case 0x158c14u: goto label_158c14;
        case 0x158c18u: goto label_158c18;
        case 0x158c1cu: goto label_158c1c;
        case 0x158c20u: goto label_158c20;
        case 0x158c24u: goto label_158c24;
        case 0x158c28u: goto label_158c28;
        case 0x158c2cu: goto label_158c2c;
        case 0x158c30u: goto label_158c30;
        case 0x158c34u: goto label_158c34;
        case 0x158c38u: goto label_158c38;
        case 0x158c3cu: goto label_158c3c;
        case 0x158c40u: goto label_158c40;
        case 0x158c44u: goto label_158c44;
        case 0x158c48u: goto label_158c48;
        case 0x158c4cu: goto label_158c4c;
        default: break;
    }

    ctx->pc = 0x158b48u;

label_158b48:
    // 0x158b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_158b4c:
    // 0x158b4c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x158b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_158b50:
    // 0x158b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158b54:
    // 0x158b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158b58:
    // 0x158b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x158b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_158b5c:
    // 0x158b5c: 0x252c0030  addiu       $t4, $t1, 0x30
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
label_158b60:
    // 0x158b60: 0x260e0420  addiu       $t6, $s0, 0x420
    ctx->pc = 0x158b60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_158b64:
    // 0x158b64: 0x260f0410  addiu       $t7, $s0, 0x410
    ctx->pc = 0x158b64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
label_158b68:
    // 0x158b68: 0x8e0b0030  lw          $t3, 0x30($s0)
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_158b6c:
    // 0x158b6c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x158b6cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158b70:
    // 0x158b70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x158b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_158b74:
    // 0x158b74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_158b78:
    if (ctx->pc == 0x158B78u) {
        ctx->pc = 0x158B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B74u;
        // 0x158b78: 0x8d6a0160  lw          $t2, 0x160($t3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B7Cu;
        goto label_158b7c;
    }
    ctx->pc = 0x158B74u;
    {
        const bool branch_taken_0x158b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B74u;
        // 0x158b78: 0x8d6a0160  lw          $t2, 0x160($t3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b74) {
            ctx->pc = 0x158B84u;
            goto label_158b84;
        }
    }
    ctx->pc = 0x158B7Cu;
label_158b7c:
    // 0x158b7c: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x158b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
label_158b80:
    // 0x158b80: 0xad620234  sw          $v0, 0x234($t3)
    ctx->pc = 0x158b80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 564), GPR_U32(ctx, 2));
label_158b84:
    // 0x158b84: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_158b88:
    // 0x158b88: 0x2408ff80  addiu       $t0, $zero, -0x80
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_158b8c:
    // 0x158b8c: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x158b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_158b90:
    // 0x158b90: 0x25460030  addiu       $a2, $t2, 0x30
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
label_158b94:
    // 0x158b94: 0x80a30005  lb          $v1, 0x5($a1)
    ctx->pc = 0x158b94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_158b98:
    // 0x158b98: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_158b9c:
    // 0x158b9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x158b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_158ba0:
    // 0x158ba0: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x158ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_158ba4:
    // 0x158ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_158ba8:
    // 0x158ba8: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x158ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158bac:
    // 0x158bac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_158bb0:
    // 0x158bb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_158bb4:
    // 0x158bb4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x158bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_158bb8:
    // 0x158bb8: 0xad4d0000  sw          $t5, 0x0($t2)
    ctx->pc = 0x158bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
label_158bbc:
    // 0x158bbc: 0xad430020  sw          $v1, 0x20($t2)
    ctx->pc = 0x158bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 3));
label_158bc0:
    // 0x158bc0: 0xad470090  sw          $a3, 0x90($t2)
    ctx->pc = 0x158bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 7));
label_158bc4:
    // 0x158bc4: 0xa1480020  sb          $t0, 0x20($t2)
    ctx->pc = 0x158bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 32), (uint8_t)GPR_U32(ctx, 8));
label_158bc8:
    // 0x158bc8: 0xd9840000  lqc2        $vf4, 0x0($t4)
    ctx->pc = 0x158bc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
label_158bcc:
    // 0x158bcc: 0xd9850010  lqc2        $vf5, 0x10($t4)
    ctx->pc = 0x158bccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_158bd0:
    // 0x158bd0: 0xd9860020  lqc2        $vf6, 0x20($t4)
    ctx->pc = 0x158bd0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 32)));
label_158bd4:
    // 0x158bd4: 0xd9870030  lqc2        $vf7, 0x30($t4)
    ctx->pc = 0x158bd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
label_158bd8:
    // 0x158bd8: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x158bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_158bdc:
    // 0x158bdc: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x158bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_158be0:
    // 0x158be0: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x158be0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_158be4:
    // 0x158be4: 0xf8c70030  sqc2        $vf7, 0x30($a2)
    ctx->pc = 0x158be4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_158be8:
    // 0x158be8: 0x25430080  addiu       $v1, $t2, 0x80
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
label_158bec:
    // 0x158bec: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x158becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_158bf0:
    // 0x158bf0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x158bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_158bf4:
    // 0x158bf4: 0xe5400098  swc1        $f0, 0x98($t2)
    ctx->pc = 0x158bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 152), bits); }
label_158bf8:
    // 0x158bf8: 0x25430070  addiu       $v1, $t2, 0x70
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
label_158bfc:
    // 0x158bfc: 0x79e20000  lq          $v0, 0x0($t7)
    ctx->pc = 0x158bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 15), 0)));
label_158c00:
    // 0x158c00: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x158c00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_158c04:
    // 0x158c04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x158c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158c08:
    // 0x158c08: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x158c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
label_158c0c:
    // 0x158c0c: 0xad44009c  sw          $a0, 0x9C($t2)
    ctx->pc = 0x158c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 156), GPR_U32(ctx, 4));
label_158c10:
    // 0x158c10: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_158c14:
    // 0x158c14: 0xad490094  sw          $t1, 0x94($t2)
    ctx->pc = 0x158c14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 148), GPR_U32(ctx, 9));
label_158c18:
    // 0x158c18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x158c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_158c1c:
    // 0x158c1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_158c20:
    // 0x158c20: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x158c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_158c24:
    // 0x158c24: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_158c28:
    // 0x158c28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158c2c:
    // 0x158c2c: 0x60f809  jalr        $v1
label_158c30:
    if (ctx->pc == 0x158C30u) {
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C2Cu;
        // 0x158c30: 0xe54c000c  swc1        $f12, 0xC($t2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C34u;
        goto label_158c34;
    }
    ctx->pc = 0x158C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x158C34u);
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C2Cu;
        // 0x158c30: 0xe54c000c  swc1        $f12, 0xC($t2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C2Cu, 0x158C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158C34u;
label_158c34:
    // 0x158c34: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x158c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_158c38:
    // 0x158c38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x158c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158c3c:
    // 0x158c3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_158c40:
    // 0x158c40: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x158c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_158c44:
    // 0x158c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158c48:
    // 0x158c48: 0x3e00008  jr          $ra
label_158c4c:
    if (ctx->pc == 0x158C4Cu) {
        ctx->pc = 0x158C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C48u;
        // 0x158c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C50u;
        goto label_fallthrough_0x158c48;
    }
    ctx->pc = 0x158C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C48u;
        // 0x158c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158c48:
    ctx->pc = 0x158C50u;
}
