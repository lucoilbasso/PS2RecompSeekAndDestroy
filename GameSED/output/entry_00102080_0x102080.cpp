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

// Function: entry_00102080
// Address: 0x102080 - 0x10209c
void entry_00102080_0x102080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102080_0x102080");
#endif

    ctx->pc = 0x102080u;

    // 0x102080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102084: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x102084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x102088: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10208c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10208cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102090: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x102090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102094: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102094u;
    SET_GPR_U32(ctx, 31, 0x10209Cu);
    ctx->pc = 0x102098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102094u;
    // 0x102098: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102094u, 0x10209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10209Cu;
}
