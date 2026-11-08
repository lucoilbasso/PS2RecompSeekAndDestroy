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

// Function: entry_0017b8e8
// Address: 0x17b8e8 - 0x17b8f4
void entry_0017b8e8_0x17b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b8e8_0x17b8e8");
#endif

    ctx->pc = 0x17b8e8u;

    // 0x17b8e8: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x17b8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b8ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B8ECu;
    {
        const bool branch_taken_0x17b8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8ECu;
        // 0x17b8f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8ec) {
            ctx->pc = 0x17B8D0u;
            return;
        }
    }
    ctx->pc = 0x17B8F4u;
}
