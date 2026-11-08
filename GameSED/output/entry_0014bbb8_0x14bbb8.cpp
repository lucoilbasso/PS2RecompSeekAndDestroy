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

// Function: entry_0014bbb8
// Address: 0x14bbb8 - 0x14bbd0
void entry_0014bbb8_0x14bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bbb8_0x14bbb8");
#endif

    switch (ctx->pc) {
        case 0x14bbc4u: goto label_14bbc4;
        default: break;
    }

    ctx->pc = 0x14bbb8u;

    // 0x14bbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbbc: 0xc053420  jal         func_14D080
    ctx->pc = 0x14BBBCu;
    SET_GPR_U32(ctx, 31, 0x14BBC4u);
    ctx->pc = 0x14BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBBCu;
    // 0x14bbc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D080u, 0x14BBBCu, 0x14BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBC4u;
label_14bbc4:
    // 0x14bbc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BBC4u;
    {
        const bool branch_taken_0x14bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBC4u;
        // 0x14bbc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbc4) {
            ctx->pc = 0x14BBE8u;
            return;
        }
    }
    ctx->pc = 0x14BBCCu;
    // 0x14bbcc: 0x0  nop
    ctx->pc = 0x14bbccu;
    // NOP
    ctx->pc = 0x14bbd0u;
}
