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

// Function: ClassJobRelease__7ApcTank
// Address: 0x1d9a20 - 0x1d9a60
void ClassJobRelease__7ApcTank_0x1d9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRelease__7ApcTank_0x1d9a20");
#endif

    switch (ctx->pc) {
        case 0x1d9a40u: goto label_1d9a40;
        case 0x1d9a50u: goto label_1d9a50;
        default: break;
    }

    ctx->pc = 0x1d9a20u;

    // 0x1d9a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a2c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1d9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1d9a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9a38: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1D9A38u;
    SET_GPR_U32(ctx, 31, 0x1D9A40u);
    ctx->pc = 0x1D9A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A38u;
    // 0x1d9a3c: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1D9A38u, 0x1D9A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A40u;
label_1d9a40:
    // 0x1d9a40: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1d9a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1d9a44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a48: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1D9A48u;
    SET_GPR_U32(ctx, 31, 0x1D9A50u);
    ctx->pc = 0x1D9A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A48u;
    // 0x1d9a4c: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1D9A48u, 0x1D9A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A50u;
label_1d9a50:
    // 0x1d9a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9a54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A58u;
        // 0x1d9a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9A60u;
}
