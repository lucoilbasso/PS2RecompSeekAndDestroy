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

// Function: SHitpolyCheckClipXYZ_C__FP13WHitpolyParamP9FVector32fb
// Address: 0x182e70 - 0x182f28
void SHitpolyCheckClipXYZ_C__FP13WHitpolyParamP9FVector32fb_0x182e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SHitpolyCheckClipXYZ_C__FP13WHitpolyParamP9FVector32fb_0x182e70");
#endif

    switch (ctx->pc) {
        case 0x182ef0u: goto label_182ef0;
        default: break;
    }

    ctx->pc = 0x182e70u;

    // 0x182e70: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x182e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e74: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x182e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182e78: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182e7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e80: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x182E80u;
    {
        const bool branch_taken_0x182e80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E80u;
        // 0x182e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e80) {
            ctx->pc = 0x182EF0u;
            goto label_182ef0;
        }
    }
    ctx->pc = 0x182E88u;
    // 0x182e88: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x182e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e8c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182e90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182e90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e94: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x182E94u;
    {
        const bool branch_taken_0x182e94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182e94) {
            ctx->pc = 0x182F20u;
            goto label_182f20;
        }
    }
    ctx->pc = 0x182E9Cu;
    // 0x182e9c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x182e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ea0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x182ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182ea4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182ea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182eac: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x182EACu;
    {
        const bool branch_taken_0x182eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182eac) {
            ctx->pc = 0x182F20u;
            goto label_182f20;
        }
    }
    ctx->pc = 0x182EB4u;
    // 0x182eb4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x182eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182eb8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182ebc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ec0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x182EC0u;
    {
        const bool branch_taken_0x182ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ec0) {
            ctx->pc = 0x182F20u;
            goto label_182f20;
        }
    }
    ctx->pc = 0x182EC8u;
    // 0x182ec8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x182EC8u;
    {
        const bool branch_taken_0x182ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x182ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EC8u;
        // 0x182ecc: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ec8) {
            ctx->pc = 0x182EF8u;
            goto label_182ef8;
        }
    }
    ctx->pc = 0x182ED0u;
    // 0x182ed0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x182ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ed8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x182ED8u;
    {
        const bool branch_taken_0x182ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ed8) {
            ctx->pc = 0x182F20u;
            goto label_182f20;
        }
    }
    ctx->pc = 0x182EE0u;
    // 0x182ee0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x182ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ee4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ee8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182EE8u;
    {
        const bool branch_taken_0x182ee8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ee8) {
            ctx->pc = 0x182EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182EE8u;
            // 0x182eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182EF0u;
            goto label_182ef0;
        }
    }
    ctx->pc = 0x182EF0u;
label_182ef0:
    // 0x182ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x182EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182EF8u;
label_182ef8:
    // 0x182ef8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x182ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182efc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182f04: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x182F04u;
    {
        const bool branch_taken_0x182f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F04u;
        // 0x182f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f04) {
            ctx->pc = 0x182EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182ef0;
        }
    }
    ctx->pc = 0x182F0Cu;
    // 0x182f0c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x182f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182f10: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182f14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182f18: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
    ctx->pc = 0x182F18u;
    {
        const bool branch_taken_0x182f18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182f18) {
            ctx->pc = 0x182F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182F18u;
            // 0x182f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182ef0;
        }
    }
    ctx->pc = 0x182F20u;
label_182f20:
    // 0x182f20: 0x3e00008  jr          $ra
    ctx->pc = 0x182F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182F28u;
}
