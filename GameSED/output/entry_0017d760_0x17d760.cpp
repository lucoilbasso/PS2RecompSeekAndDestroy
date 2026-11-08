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

// Function: entry_0017d760
// Address: 0x17d760 - 0x17d76c
void entry_0017d760_0x17d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d760_0x17d760");
#endif

    switch (ctx->pc) {
        case 0x17d768u: goto label_17d768;
        default: break;
    }

    ctx->pc = 0x17d760u;

    // 0x17d760: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D760u;
    SET_GPR_U32(ctx, 31, 0x17D768u);
    ctx->pc = 0x17D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D760u;
    // 0x17d764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D760u, 0x17D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D768u;
label_17d768:
    // 0x17d768: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->pc = 0x17d76cu;
}
