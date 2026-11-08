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

// Function: ApCameraChangeAngleUDLock__FP7WcActori
// Address: 0x141fb0 - 0x14201c
void ApCameraChangeAngleUDLock__FP7WcActori_0x141fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraChangeAngleUDLock__FP7WcActori_0x141fb0");
#endif

    switch (ctx->pc) {
        case 0x141fd4u: goto label_141fd4;
        default: break;
    }

    ctx->pc = 0x141fb0u;

    // 0x141fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141fb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x141fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141fbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141fc0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x141fc4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141fc8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141fcc: 0xc061a46  jal         func_186918
    ctx->pc = 0x141FCCu;
    SET_GPR_U32(ctx, 31, 0x141FD4u);
    ctx->pc = 0x141FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141FCCu;
    // 0x141fd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141FCCu, 0x141FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FD4u;
label_141fd4:
    // 0x141fd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141fd8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141FD8u;
    {
        const bool branch_taken_0x141fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FD8u;
        // 0x141fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fd8) {
            ctx->pc = 0x141FF4u;
            goto label_141ff4;
        }
    }
    ctx->pc = 0x141FE0u;
    // 0x141fe0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x141fe4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141fe8: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x141fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x141fec: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x141FECu;
    {
        const bool branch_taken_0x141fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141fec) {
            ctx->pc = 0x141FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141FECu;
            // 0x141ff0: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141FF4u;
            goto label_141ff4;
        }
    }
    ctx->pc = 0x141FF4u;
label_141ff4:
    // 0x141ff4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141FF4u;
    {
        const bool branch_taken_0x141ff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ff4) {
            ctx->pc = 0x141FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141FF4u;
            // 0x141ff8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142010u;
            goto label_142010;
        }
    }
    ctx->pc = 0x141FFCu;
    // 0x141ffc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x142000: 0xacb00130  sw          $s0, 0x130($a1)
    ctx->pc = 0x142000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 16));
    // 0x142004: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x142004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x142008: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x142008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x14200c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14200cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142010:
    // 0x142010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x142010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142014: 0x3e00008  jr          $ra
    ctx->pc = 0x142014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142014u;
        // 0x142018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14201Cu;
}
