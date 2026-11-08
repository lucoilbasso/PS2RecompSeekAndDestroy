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

// Function: entry_0019456c
// Address: 0x19456c - 0x194598
void entry_0019456c_0x19456c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019456c_0x19456c");
#endif

    switch (ctx->pc) {
        case 0x194574u: goto label_194574;
        case 0x194594u: goto label_194594;
        default: break;
    }

    ctx->pc = 0x19456cu;

    // 0x19456c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19456Cu;
    SET_GPR_U32(ctx, 31, 0x194574u);
    ctx->pc = 0x194570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19456Cu;
    // 0x194570: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19456Cu, 0x194574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194574u;
label_194574:
    // 0x194574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194578: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194578u;
    {
        const bool branch_taken_0x194578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194578u;
        // 0x19457c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194578) {
            ctx->pc = 0x194598u;
            return;
        }
    }
    ctx->pc = 0x194580u;
    // 0x194580: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x194580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x194584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194588: 0x24a58270  addiu       $a1, $a1, -0x7D90
    ctx->pc = 0x194588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935152));
    // 0x19458c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19458Cu;
    SET_GPR_U32(ctx, 31, 0x194594u);
    ctx->pc = 0x194590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19458Cu;
    // 0x194590: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19458Cu, 0x194594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194594u;
label_194594:
    // 0x194594: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x194594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x194598u;
}
