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

// Function: entry_001d571c
// Address: 0x1d571c - 0x1d5730
void entry_001d571c_0x1d571c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d571c_0x1d571c");
#endif

    ctx->pc = 0x1d571cu;

    // 0x1d571c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D571Cu;
    {
        const bool branch_taken_0x1d571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D571Cu;
        // 0x1d5720: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d571c) {
            ctx->pc = 0x1D5730u;
            return;
        }
    }
    ctx->pc = 0x1D5724u;
    // 0x1d5724: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d5728: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x1d5728u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1d572c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x1d572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x1d5730u;
}
