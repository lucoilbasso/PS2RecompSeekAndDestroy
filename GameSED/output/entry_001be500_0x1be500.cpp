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

// Function: entry_001be500
// Address: 0x1be500 - 0x1be51c
void entry_001be500_0x1be500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be500_0x1be500");
#endif

    switch (ctx->pc) {
        case 0x1be508u: goto label_1be508;
        default: break;
    }

    ctx->pc = 0x1be500u;

    // 0x1be500: 0xc0708fa  jal         func_1C23E8
    ctx->pc = 0x1BE500u;
    SET_GPR_U32(ctx, 31, 0x1BE508u);
    ctx->pc = 0x1BE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE500u;
    // 0x1be504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C23E8u, 0x1BE500u, 0x1BE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE508u;
label_1be508:
    // 0x1be508: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1be508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1be50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be514: 0x806f948  j           func_1BE520
    ctx->pc = 0x1BE514u;
    ctx->pc = 0x1BE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE514u;
    // 0x1be518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE520u;
    _initSeq_0x1be520(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE51Cu;
}
