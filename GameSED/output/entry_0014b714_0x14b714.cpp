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

// Function: entry_0014b714
// Address: 0x14b714 - 0x14b730
void entry_0014b714_0x14b714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b714_0x14b714");
#endif

    ctx->pc = 0x14b714u;

    // 0x14b714: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14B714u;
    {
        const bool branch_taken_0x14b714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b714) {
            ctx->pc = 0x14B718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B714u;
            // 0x14b718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B740u;
            return;
        }
    }
    ctx->pc = 0x14B71Cu;
    // 0x14b71c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B71Cu;
    {
        const bool branch_taken_0x14b71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B71Cu;
        // 0x14b720: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b71c) {
            ctx->pc = 0x14B730u;
            return;
        }
    }
    ctx->pc = 0x14B724u;
    // 0x14b724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B724u;
    {
        const bool branch_taken_0x14b724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B724u;
        // 0x14b728: 0xaca201bc  sw          $v0, 0x1BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b724) {
            ctx->pc = 0x14B734u;
            return;
        }
    }
    ctx->pc = 0x14B72Cu;
    // 0x14b72c: 0x0  nop
    ctx->pc = 0x14b72cu;
    // NOP
    ctx->pc = 0x14b730u;
}
