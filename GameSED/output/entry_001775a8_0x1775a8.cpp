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

// Function: entry_001775a8
// Address: 0x1775a8 - 0x1775b8
void entry_001775a8_0x1775a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001775a8_0x1775a8");
#endif

    ctx->pc = 0x1775a8u;

    // 0x1775a8: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1775A8u;
    {
        const bool branch_taken_0x1775a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1775ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775A8u;
        // 0x1775ac: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775a8) {
            ctx->pc = 0x1775B8u;
            return;
        }
    }
    ctx->pc = 0x1775B0u;
    // 0x1775b0: 0x16430046  bne         $s2, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1775B0u;
    {
        const bool branch_taken_0x1775b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1775B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775B0u;
        // 0x1775b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775b0) {
            ctx->pc = 0x1776CCu;
            return;
        }
    }
    ctx->pc = 0x1775B8u;
}
