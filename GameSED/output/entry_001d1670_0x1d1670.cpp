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

// Function: entry_001d1670
// Address: 0x1d1670 - 0x1d1680
void entry_001d1670_0x1d1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1670_0x1d1670");
#endif

    ctx->pc = 0x1d1670u;

    // 0x1d1670: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1670u;
    {
        const bool branch_taken_0x1d1670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1670u;
        // 0x1d1674: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1670) {
            ctx->pc = 0x1D1680u;
            return;
        }
    }
    ctx->pc = 0x1D1678u;
    // 0x1d1678: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1678u;
    {
        const bool branch_taken_0x1d1678 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1678u;
        // 0x1d167c: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1678) {
            ctx->pc = 0x1D168Cu;
            return;
        }
    }
    ctx->pc = 0x1D1680u;
}
