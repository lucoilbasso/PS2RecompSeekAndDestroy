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

// Function: entry_001cc10c
// Address: 0x1cc10c - 0x1cc128
void entry_001cc10c_0x1cc10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc10c_0x1cc10c");
#endif

    switch (ctx->pc) {
        case 0x1cc11cu: goto label_1cc11c;
        default: break;
    }

    ctx->pc = 0x1cc10cu;

    // 0x1cc10c: 0x16750008  bne         $s3, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC10Cu;
    {
        const bool branch_taken_0x1cc10c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CC110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC10Cu;
        // 0x1cc110: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc10c) {
            ctx->pc = 0x1CC130u;
            return;
        }
    }
    ctx->pc = 0x1CC114u;
    // 0x1cc114: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CC114u;
    SET_GPR_U32(ctx, 31, 0x1CC11Cu);
    ctx->pc = 0x1CC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC114u;
    // 0x1cc118: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC114u, 0x1CC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC11Cu;
label_1cc11c:
    // 0x1cc11c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC11Cu;
    {
        const bool branch_taken_0x1cc11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc11c) {
            ctx->pc = 0x1CC120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC11Cu;
            // 0x1cc120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC134u;
            return;
        }
    }
    ctx->pc = 0x1CC124u;
    // 0x1cc124: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1cc124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x1cc128u;
}
