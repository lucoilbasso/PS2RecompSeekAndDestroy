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

// Function: ClassJobRegist__7WcWorld
// Address: 0x1ddd00 - 0x1ddd40
void ClassJobRegist__7WcWorld_0x1ddd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRegist__7WcWorld_0x1ddd00");
#endif

    switch (ctx->pc) {
        case 0x1ddd20u: goto label_1ddd20;
        case 0x1ddd30u: goto label_1ddd30;
        default: break;
    }

    ctx->pc = 0x1ddd00u;

    // 0x1ddd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddd08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd0c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1ddd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1ddd10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ddd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ddd18: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DDD18u;
    SET_GPR_U32(ctx, 31, 0x1DDD20u);
    ctx->pc = 0x1DDD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD18u;
    // 0x1ddd1c: 0x248415f8  addiu       $a0, $a0, 0x15F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DDD18u, 0x1DDD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD20u;
label_1ddd20:
    // 0x1ddd20: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1ddd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1ddd24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd28: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DDD28u;
    SET_GPR_U32(ctx, 31, 0x1DDD30u);
    ctx->pc = 0x1DDD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD28u;
    // 0x1ddd2c: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DDD28u, 0x1DDD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD30u;
label_1ddd30:
    // 0x1ddd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddd34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ddd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddd38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD38u;
        // 0x1ddd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD40u;
}
