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

// Function: caseD_0
// Address: 0x163b94 - 0x163c04
void caseD_0_0x163b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x163b94");
#endif

    switch (ctx->pc) {
        case 0x163bb0u: goto label_163bb0;
        case 0x163be0u: goto label_163be0;
        case 0x163bfcu: goto label_163bfc;
        default: break;
    }

    ctx->pc = 0x163b94u;

    // 0x163b94: 0x12c00034  beqz        $s6, . + 4 + (0x34 << 2)
    ctx->pc = 0x163B94u;
    {
        const bool branch_taken_0x163b94 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B94u;
        // 0x163b98: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b94) {
            ctx->pc = 0x163C68u;
            return;
        }
    }
    ctx->pc = 0x163B9Cu;
    // 0x163b9c: 0x8e5101f0  lw          $s1, 0x1F0($s2)
    ctx->pc = 0x163b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x163ba0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x163ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x163ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ba8: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x163BA8u;
    SET_GPR_U32(ctx, 31, 0x163BB0u);
    ctx->pc = 0x163BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BA8u;
    // 0x163bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x163BA8u, 0x163BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BB0u;
label_163bb0:
    // 0x163bb0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x163bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163bb4: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x163bb4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x163bb8: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x163bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163bbc: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x163bbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x163bc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x163bc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163bc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163bc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x163bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x163bcc: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x163bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163bd0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x163BD0u;
    {
        const bool branch_taken_0x163bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163bd0) {
            ctx->pc = 0x163BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BD0u;
            // 0x163bd4: 0x8e4201f4  lw          $v0, 0x1F4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163C04u;
            return;
        }
    }
    ctx->pc = 0x163BD8u;
    // 0x163bd8: 0xc067a02  jal         func_19E808
    ctx->pc = 0x163BD8u;
    SET_GPR_U32(ctx, 31, 0x163BE0u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x163BD8u, 0x163BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BE0u;
label_163be0:
    // 0x163be0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x163be4: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x163be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x163be8: 0x8e460274  lw          $a2, 0x274($s2)
    ctx->pc = 0x163be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x163bec: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x163becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x163bf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163bf4: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163BF4u;
    SET_GPR_U32(ctx, 31, 0x163BFCu);
    ctx->pc = 0x163BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BF4u;
    // 0x163bf8: 0x8c640034  lw          $a0, 0x34($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163BF4u, 0x163BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BFCu;
label_163bfc:
    // 0x163bfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x163bfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c00: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    ctx->pc = 0x163c04u;
}
