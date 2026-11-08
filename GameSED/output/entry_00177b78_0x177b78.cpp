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

// Function: entry_00177b78
// Address: 0x177b78 - 0x177b8c
void entry_00177b78_0x177b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177b78_0x177b78");
#endif

    switch (ctx->pc) {
        case 0x177b84u: goto label_177b84;
        default: break;
    }

    ctx->pc = 0x177b78u;

    // 0x177b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177b7c: 0xc0685e0  jal         func_1A1780
    ctx->pc = 0x177B7Cu;
    SET_GPR_U32(ctx, 31, 0x177B84u);
    ctx->pc = 0x177B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B7Cu;
    // 0x177b80: 0x24081000  addiu       $t0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1780u, 0x177B7Cu, 0x177B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B84u;
label_177b84:
    // 0x177b84: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x177b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x177b88: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x177b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->pc = 0x177b8cu;
}
