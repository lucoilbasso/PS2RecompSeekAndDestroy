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

// Function: caseD_25
// Address: 0x135e38 - 0x135e4c
void caseD_25_0x135e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_25_0x135e38");
#endif

    ctx->pc = 0x135e38u;

    // 0x135e38: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x135e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e44: 0xc0503ac  jal         func_140EB0
    ctx->pc = 0x135E44u;
    SET_GPR_U32(ctx, 31, 0x135E4Cu);
    ctx->pc = 0x135E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E44u;
    // 0x135e48: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140EB0u, 0x135E44u, 0x135E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E4Cu;
}
