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

// Function: entry_0014bbd0
// Address: 0x14bbd0 - 0x14bbe4
void entry_0014bbd0_0x14bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bbd0_0x14bbd0");
#endif

    ctx->pc = 0x14bbd0u;

    // 0x14bbd0: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BBD0u;
    {
        const bool branch_taken_0x14bbd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bbd0) {
            ctx->pc = 0x14BBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BBD0u;
            // 0x14bbd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBE8u;
            return;
        }
    }
    ctx->pc = 0x14BBD8u;
    // 0x14bbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbdc: 0xc053420  jal         func_14D080
    ctx->pc = 0x14BBDCu;
    SET_GPR_U32(ctx, 31, 0x14BBE4u);
    ctx->pc = 0x14BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBDCu;
    // 0x14bbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D080u, 0x14BBDCu, 0x14BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBE4u;
}
