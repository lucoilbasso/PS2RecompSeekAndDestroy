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

// Function: entry_0014bb3c
// Address: 0x14bb3c - 0x14bb48
void entry_0014bb3c_0x14bb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bb3c_0x14bb3c");
#endif

    switch (ctx->pc) {
        case 0x14bb44u: goto label_14bb44;
        default: break;
    }

    ctx->pc = 0x14bb3cu;

    // 0x14bb3c: 0xc052f02  jal         func_14BC08
    ctx->pc = 0x14BB3Cu;
    SET_GPR_U32(ctx, 31, 0x14BB44u);
    ctx->pc = 0x14BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB3Cu;
    // 0x14bb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BC08u, 0x14BB3Cu, 0x14BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB44u;
label_14bb44:
    // 0x14bb44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14bb48u;
}
