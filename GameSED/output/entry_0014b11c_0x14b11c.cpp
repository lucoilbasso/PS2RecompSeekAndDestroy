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

// Function: entry_0014b11c
// Address: 0x14b11c - 0x14b12c
void entry_0014b11c_0x14b11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b11c_0x14b11c");
#endif

    switch (ctx->pc) {
        case 0x14b124u: goto label_14b124;
        default: break;
    }

    ctx->pc = 0x14b11cu;

    // 0x14b11c: 0xc056832  jal         func_15A0C8
    ctx->pc = 0x14B11Cu;
    SET_GPR_U32(ctx, 31, 0x14B124u);
    ctx->pc = 0x14B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B11Cu;
    // 0x14b120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x14B11Cu, 0x14B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B124u;
label_14b124:
    // 0x14b124: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14b128: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x14b12cu;
}
