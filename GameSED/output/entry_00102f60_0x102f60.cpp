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

// Function: entry_00102f60
// Address: 0x102f60 - 0x102f7c
void entry_00102f60_0x102f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f60_0x102f60");
#endif

    switch (ctx->pc) {
        case 0x102f68u: goto label_102f68;
        default: break;
    }

    ctx->pc = 0x102f60u;

    // 0x102f60: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102F60u;
    SET_GPR_U32(ctx, 31, 0x102F68u);
    ctx->pc = 0x102F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F60u;
    // 0x102f64: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102F60u, 0x102F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F68u;
label_102f68:
    // 0x102f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f6c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x102f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x102f70: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x102F70u;
    {
        const bool branch_taken_0x102f70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F70u;
        // 0x102f74: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f70) {
            ctx->pc = 0x102F7Cu;
            return;
        }
    }
    ctx->pc = 0x102F78u;
    // 0x102f78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x102f7cu;
}
