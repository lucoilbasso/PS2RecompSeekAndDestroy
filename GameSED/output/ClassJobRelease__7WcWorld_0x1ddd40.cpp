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

// Function: ClassJobRelease__7WcWorld
// Address: 0x1ddd40 - 0x1ddd80
void ClassJobRelease__7WcWorld_0x1ddd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRelease__7WcWorld_0x1ddd40");
#endif

    switch (ctx->pc) {
        case 0x1ddd60u: goto label_1ddd60;
        case 0x1ddd70u: goto label_1ddd70;
        default: break;
    }

    ctx->pc = 0x1ddd40u;

    // 0x1ddd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddd44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddd48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd4c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1ddd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1ddd50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ddd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ddd58: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1DDD58u;
    SET_GPR_U32(ctx, 31, 0x1DDD60u);
    ctx->pc = 0x1DDD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD58u;
    // 0x1ddd5c: 0x248415f8  addiu       $a0, $a0, 0x15F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1DDD58u, 0x1DDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD60u;
label_1ddd60:
    // 0x1ddd60: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1ddd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1ddd64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd68: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1DDD68u;
    SET_GPR_U32(ctx, 31, 0x1DDD70u);
    ctx->pc = 0x1DDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD68u;
    // 0x1ddd6c: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1DDD68u, 0x1DDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD70u;
label_1ddd70:
    // 0x1ddd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddd74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ddd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddd78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD78u;
        // 0x1ddd7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD80u;
}
