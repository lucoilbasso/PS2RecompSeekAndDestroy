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

// Function: entry_00193a84
// Address: 0x193a84 - 0x193a90
void entry_00193a84_0x193a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a84_0x193a84");
#endif

    switch (ctx->pc) {
        case 0x193a8cu: goto label_193a8c;
        default: break;
    }

    ctx->pc = 0x193a84u;

    // 0x193a84: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193A84u;
    SET_GPR_U32(ctx, 31, 0x193A8Cu);
    ctx->pc = 0x193A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A84u;
    // 0x193a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193A84u, 0x193A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A8Cu;
label_193a8c:
    // 0x193a8c: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x193a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    ctx->pc = 0x193a90u;
}
