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

// Function: entry_001b1250
// Address: 0x1b1250 - 0x1b1264
void entry_001b1250_0x1b1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1250_0x1b1250");
#endif

    switch (ctx->pc) {
        case 0x1b125cu: goto label_1b125c;
        default: break;
    }

    ctx->pc = 0x1b1250u;

    // 0x1b1250: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1b1250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1b1254: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1254u;
    SET_GPR_U32(ctx, 31, 0x1B125Cu);
    ctx->pc = 0x1B1258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1254u;
    // 0x1b1258: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1254u, 0x1B125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B125Cu;
label_1b125c:
    // 0x1b125c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B125Cu;
    {
        const bool branch_taken_0x1b125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B125Cu;
        // 0x1b1260: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b125c) {
            ctx->pc = 0x1B127Cu;
            return;
        }
    }
    ctx->pc = 0x1B1264u;
}
