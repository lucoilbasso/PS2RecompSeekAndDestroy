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

// Function: entry_001dfffc
// Address: 0x1dfffc - 0x1e0024
void entry_001dfffc_0x1dfffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfffc_0x1dfffc");
#endif

    switch (ctx->pc) {
        case 0x1e0004u: goto label_1e0004;
        default: break;
    }

    ctx->pc = 0x1dfffcu;

    // 0x1dfffc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DFFFCu;
    SET_GPR_U32(ctx, 31, 0x1E0004u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DFFFCu, 0x1E0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0004u;
label_1e0004:
    // 0x1e0004: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e0004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e0008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e000c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0010: 0x24a582d0  addiu       $a1, $a1, -0x7D30
    ctx->pc = 0x1e0010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935248));
    // 0x1e0014: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0014u;
    {
        const bool branch_taken_0x1e0014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0014u;
        // 0x1e0018: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0014) {
            ctx->pc = 0x1E0024u;
            return;
        }
    }
    ctx->pc = 0x1E001Cu;
    // 0x1e001c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E001Cu;
    SET_GPR_U32(ctx, 31, 0x1E0024u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E001Cu, 0x1E0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0024u;
}
