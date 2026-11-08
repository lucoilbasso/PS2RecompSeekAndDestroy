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

// Function: SHitpolyTestClipXYZ__FP13WHitpolyParamP9FVector32fb
// Address: 0x182aa0 - 0x182b60
void SHitpolyTestClipXYZ__FP13WHitpolyParamP9FVector32fb_0x182aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SHitpolyTestClipXYZ__FP13WHitpolyParamP9FVector32fb_0x182aa0");
#endif

    ctx->pc = 0x182aa0u;

    // 0x182aa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x182aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182aa4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x182aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182aa8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182aa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182aac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ab0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x182AB0u;
    {
        const bool branch_taken_0x182ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x182AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AB0u;
        // 0x182ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ab0) {
            ctx->pc = 0x182ABCu;
            goto label_182abc;
        }
    }
    ctx->pc = 0x182AB8u;
    // 0x182ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182abc:
    // 0x182abc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x182abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ac0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182ac4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ac8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182AC8u;
    {
        const bool branch_taken_0x182ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ac8) {
            ctx->pc = 0x182ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182AC8u;
            // 0x182acc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182AD0u;
            goto label_182ad0;
        }
    }
    ctx->pc = 0x182AD0u;
label_182ad0:
    // 0x182ad0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x182ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ad4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x182ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182ad8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182adc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ae0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182AE0u;
    {
        const bool branch_taken_0x182ae0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ae0) {
            ctx->pc = 0x182AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182AE0u;
            // 0x182ae4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182AE8u;
            goto label_182ae8;
        }
    }
    ctx->pc = 0x182AE8u;
label_182ae8:
    // 0x182ae8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x182ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182aec: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182af0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182af4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182AF4u;
    {
        const bool branch_taken_0x182af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182af4) {
            ctx->pc = 0x182AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182AF4u;
            // 0x182af8: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182AFCu;
            goto label_182afc;
        }
    }
    ctx->pc = 0x182AFCu;
label_182afc:
    // 0x182afc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x182AFCu;
    {
        const bool branch_taken_0x182afc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AFCu;
        // 0x182b00: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182afc) {
            ctx->pc = 0x182B30u;
            goto label_182b30;
        }
    }
    ctx->pc = 0x182B04u;
    // 0x182b04: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x182b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182b08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182b0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182B0Cu;
    {
        const bool branch_taken_0x182b0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b0c) {
            ctx->pc = 0x182B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182B0Cu;
            // 0x182b10: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182B14u;
            goto label_182b14;
        }
    }
    ctx->pc = 0x182B14u;
label_182b14:
    // 0x182b14: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x182b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182b18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182b1c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x182B1Cu;
    {
        const bool branch_taken_0x182b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b1c) {
            ctx->pc = 0x182B58u;
            goto label_182b58;
        }
    }
    ctx->pc = 0x182B24u;
    // 0x182b24: 0x3e00008  jr          $ra
    ctx->pc = 0x182B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B24u;
        // 0x182b28: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B2Cu;
    // 0x182b2c: 0x0  nop
    ctx->pc = 0x182b2cu;
    // NOP
label_182b30:
    // 0x182b30: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x182b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182b34: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182b38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182b3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182B3Cu;
    {
        const bool branch_taken_0x182b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b3c) {
            ctx->pc = 0x182B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182B3Cu;
            // 0x182b40: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182B44u;
            goto label_182b44;
        }
    }
    ctx->pc = 0x182B44u;
label_182b44:
    // 0x182b44: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x182b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182b48: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182b4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182b4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182b50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182B50u;
    {
        const bool branch_taken_0x182b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b50) {
            ctx->pc = 0x182B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182B50u;
            // 0x182b54: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182B58u;
            goto label_182b58;
        }
    }
    ctx->pc = 0x182B58u;
label_182b58:
    // 0x182b58: 0x3e00008  jr          $ra
    ctx->pc = 0x182B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B60u;
}
