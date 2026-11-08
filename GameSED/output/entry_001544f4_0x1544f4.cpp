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

// Function: entry_001544f4
// Address: 0x1544f4 - 0x154518
void entry_001544f4_0x1544f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001544f4_0x1544f4");
#endif

    ctx->pc = 0x1544f4u;

label_1544f4:
    // 0x1544f4: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x1544f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_1544f8:
    // 0x1544f8: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_1544fc:
    if (ctx->pc == 0x1544FCu) {
        ctx->pc = 0x1544FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544F8u;
        // 0x1544fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154500u;
        goto label_154500;
    }
    ctx->pc = 0x1544F8u;
    {
        const bool branch_taken_0x1544f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544F8u;
        // 0x1544fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544f8) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154500u;
label_154500:
    // 0x154500: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x154500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_154504:
    // 0x154504: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x154504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_154508:
    // 0x154508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x154508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15450c:
    // 0x15450c: 0x8c636d10  lw          $v1, 0x6D10($v1)
    ctx->pc = 0x15450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27920)));
label_154510:
    // 0x154510: 0x600008  jr          $v1
label_154514:
    if (ctx->pc == 0x154514u) {
        ctx->pc = 0x154518u;
        goto label_fallthrough_0x154510;
    }
    ctx->pc = 0x154510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x154510:
    ctx->pc = 0x154518u;
}
