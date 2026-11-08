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

// Function: entry_00100b10
// Address: 0x100b10 - 0x100b20
void entry_00100b10_0x100b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b10_0x100b10");
#endif

    switch (ctx->pc) {
        case 0x100b1cu: goto label_100b1c;
        default: break;
    }

    ctx->pc = 0x100b10u;

    // 0x100b10: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x100b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x100b14: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100B14u;
    SET_GPR_U32(ctx, 31, 0x100B1Cu);
    ctx->pc = 0x100B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B14u;
    // 0x100b18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100B14u, 0x100B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B1Cu;
label_100b1c:
    // 0x100b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100b20u;
}
