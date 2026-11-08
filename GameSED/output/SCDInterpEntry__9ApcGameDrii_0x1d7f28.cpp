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

// Function: SCDInterpEntry__9ApcGameDrii
// Address: 0x1d7f28 - 0x1d7f50
void SCDInterpEntry__9ApcGameDrii_0x1d7f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SCDInterpEntry__9ApcGameDrii_0x1d7f28");
#endif

    switch (ctx->pc) {
        case 0x1d7f44u: goto label_1d7f44;
        default: break;
    }

    ctx->pc = 0x1d7f28u;

    // 0x1d7f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7f30: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1d7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1d7f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7F34u;
    {
        const bool branch_taken_0x1d7f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F34u;
        // 0x1d7f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f34) {
            ctx->pc = 0x1D7F44u;
            goto label_1d7f44;
        }
    }
    ctx->pc = 0x1D7F3Cu;
    // 0x1d7f3c: 0xc060e56  jal         func_183958
    ctx->pc = 0x1D7F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F44u);
    ctx->pc = 0x1D7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F3Cu;
    // 0x1d7f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x1D7F3Cu, 0x1D7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F44u;
label_1d7f44:
    // 0x1d7f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F48u;
        // 0x1d7f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F50u;
}
