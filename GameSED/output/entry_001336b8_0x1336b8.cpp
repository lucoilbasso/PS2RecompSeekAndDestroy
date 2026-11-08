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

// Function: entry_001336b8
// Address: 0x1336b8 - 0x1336d0
void entry_001336b8_0x1336b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001336b8_0x1336b8");
#endif

    switch (ctx->pc) {
        case 0x1336c4u: goto label_1336c4;
        default: break;
    }

    ctx->pc = 0x1336b8u;

    // 0x1336b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1336b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336bc: 0xc04e39e  jal         func_138E78
    ctx->pc = 0x1336BCu;
    SET_GPR_U32(ctx, 31, 0x1336C4u);
    ctx->pc = 0x1336C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336BCu;
    // 0x1336c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E78u, 0x1336BCu, 0x1336C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336C4u;
label_1336c4:
    // 0x1336c4: 0x10000272  b           . + 4 + (0x272 << 2)
    ctx->pc = 0x1336C4u;
    {
        const bool branch_taken_0x1336c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336c4) {
            ctx->pc = 0x134090u;
            return;
        }
    }
    ctx->pc = 0x1336CCu;
    // 0x1336cc: 0x0  nop
    ctx->pc = 0x1336ccu;
    // NOP
    ctx->pc = 0x1336d0u;
}
