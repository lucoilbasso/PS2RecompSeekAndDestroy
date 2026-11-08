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

// Function: entry_0016330c
// Address: 0x16330c - 0x163328
void entry_0016330c_0x16330c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016330c_0x16330c");
#endif

    ctx->pc = 0x16330cu;

    // 0x16330c: 0x8e040c14  lw          $a0, 0xC14($s0)
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3092)));
    // 0x163310: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163310u;
    {
        const bool branch_taken_0x163310 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x163314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163310u;
        // 0x163314: 0xae420158  sw          $v0, 0x158($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163310) {
            ctx->pc = 0x163328u;
            return;
        }
    }
    ctx->pc = 0x163318u;
    // 0x163318: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16331c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x16331cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x163320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163320u;
    {
        const bool branch_taken_0x163320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163320u;
        // 0x163324: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163320) {
            ctx->pc = 0x16332Cu;
            return;
        }
    }
    ctx->pc = 0x163328u;
}
