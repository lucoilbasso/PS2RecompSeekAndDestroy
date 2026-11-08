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

// Function: entry_001d5648
// Address: 0x1d5648 - 0x1d5660
void entry_001d5648_0x1d5648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5648_0x1d5648");
#endif

    ctx->pc = 0x1d5648u;

    // 0x1d5648: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1d5648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1d564c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d564cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d5650: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5650u;
    {
        const bool branch_taken_0x1d5650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5650u;
        // 0x1d5654: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5650) {
            ctx->pc = 0x1D5660u;
            return;
        }
    }
    ctx->pc = 0x1D5658u;
    // 0x1d5658: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d5658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d565c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1d565cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    ctx->pc = 0x1d5660u;
}
