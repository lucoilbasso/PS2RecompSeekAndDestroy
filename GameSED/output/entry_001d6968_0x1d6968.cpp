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

// Function: entry_001d6968
// Address: 0x1d6968 - 0x1d6978
void entry_001d6968_0x1d6968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6968_0x1d6968");
#endif

    switch (ctx->pc) {
        case 0x1d6974u: goto label_1d6974;
        default: break;
    }

    ctx->pc = 0x1d6968u;

    // 0x1d6968: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1d696c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D696Cu;
    SET_GPR_U32(ctx, 31, 0x1D6974u);
    ctx->pc = 0x1D6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D696Cu;
    // 0x1d6970: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D696Cu, 0x1D6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6974u;
label_1d6974:
    // 0x1d6974: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->pc = 0x1d6978u;
}
