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

// Function: entry_0019c268
// Address: 0x19c268 - 0x19c288
void entry_0019c268_0x19c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c268_0x19c268");
#endif

    ctx->pc = 0x19c268u;

    // 0x19c268: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c26c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C26Cu;
    {
        const bool branch_taken_0x19c26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c26c) {
            ctx->pc = 0x19C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C26Cu;
            // 0x19c270: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C288u;
            return;
        }
    }
    ctx->pc = 0x19C274u;
    // 0x19c274: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c27c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c280: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C280u;
    {
        const bool branch_taken_0x19c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C280u;
        // 0x19c284: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c280) {
            ctx->pc = 0x19C300u;
            return;
        }
    }
    ctx->pc = 0x19C288u;
}
