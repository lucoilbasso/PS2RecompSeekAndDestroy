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

// Function: entry_0016a524
// Address: 0x16a524 - 0x16a538
void entry_0016a524_0x16a524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a524_0x16a524");
#endif

    ctx->pc = 0x16a524u;

    // 0x16a524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a528: 0x24a57330  addiu       $a1, $a1, 0x7330
    ctx->pc = 0x16a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
    // 0x16a52c: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x16a52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x16a530: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16A530u;
    SET_GPR_U32(ctx, 31, 0x16A538u);
    ctx->pc = 0x16A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A530u;
    // 0x16a534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A530u, 0x16A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A538u;
}
