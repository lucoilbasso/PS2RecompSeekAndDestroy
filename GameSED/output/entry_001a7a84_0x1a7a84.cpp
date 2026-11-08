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

// Function: entry_001a7a84
// Address: 0x1a7a84 - 0x1a7aa0
void entry_001a7a84_0x1a7a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7a84_0x1a7a84");
#endif

    ctx->pc = 0x1a7a84u;

    // 0x1a7a84: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a7a88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7a8c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7a90: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7A94u;
    {
        const bool branch_taken_0x1a7a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A94u;
        // 0x1a7a98: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a94) {
            ctx->pc = 0x1A7AA4u;
            return;
        }
    }
    ctx->pc = 0x1A7A9Cu;
    // 0x1a7a9c: 0x0  nop
    ctx->pc = 0x1a7a9cu;
    // NOP
    ctx->pc = 0x1a7aa0u;
}
