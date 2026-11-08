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

// Function: ApCameraResetReffer__FP7WcActor
// Address: 0x141e00 - 0x141e50
void ApCameraResetReffer__FP7WcActor_0x141e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraResetReffer__FP7WcActor_0x141e00");
#endif

    switch (ctx->pc) {
        case 0x141e1cu: goto label_141e1c;
        default: break;
    }

    ctx->pc = 0x141e00u;

    // 0x141e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141e04: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x141e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x141e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141e0c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141e10: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141e14: 0xc061a46  jal         func_186918
    ctx->pc = 0x141E14u;
    SET_GPR_U32(ctx, 31, 0x141E1Cu);
    ctx->pc = 0x141E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E14u;
    // 0x141e18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141E14u, 0x141E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E1Cu;
label_141e1c:
    // 0x141e1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e20: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141E20u;
    {
        const bool branch_taken_0x141e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E20u;
        // 0x141e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e20) {
            ctx->pc = 0x141E3Cu;
            goto label_141e3c;
        }
    }
    ctx->pc = 0x141E28u;
    // 0x141e28: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x141e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x141e2c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141e30: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x141e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x141e34: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x141E34u;
    {
        const bool branch_taken_0x141e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141e34) {
            ctx->pc = 0x141E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141E34u;
            // 0x141e38: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141E3Cu;
            goto label_141e3c;
        }
    }
    ctx->pc = 0x141E3Cu;
label_141e3c:
    // 0x141e3c: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x141E3Cu;
    {
        const bool branch_taken_0x141e3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e3c) {
            ctx->pc = 0x141E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141E3Cu;
            // 0x141e40: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141E44u;
            goto label_141e44;
        }
    }
    ctx->pc = 0x141E44u;
label_141e44:
    // 0x141e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141e48: 0x3e00008  jr          $ra
    ctx->pc = 0x141E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E48u;
        // 0x141e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141E50u;
}
