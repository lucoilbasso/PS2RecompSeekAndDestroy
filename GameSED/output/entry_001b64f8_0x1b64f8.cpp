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

// Function: entry_001b64f8
// Address: 0x1b64f8 - 0x1b6510
void entry_001b64f8_0x1b64f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b64f8_0x1b64f8");
#endif

    switch (ctx->pc) {
        case 0x1b6508u: goto label_1b6508;
        default: break;
    }

    ctx->pc = 0x1b64f8u;

    // 0x1b64f8: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1b64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1b64fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b64fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6500: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B6500u;
    SET_GPR_U32(ctx, 31, 0x1B6508u);
    ctx->pc = 0x1B6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6500u;
    // 0x1b6504: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B6500u, 0x1B6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6508u;
label_1b6508:
    // 0x1b6508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6508u;
    {
        const bool branch_taken_0x1b6508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6508u;
        // 0x1b650c: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6508) {
            ctx->pc = 0x1B651Cu;
            return;
        }
    }
    ctx->pc = 0x1B6510u;
}
