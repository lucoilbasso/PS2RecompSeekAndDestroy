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

// Function: entry_0018dbd8
// Address: 0x18dbd8 - 0x18dbe4
void entry_0018dbd8_0x18dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dbd8_0x18dbd8");
#endif

    switch (ctx->pc) {
        case 0x18dbe0u: goto label_18dbe0;
        default: break;
    }

    ctx->pc = 0x18dbd8u;

    // 0x18dbd8: 0xc0633ba  jal         func_18CEE8
    ctx->pc = 0x18DBD8u;
    SET_GPR_U32(ctx, 31, 0x18DBE0u);
    ctx->pc = 0x18DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBD8u;
    // 0x18dbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CEE8u, 0x18DBD8u, 0x18DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBE0u;
label_18dbe0:
    // 0x18dbe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18dbe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18dbe4u;
}
