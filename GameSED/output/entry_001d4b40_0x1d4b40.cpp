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

// Function: entry_001d4b40
// Address: 0x1d4b40 - 0x1d4b58
void entry_001d4b40_0x1d4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4b40_0x1d4b40");
#endif

    ctx->pc = 0x1d4b40u;

    // 0x1d4b40: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d4b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d4b44: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D4B44u;
    {
        const bool branch_taken_0x1d4b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B44u;
        // 0x1d4b48: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b44) {
            ctx->pc = 0x1D4C90u;
            return;
        }
    }
    ctx->pc = 0x1D4B4Cu;
    // 0x1d4b4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4B4Cu;
    {
        const bool branch_taken_0x1d4b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b4c) {
            ctx->pc = 0x1D4B60u;
            return;
        }
    }
    ctx->pc = 0x1D4B54u;
    // 0x1d4b54: 0x0  nop
    ctx->pc = 0x1d4b54u;
    // NOP
    ctx->pc = 0x1d4b58u;
}
