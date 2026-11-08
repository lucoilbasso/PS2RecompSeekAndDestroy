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

// Function: entry_001d6ba8
// Address: 0x1d6ba8 - 0x1d6bb8
void entry_001d6ba8_0x1d6ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6ba8_0x1d6ba8");
#endif

    switch (ctx->pc) {
        case 0x1d6bb4u: goto label_1d6bb4;
        default: break;
    }

    ctx->pc = 0x1d6ba8u;

    // 0x1d6ba8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d6bac: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6BACu;
    SET_GPR_U32(ctx, 31, 0x1D6BB4u);
    ctx->pc = 0x1D6BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BACu;
    // 0x1d6bb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6BACu, 0x1D6BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BB4u;
label_1d6bb4:
    // 0x1d6bb4: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x1d6bb8u;
}
