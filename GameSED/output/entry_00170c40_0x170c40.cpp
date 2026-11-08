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

// Function: entry_00170c40
// Address: 0x170c40 - 0x170c5c
void entry_00170c40_0x170c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c40_0x170c40");
#endif

    switch (ctx->pc) {
        case 0x170c48u: goto label_170c48;
        case 0x170c58u: goto label_170c58;
        default: break;
    }

    ctx->pc = 0x170c40u;

    // 0x170c40: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C40u;
    SET_GPR_U32(ctx, 31, 0x170C48u);
    ctx->pc = 0x170C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C40u;
    // 0x170c44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C40u, 0x170C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C48u;
label_170c48:
    // 0x170c48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x170c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x170c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c50: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C50u;
    SET_GPR_U32(ctx, 31, 0x170C58u);
    ctx->pc = 0x170C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C50u;
    // 0x170c54: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C50u, 0x170C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C58u;
label_170c58:
    // 0x170c58: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x170c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170c5cu;
}
