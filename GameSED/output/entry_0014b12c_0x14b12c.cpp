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

// Function: entry_0014b12c
// Address: 0x14b12c - 0x14b148
void entry_0014b12c_0x14b12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b12c_0x14b12c");
#endif

    ctx->pc = 0x14b12cu;

    // 0x14b12c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x14b130: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b134: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B134u;
    {
        const bool branch_taken_0x14b134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B134u;
        // 0x14b138: 0x36224000  ori         $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b134) {
            ctx->pc = 0x14B148u;
            return;
        }
    }
    ctx->pc = 0x14B13Cu;
    // 0x14b13c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14B13Cu;
    {
        const bool branch_taken_0x14b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B13Cu;
        // 0x14b140: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b13c) {
            ctx->pc = 0x14B158u;
            return;
        }
    }
    ctx->pc = 0x14B144u;
    // 0x14b144: 0x0  nop
    ctx->pc = 0x14b144u;
    // NOP
    ctx->pc = 0x14b148u;
}
