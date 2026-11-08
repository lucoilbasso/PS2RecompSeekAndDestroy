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

// Function: entry_0010ed64
// Address: 0x10ed64 - 0x10ed90
void entry_0010ed64_0x10ed64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ed64_0x10ed64");
#endif

    switch (ctx->pc) {
        case 0x10ed6cu: goto label_10ed6c;
        case 0x10ed88u: goto label_10ed88;
        default: break;
    }

    ctx->pc = 0x10ed64u;

    // 0x10ed64: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10ED64u;
    SET_GPR_U32(ctx, 31, 0x10ED6Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10ED64u, 0x10ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED6Cu;
label_10ed6c:
    // 0x10ed6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ed6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed70: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10ED70u;
    {
        const bool branch_taken_0x10ed70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED70u;
        // 0x10ed74: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed70) {
            ctx->pc = 0x10ED90u;
            return;
        }
    }
    ctx->pc = 0x10ED78u;
    // 0x10ed78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed7c: 0x24a53dc8  addiu       $a1, $a1, 0x3DC8
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
    // 0x10ed80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x10ED80u;
    SET_GPR_U32(ctx, 31, 0x10ED88u);
    ctx->pc = 0x10ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED80u;
    // 0x10ed84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10ED80u, 0x10ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED88u;
label_10ed88:
    // 0x10ed88: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x10ED88u;
    {
        const bool branch_taken_0x10ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED88u;
        // 0x10ed8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed88) {
            ctx->pc = 0x10EF10u;
            return;
        }
    }
    ctx->pc = 0x10ED90u;
}
