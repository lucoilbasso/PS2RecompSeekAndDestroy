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

// Function: entry_00102f50
// Address: 0x102f50 - 0x102f60
void entry_00102f50_0x102f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f50_0x102f50");
#endif

    switch (ctx->pc) {
        case 0x102f5cu: goto label_102f5c;
        default: break;
    }

    ctx->pc = 0x102f50u;

    // 0x102f50: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x102f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x102f54: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x102F54u;
    SET_GPR_U32(ctx, 31, 0x102F5Cu);
    ctx->pc = 0x102F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F54u;
    // 0x102f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x102F54u, 0x102F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F5Cu;
label_102f5c:
    // 0x102f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102f60u;
}
