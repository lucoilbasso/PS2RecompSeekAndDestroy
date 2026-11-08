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

// Function: WModelCalcModelPackageRange__FP13WModelPackageP15_wModelCalcInfo
// Address: 0x17ef18 - 0x17eff0
void WModelCalcModelPackageRange__FP13WModelPackageP15_wModelCalcInfo_0x17ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelCalcModelPackageRange__FP13WModelPackageP15_wModelCalcInfo_0x17ef18");
#endif

    switch (ctx->pc) {
        case 0x17ef40u: goto label_17ef40;
        default: break;
    }

    ctx->pc = 0x17ef18u;

    // 0x17ef18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17ef1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ef1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef20: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x17ef20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17ef24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ef28: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x17ef28u;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x17ef2c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x17ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17ef30: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x17ef30u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x17ef34: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x17ef34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x17ef38: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17EF38u;
    {
        const bool branch_taken_0x17ef38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF38u;
        // 0x17ef3c: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef38) {
            ctx->pc = 0x17EFA4u;
            goto label_17efa4;
        }
    }
    ctx->pc = 0x17EF40u;
label_17ef40:
    // 0x17ef40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ef44: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17ef44u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17ef48: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x17ef48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF4Cu;
    {
        const bool branch_taken_0x17ef4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef4c) {
            ctx->pc = 0x17EF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF4Cu;
            // 0x17ef50: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF54u;
            goto label_17ef54;
        }
    }
    ctx->pc = 0x17EF54u;
label_17ef54:
    // 0x17ef54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ef58: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17ef58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF5Cu;
    {
        const bool branch_taken_0x17ef5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef5c) {
            ctx->pc = 0x17EF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF5Cu;
            // 0x17ef60: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF64u;
            goto label_17ef64;
        }
    }
    ctx->pc = 0x17EF64u;
label_17ef64:
    // 0x17ef64: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x17ef64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF68u;
    {
        const bool branch_taken_0x17ef68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef68) {
            ctx->pc = 0x17EF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF68u;
            // 0x17ef6c: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF70u;
            goto label_17ef70;
        }
    }
    ctx->pc = 0x17EF70u;
label_17ef70:
    // 0x17ef70: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17ef70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17ef74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ef74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF78u;
    {
        const bool branch_taken_0x17ef78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef78) {
            ctx->pc = 0x17EF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF78u;
            // 0x17ef7c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF80u;
            goto label_17ef80;
        }
    }
    ctx->pc = 0x17EF80u;
label_17ef80:
    // 0x17ef80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ef84: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17ef84u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17ef88: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x17ef88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF8Cu;
    {
        const bool branch_taken_0x17ef8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef8c) {
            ctx->pc = 0x17EF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF8Cu;
            // 0x17ef90: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF94u;
            goto label_17ef94;
        }
    }
    ctx->pc = 0x17EF94u;
label_17ef94:
    // 0x17ef94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17ef98: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x17ef98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17ef9c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17EF9Cu;
    {
        const bool branch_taken_0x17ef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF9Cu;
        // 0x17efa0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef9c) {
            ctx->pc = 0x17EF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ef40;
        }
    }
    ctx->pc = 0x17EFA4u;
label_17efa4:
    // 0x17efa4: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x17efa4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x17efa8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x17efa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x17efac: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x17efacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x17efb0: 0x46030828  max.s       $f0, $f1, $f3
    ctx->pc = 0x17efb0u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[3]);
    // 0x17efb4: 0x46002028  max.s       $f0, $f4, $f0
    ctx->pc = 0x17efb4u;
    ctx->f[0] = std::max(ctx->f[4], ctx->f[0]);
    // 0x17efb8: 0xc7818550  lwc1        $f1, -0x7AB0($gp)
    ctx->pc = 0x17efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17efbc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x17efbcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x17efc0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17efc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17efc4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x17efc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17efc8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x17EFC8u;
    {
        const bool branch_taken_0x17efc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFC8u;
        // 0x17efcc: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efc8) {
            ctx->pc = 0x17EFE0u;
            goto label_17efe0;
        }
    }
    ctx->pc = 0x17EFD0u;
    // 0x17efd0: 0x46032028  max.s       $f0, $f4, $f3
    ctx->pc = 0x17efd0u;
    ctx->f[0] = std::max(ctx->f[4], ctx->f[3]);
    // 0x17efd4: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x17efd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x17efd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17EFD8u;
    {
        const bool branch_taken_0x17efd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFD8u;
        // 0x17efdc: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efd8) {
            ctx->pc = 0x17EFE8u;
            goto label_17efe8;
        }
    }
    ctx->pc = 0x17EFE0u;
label_17efe0:
    // 0x17efe0: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x17efe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x17efe4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x17efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_17efe8:
    // 0x17efe8: 0x3e00008  jr          $ra
    ctx->pc = 0x17EFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFE8u;
        // 0x17efec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EFF0u;
}
