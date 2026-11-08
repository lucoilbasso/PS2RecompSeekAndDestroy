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

// Function: entry_00130368
// Address: 0x130368 - 0x130388
void entry_00130368_0x130368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130368_0x130368");
#endif

    ctx->pc = 0x130368u;

    // 0x130368: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x130368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x13036c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x130370: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130374: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130374u;
    {
        const bool branch_taken_0x130374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x130374) {
            ctx->pc = 0x130388u;
            return;
        }
    }
    ctx->pc = 0x13037Cu;
    // 0x13037c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13037Cu;
    {
        const bool branch_taken_0x13037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13037Cu;
        // 0x130380: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13037c) {
            ctx->pc = 0x1303A4u;
            return;
        }
    }
    ctx->pc = 0x130384u;
    // 0x130384: 0x0  nop
    ctx->pc = 0x130384u;
    // NOP
    ctx->pc = 0x130388u;
}
