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

// Function: kill
// Address: 0x1afc38 - 0x1afc60
void kill_0x1afc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kill_0x1afc38");
#endif

    switch (ctx->pc) {
        case 0x1afc50u: goto label_1afc50;
        default: break;
    }

    ctx->pc = 0x1afc38u;

    // 0x1afc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afc3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afc40: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC40u;
    {
        const bool branch_taken_0x1afc40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC40u;
        // 0x1afc44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc40) {
            ctx->pc = 0x1AFC50u;
            goto label_1afc50;
        }
    }
    ctx->pc = 0x1AFC48u;
    // 0x1afc48: 0xc06dc84  jal         func_1B7210
    ctx->pc = 0x1AFC48u;
    SET_GPR_U32(ctx, 31, 0x1AFC50u);
    ctx->pc = 0x1AFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC48u;
    // 0x1afc4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7210u, 0x1AFC48u, 0x1AFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC50u;
label_1afc50:
    // 0x1afc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afc54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc58: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC58u;
        // 0x1afc5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFC60u;
}
