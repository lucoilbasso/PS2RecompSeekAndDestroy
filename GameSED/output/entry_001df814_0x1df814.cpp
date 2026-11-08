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

// Function: entry_001df814
// Address: 0x1df814 - 0x1df844
void entry_001df814_0x1df814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df814_0x1df814");
#endif

    ctx->pc = 0x1df814u;

    // 0x1df814: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1df814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1df818: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1df818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1df81c: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x1df81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1df820: 0x0  nop
    ctx->pc = 0x1df820u;
    // NOP
    // 0x1df824: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DF824u;
    {
        const bool branch_taken_0x1df824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF824u;
        // 0x1df828: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df824) {
            ctx->pc = 0x1DF808u;
            return;
        }
    }
    ctx->pc = 0x1DF82Cu;
    // 0x1df82c: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1df82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1df830: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1df834: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1df834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1df838: 0xaca307e0  sw          $v1, 0x7E0($a1)
    ctx->pc = 0x1df838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 3));
    // 0x1df83c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1df83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df840: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1df840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1df844u;
}
