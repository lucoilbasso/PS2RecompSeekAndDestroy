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

// Function: entry_00150234
// Address: 0x150234 - 0x150248
void entry_00150234_0x150234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150234_0x150234");
#endif

    switch (ctx->pc) {
        case 0x15023cu: goto label_15023c;
        default: break;
    }

    ctx->pc = 0x150234u;

    // 0x150234: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x150234u;
    SET_GPR_U32(ctx, 31, 0x15023Cu);
    ctx->pc = 0x150238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150234u;
    // 0x150238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x150234u, 0x15023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15023Cu;
label_15023c:
    // 0x15023c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15023Cu;
    {
        const bool branch_taken_0x15023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15023Cu;
        // 0x150240: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15023c) {
            ctx->pc = 0x150278u;
            return;
        }
    }
    ctx->pc = 0x150244u;
    // 0x150244: 0x0  nop
    ctx->pc = 0x150244u;
    // NOP
    ctx->pc = 0x150248u;
}
