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

// Function: entry_00137b64
// Address: 0x137b64 - 0x137b78
void entry_00137b64_0x137b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b64_0x137b64");
#endif

    ctx->pc = 0x137b64u;

    // 0x137b64: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137B64u;
    {
        const bool branch_taken_0x137b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x137B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B64u;
        // 0x137b68: 0x101940  sll         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b64) {
            ctx->pc = 0x137B78u;
            return;
        }
    }
    ctx->pc = 0x137B6Cu;
    // 0x137b6c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x137b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x137b70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137B70u;
    {
        const bool branch_taken_0x137b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B70u;
        // 0x137b74: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b70) {
            ctx->pc = 0x137B7Cu;
            return;
        }
    }
    ctx->pc = 0x137B78u;
}
