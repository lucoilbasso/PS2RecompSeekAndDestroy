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

// Function: entry_0017d774
// Address: 0x17d774 - 0x17d780
void entry_0017d774_0x17d774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d774_0x17d774");
#endif

    ctx->pc = 0x17d774u;

label_17d774:
    // 0x17d774: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x17d774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_17d778:
    // 0x17d778: 0x40f809  jalr        $v0
label_17d77c:
    if (ctx->pc == 0x17D77Cu) {
        ctx->pc = 0x17D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D778u;
        // 0x17d77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D780u;
        goto label_fallthrough_0x17d778;
    }
    ctx->pc = 0x17D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D780u);
        ctx->pc = 0x17D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D778u;
        // 0x17d77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D778u, 0x17D780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17d778:
    ctx->pc = 0x17D780u;
}
