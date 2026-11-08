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

// Function: entry_0010ccfc
// Address: 0x10ccfc - 0x10cd10
void entry_0010ccfc_0x10ccfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ccfc_0x10ccfc");
#endif

    switch (ctx->pc) {
        case 0x10cd04u: goto label_10cd04;
        default: break;
    }

    ctx->pc = 0x10ccfcu;

    // 0x10ccfc: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10CCFCu;
    SET_GPR_U32(ctx, 31, 0x10CD04u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10CCFCu, 0x10CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD04u;
label_10cd04:
    // 0x10cd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd08: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10CD08u;
    SET_GPR_U32(ctx, 31, 0x10CD10u);
    ctx->pc = 0x10CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD08u;
    // 0x10cd0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10CD08u, 0x10CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD10u;
}
