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

// Function: entry_00189c08
// Address: 0x189c08 - 0x189c18
void entry_00189c08_0x189c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c08_0x189c08");
#endif

    switch (ctx->pc) {
        case 0x189c14u: goto label_189c14;
        default: break;
    }

    ctx->pc = 0x189c08u;

    // 0x189c08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x189c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c0c: 0xc0627ba  jal         func_189EE8
    ctx->pc = 0x189C0Cu;
    SET_GPR_U32(ctx, 31, 0x189C14u);
    ctx->pc = 0x189C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C0Cu;
    // 0x189c10: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EE8u, 0x189C0Cu, 0x189C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C14u;
label_189c14:
    // 0x189c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189c18u;
}
