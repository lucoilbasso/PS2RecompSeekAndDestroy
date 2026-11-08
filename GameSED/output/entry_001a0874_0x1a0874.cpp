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

// Function: entry_001a0874
// Address: 0x1a0874 - 0x1a0888
void entry_001a0874_0x1a0874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0874_0x1a0874");
#endif

    switch (ctx->pc) {
        case 0x1a087cu: goto label_1a087c;
        default: break;
    }

    ctx->pc = 0x1a0874u;

    // 0x1a0874: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x1A0874u;
    SET_GPR_U32(ctx, 31, 0x1A087Cu);
    ctx->pc = 0x1A0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0874u;
    // 0x1a0878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x1A0874u, 0x1A087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A087Cu;
label_1a087c:
    // 0x1a087c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A087Cu;
    {
        const bool branch_taken_0x1a087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a087c) {
            ctx->pc = 0x1A0948u;
            return;
        }
    }
    ctx->pc = 0x1A0884u;
    // 0x1a0884: 0x0  nop
    ctx->pc = 0x1a0884u;
    // NOP
    ctx->pc = 0x1a0888u;
}
