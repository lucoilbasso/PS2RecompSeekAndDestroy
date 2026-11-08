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

// Function: entry_001cb3b8
// Address: 0x1cb3b8 - 0x1cb3c8
void entry_001cb3b8_0x1cb3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb3b8_0x1cb3b8");
#endif

    ctx->pc = 0x1cb3b8u;

    // 0x1cb3b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB3B8u;
    {
        const bool branch_taken_0x1cb3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3B8u;
        // 0x1cb3bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3b8) {
            ctx->pc = 0x1CB3F0u;
            return;
        }
    }
    ctx->pc = 0x1CB3C0u;
    // 0x1cb3c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb3c4: 0x0  nop
    ctx->pc = 0x1cb3c4u;
    // NOP
    ctx->pc = 0x1cb3c8u;
}
