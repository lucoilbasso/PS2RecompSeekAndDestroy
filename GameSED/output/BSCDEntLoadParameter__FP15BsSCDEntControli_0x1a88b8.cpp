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

// Function: BSCDEntLoadParameter__FP15BsSCDEntControli
// Address: 0x1a88b8 - 0x1a88f0
void BSCDEntLoadParameter__FP15BsSCDEntControli_0x1a88b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntLoadParameter__FP15BsSCDEntControli_0x1a88b8");
#endif

    switch (ctx->pc) {
        case 0x1a88e0u: goto label_1a88e0;
        default: break;
    }

    ctx->pc = 0x1a88b8u;

    // 0x1a88b8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a88bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a88bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a88c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a88c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a88c8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a88c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a88cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a88ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a88d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A88D0u;
    {
        const bool branch_taken_0x1a88d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88D0u;
        // 0x1a88d4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88d0) {
            ctx->pc = 0x1A88E4u;
            goto label_1a88e4;
        }
    }
    ctx->pc = 0x1A88D8u;
    // 0x1a88d8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A88D8u;
    SET_GPR_U32(ctx, 31, 0x1A88E0u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A88D8u, 0x1A88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88E0u;
label_1a88e0:
    // 0x1a88e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a88e4:
    // 0x1a88e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a88e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a88e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88E8u;
        // 0x1a88ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88F0u;
}
