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

// Function: entry_00156750
// Address: 0x156750 - 0x156764
void entry_00156750_0x156750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156750_0x156750");
#endif

    switch (ctx->pc) {
        case 0x156760u: goto label_156760;
        default: break;
    }

    ctx->pc = 0x156750u;

    // 0x156750: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156758: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x156758u;
    SET_GPR_U32(ctx, 31, 0x156760u);
    ctx->pc = 0x15675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156758u;
    // 0x15675c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x156758u, 0x156760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156760u;
label_156760:
    // 0x156760: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x156760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    ctx->pc = 0x156764u;
}
