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

// Function: entry_00100d80
// Address: 0x100d80 - 0x100d90
void entry_00100d80_0x100d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d80_0x100d80");
#endif

    switch (ctx->pc) {
        case 0x100d8cu: goto label_100d8c;
        default: break;
    }

    ctx->pc = 0x100d80u;

    // 0x100d80: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x100d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x100d84: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100D84u;
    SET_GPR_U32(ctx, 31, 0x100D8Cu);
    ctx->pc = 0x100D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D84u;
    // 0x100d88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100D84u, 0x100D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D8Cu;
label_100d8c:
    // 0x100d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100d90u;
}
