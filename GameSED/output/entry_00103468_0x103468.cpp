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

// Function: entry_00103468
// Address: 0x103468 - 0x103484
void entry_00103468_0x103468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103468_0x103468");
#endif

    ctx->pc = 0x103468u;

    // 0x103468: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x103468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10346c: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10346Cu;
    {
        const bool branch_taken_0x10346c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x103470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10346Cu;
        // 0x103470: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10346c) {
            ctx->pc = 0x103484u;
            return;
        }
    }
    ctx->pc = 0x103474u;
    // 0x103474: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x103474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x103478: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x103478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10347c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10347Cu;
    {
        const bool branch_taken_0x10347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10347c) {
            ctx->pc = 0x103488u;
            return;
        }
    }
    ctx->pc = 0x103484u;
}
