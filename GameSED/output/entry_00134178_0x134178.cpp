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

// Function: entry_00134178
// Address: 0x134178 - 0x134190
void entry_00134178_0x134178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134178_0x134178");
#endif

    ctx->pc = 0x134178u;

    // 0x134178: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x134178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13417c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x134180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134184: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x134184u;
    {
        const bool branch_taken_0x134184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134184u;
        // 0x134188: 0x8c513630  lw          $s1, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134184) {
            ctx->pc = 0x1343A4u;
            return;
        }
    }
    ctx->pc = 0x13418Cu;
    // 0x13418c: 0x0  nop
    ctx->pc = 0x13418cu;
    // NOP
    ctx->pc = 0x134190u;
}
