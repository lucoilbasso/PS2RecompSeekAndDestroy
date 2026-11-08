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

// Function: EffectCompulse__FP20ST_ParticleGenerator
// Address: 0x131b18 - 0x131c4c
void EffectCompulse__FP20ST_ParticleGenerator_0x131b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectCompulse__FP20ST_ParticleGenerator_0x131b18");
#endif

    switch (ctx->pc) {
        case 0x131b50u: goto label_131b50;
        case 0x131b90u: goto label_131b90;
        case 0x131ba4u: goto label_131ba4;
        case 0x131bf4u: goto label_131bf4;
        default: break;
    }

    ctx->pc = 0x131b18u;

    // 0x131b18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131b1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x131b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x131b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b24: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x131b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x131b28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x131b28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x131b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x131b30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x131b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x131b34: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x131b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x131b38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x131b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x131b3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x131b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x131b40: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x131b40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x131b44: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x131b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x131b48: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x131B48u;
    {
        const bool branch_taken_0x131b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B48u;
        // 0x131b4c: 0x8e30013c  lw          $s0, 0x13C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b48) {
            ctx->pc = 0x131C20u;
            goto label_131c20;
        }
    }
    ctx->pc = 0x131B50u;
label_131b50:
    // 0x131b50: 0x52000030  beql        $s0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x131B50u;
    {
        const bool branch_taken_0x131b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131b50) {
            ctx->pc = 0x131B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131B50u;
            // 0x131b54: 0xae340134  sw          $s4, 0x134($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C14u;
            goto label_131c14;
        }
    }
    ctx->pc = 0x131B58u;
    // 0x131b58: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x131b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x131b5c: 0x5451002d  bnel        $v0, $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x131B5Cu;
    {
        const bool branch_taken_0x131b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x131b5c) {
            ctx->pc = 0x131B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131B5Cu;
            // 0x131b60: 0xae340134  sw          $s4, 0x134($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C14u;
            goto label_131c14;
        }
    }
    ctx->pc = 0x131B64u;
    // 0x131b64: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x131b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x131b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b6c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x131B6Cu;
    {
        const bool branch_taken_0x131b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B6Cu;
        // 0x131b70: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b6c) {
            ctx->pc = 0x131C0Cu;
            goto label_131c0c;
        }
    }
    ctx->pc = 0x131B74u;
    // 0x131b74: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x131b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x131b78: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x131b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x131b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131b80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x131b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x131b84: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x131b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b88: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x131b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131b8c: 0x0  nop
    ctx->pc = 0x131b8cu;
    // NOP
label_131b90:
    // 0x131b90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b94: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x131b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x131b98: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x131b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x131b9c: 0xc047898  jal         func_11E260
    ctx->pc = 0x131B9Cu;
    SET_GPR_U32(ctx, 31, 0x131BA4u);
    ctx->pc = 0x131BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B9Cu;
    // 0x131ba0: 0xae0500e4  sw          $a1, 0xE4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x131B9Cu, 0x131BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BA4u;
label_131ba4:
    // 0x131ba4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x131ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x131ba8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x131ba8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131bac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x131BACu;
    {
        const bool branch_taken_0x131bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BACu;
        // 0x131bb0: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bac) {
            ctx->pc = 0x131BD0u;
            goto label_131bd0;
        }
    }
    ctx->pc = 0x131BB4u;
    // 0x131bb4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x131bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x131bb8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x131BB8u;
    {
        const bool branch_taken_0x131bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bb8) {
            ctx->pc = 0x131BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131BB8u;
            // 0x131bbc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131BD4u;
            goto label_131bd4;
        }
    }
    ctx->pc = 0x131BC0u;
    // 0x131bc0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x131bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x131bc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131BC4u;
    {
        const bool branch_taken_0x131bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BC4u;
        // 0x131bc8: 0xe61400ec  swc1        $f20, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bc4) {
            ctx->pc = 0x131BD8u;
            goto label_131bd8;
        }
    }
    ctx->pc = 0x131BCCu;
    // 0x131bcc: 0x0  nop
    ctx->pc = 0x131bccu;
    // NOP
label_131bd0:
    // 0x131bd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x131bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_131bd4:
    // 0x131bd4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x131bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_131bd8:
    // 0x131bd8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131bdc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x131bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131be4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x131be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x131be8: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x131be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x131bec: 0xc048464  jal         func_121190
    ctx->pc = 0x131BECu;
    SET_GPR_U32(ctx, 31, 0x131BF4u);
    ctx->pc = 0x131BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BECu;
    // 0x131bf0: 0x62a00b  movn        $s4, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121190u, 0x131BECu, 0x131BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BF4u;
label_131bf4:
    // 0x131bf4: 0x2a2900a  movz        $s2, $s5, $v0
    ctx->pc = 0x131bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 21));
    // 0x131bf8: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x131BF8u;
    {
        const bool branch_taken_0x131bf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x131bf8) {
            ctx->pc = 0x131BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131BF8u;
            // 0x131bfc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C10u;
            goto label_131c10;
        }
    }
    ctx->pc = 0x131C00u;
    // 0x131c00: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131c04: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x131C04u;
    {
        const bool branch_taken_0x131c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131c04) {
            ctx->pc = 0x131C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131C04u;
            // 0x131c08: 0x8e0500e8  lw          $a1, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131b90;
        }
    }
    ctx->pc = 0x131C0Cu;
label_131c0c:
    // 0x131c0c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x131c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_131c10:
    // 0x131c10: 0xae340134  sw          $s4, 0x134($s1)
    ctx->pc = 0x131c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 20));
label_131c14:
    // 0x131c14: 0x8e310054  lw          $s1, 0x54($s1)
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x131c18: 0x1620ffcd  bnez        $s1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x131C18u;
    {
        const bool branch_taken_0x131c18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x131c18) {
            ctx->pc = 0x131B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131b50;
        }
    }
    ctx->pc = 0x131C20u;
label_131c20:
    // 0x131c20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x131c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x131c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131c28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x131c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x131c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x131c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c34: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x131c34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131c38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x131c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131c3c: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x131c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131c40: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x131c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131c44: 0x3e00008  jr          $ra
    ctx->pc = 0x131C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C44u;
        // 0x131c48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C4Cu;
}
