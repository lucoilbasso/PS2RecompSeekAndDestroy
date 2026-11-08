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

// Function: BObjErrName__Fi
// Address: 0x1a1510 - 0x1a1540
void BObjErrName__Fi_0x1a1510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjErrName__Fi_0x1a1510");
#endif

    ctx->pc = 0x1a1510u;

    // 0x1a1510: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a1514: 0x2c84004c  sltiu       $a0, $a0, 0x4C
    ctx->pc = 0x1a1514u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x1a1518: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1518u;
    {
        const bool branch_taken_0x1a1518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1518) {
            ctx->pc = 0x1A151Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1518u;
            // 0x1a151c: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1538u;
            goto label_1a1538;
        }
    }
    ctx->pc = 0x1A1520u;
    // 0x1a1520: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1a1524: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a1528: 0x8c22fa00  lw          $v0, -0x600($at)
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965760)));
    // 0x1a152c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1534u;
    // 0x1a1534: 0x0  nop
    ctx->pc = 0x1a1534u;
    // NOP
label_1a1538:
    // 0x1a1538: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1538u;
        // 0x1a153c: 0x2442d8c8  addiu       $v0, $v0, -0x2738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1540u;
}
