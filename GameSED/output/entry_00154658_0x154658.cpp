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

// Function: entry_00154658
// Address: 0x154658 - 0x154670
void entry_00154658_0x154658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154658_0x154658");
#endif

    ctx->pc = 0x154658u;

    // 0x154658: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154658u;
    {
        const bool branch_taken_0x154658 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x15465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154658u;
        // 0x15465c: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154658) {
            ctx->pc = 0x154670u;
            return;
        }
    }
    ctx->pc = 0x154660u;
    // 0x154660: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x154660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x154664: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x154664u;
    {
        const bool branch_taken_0x154664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154664u;
        // 0x154668: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154664) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x15466Cu;
    // 0x15466c: 0x0  nop
    ctx->pc = 0x15466cu;
    // NOP
    ctx->pc = 0x154670u;
}
