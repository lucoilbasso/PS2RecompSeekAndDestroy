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

// Function: entry_00160208
// Address: 0x160208 - 0x160220
void entry_00160208_0x160208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160208_0x160208");
#endif

    ctx->pc = 0x160208u;

    // 0x160208: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x160208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x16020c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16020Cu;
    {
        const bool branch_taken_0x16020c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16020Cu;
        // 0x160210: 0x26820154  addiu       $v0, $s4, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16020c) {
            ctx->pc = 0x160220u;
            return;
        }
    }
    ctx->pc = 0x160214u;
    // 0x160214: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x160214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x160218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160218u;
    {
        const bool branch_taken_0x160218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160218u;
        // 0x16021c: 0x26820154  addiu       $v0, $s4, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160218) {
            ctx->pc = 0x160238u;
            return;
        }
    }
    ctx->pc = 0x160220u;
}
