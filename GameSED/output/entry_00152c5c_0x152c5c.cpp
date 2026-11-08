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

// Function: entry_00152c5c
// Address: 0x152c5c - 0x152c74
void entry_00152c5c_0x152c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152c5c_0x152c5c");
#endif

    ctx->pc = 0x152c5cu;

    // 0x152c5c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152C5Cu;
    {
        const bool branch_taken_0x152c5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x152C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C5Cu;
        // 0x152c60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c5c) {
            ctx->pc = 0x152C74u;
            return;
        }
    }
    ctx->pc = 0x152C64u;
    // 0x152c64: 0x8e4306dc  lw          $v1, 0x6DC($s2)
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1756)));
    // 0x152c68: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x152c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x152c6c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x152C6Cu;
    {
        const bool branch_taken_0x152c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152c6c) {
            ctx->pc = 0x152C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C6Cu;
            // 0x152c70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152C90u;
            return;
        }
    }
    ctx->pc = 0x152C74u;
}
