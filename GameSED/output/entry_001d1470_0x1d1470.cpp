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

// Function: entry_001d1470
// Address: 0x1d1470 - 0x1d1490
void entry_001d1470_0x1d1470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1470_0x1d1470");
#endif

    ctx->pc = 0x1d1470u;

label_1d1470:
    // 0x1d1470: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x1d1470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_1d1474:
    // 0x1d1474: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
label_1d1478:
    if (ctx->pc == 0x1D1478u) {
        ctx->pc = 0x1D1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1474u;
        // 0x1d1478: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D147Cu;
        goto label_1d147c;
    }
    ctx->pc = 0x1D1474u;
    {
        const bool branch_taken_0x1d1474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1474u;
        // 0x1d1478: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1474) {
            ctx->pc = 0x1D1B40u;
            return;
        }
    }
    ctx->pc = 0x1D147Cu;
label_1d147c:
    // 0x1d147c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1d147cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1d1480:
    // 0x1d1480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d1484:
    // 0x1d1484: 0x8c63c460  lw          $v1, -0x3BA0($v1)
    ctx->pc = 0x1d1484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952032)));
label_1d1488:
    // 0x1d1488: 0x600008  jr          $v1
label_1d148c:
    if (ctx->pc == 0x1D148Cu) {
        ctx->pc = 0x1D1490u;
        goto label_fallthrough_0x1d1488;
    }
    ctx->pc = 0x1D1488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1d1488:
    ctx->pc = 0x1D1490u;
}
