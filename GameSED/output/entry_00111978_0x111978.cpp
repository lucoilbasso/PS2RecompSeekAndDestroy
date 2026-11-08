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

// Function: entry_00111978
// Address: 0x111978 - 0x111990
void entry_00111978_0x111978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111978_0x111978");
#endif

    ctx->pc = 0x111978u;

    // 0x111978: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x111978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11197c: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x11197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x111980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111984: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111988: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x111988u;
    SET_GPR_U32(ctx, 31, 0x111990u);
    ctx->pc = 0x11198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111988u;
    // 0x11198c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x111988u, 0x111990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111990u;
}
