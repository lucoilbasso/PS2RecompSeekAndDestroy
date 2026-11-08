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

// Function: entry_0017b650
// Address: 0x17b650 - 0x17b670
void entry_0017b650_0x17b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b650_0x17b650");
#endif

    ctx->pc = 0x17b650u;

    // 0x17b650: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17b654: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B654u;
    {
        const bool branch_taken_0x17b654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B654u;
        // 0x17b658: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b654) {
            ctx->pc = 0x17B698u;
            return;
        }
    }
    ctx->pc = 0x17B65Cu;
    // 0x17b65c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B65Cu;
    {
        const bool branch_taken_0x17b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B65Cu;
        // 0x17b660: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b65c) {
            ctx->pc = 0x17B670u;
            return;
        }
    }
    ctx->pc = 0x17B664u;
    // 0x17b664: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17B664u;
    {
        const bool branch_taken_0x17b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B664u;
        // 0x17b668: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b664) {
            ctx->pc = 0x17B67Cu;
            return;
        }
    }
    ctx->pc = 0x17B66Cu;
    // 0x17b66c: 0x0  nop
    ctx->pc = 0x17b66cu;
    // NOP
    ctx->pc = 0x17b670u;
}
