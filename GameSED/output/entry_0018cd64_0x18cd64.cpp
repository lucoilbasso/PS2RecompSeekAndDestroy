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

// Function: entry_0018cd64
// Address: 0x18cd64 - 0x18cd88
void entry_0018cd64_0x18cd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd64_0x18cd64");
#endif

    switch (ctx->pc) {
        case 0x18cd6cu: goto label_18cd6c;
        default: break;
    }

    ctx->pc = 0x18cd64u;

    // 0x18cd64: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18CD64u;
    SET_GPR_U32(ctx, 31, 0x18CD6Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18CD64u, 0x18CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD6Cu;
label_18cd6c:
    // 0x18cd6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CD6Cu;
    {
        const bool branch_taken_0x18cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD6Cu;
        // 0x18cd70: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd6c) {
            ctx->pc = 0x18CD88u;
            return;
        }
    }
    ctx->pc = 0x18CD74u;
    // 0x18cd74: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18cd78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd7c: 0x24a580e8  addiu       $a1, $a1, -0x7F18
    ctx->pc = 0x18cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934760));
    // 0x18cd80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18CD80u;
    SET_GPR_U32(ctx, 31, 0x18CD88u);
    ctx->pc = 0x18CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD80u;
    // 0x18cd84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18CD80u, 0x18CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD88u;
}
