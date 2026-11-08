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

// Function: entry_00101560
// Address: 0x101560 - 0x101578
void entry_00101560_0x101560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101560_0x101560");
#endif

    ctx->pc = 0x101560u;

    // 0x101560: 0x24a51a78  addiu       $a1, $a1, 0x1A78
    ctx->pc = 0x101560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6776));
    // 0x101564: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10156c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10156cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101570: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101570u;
    SET_GPR_U32(ctx, 31, 0x101578u);
    ctx->pc = 0x101574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101570u;
    // 0x101574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101570u, 0x101578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101578u;
}
