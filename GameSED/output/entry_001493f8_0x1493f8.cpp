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

// Function: entry_001493f8
// Address: 0x1493f8 - 0x149408
void entry_001493f8_0x1493f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001493f8_0x1493f8");
#endif

    ctx->pc = 0x1493f8u;

    // 0x1493f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1493fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1493fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x149400: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149400u;
    {
        const bool branch_taken_0x149400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x149404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149400u;
        // 0x149404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149400) {
            ctx->pc = 0x149418u;
            return;
        }
    }
    ctx->pc = 0x149408u;
}
