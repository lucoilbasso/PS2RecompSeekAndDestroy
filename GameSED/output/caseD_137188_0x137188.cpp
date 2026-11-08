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

// Function: caseD_137188
// Address: 0x137188 - 0x1371b0
void caseD_137188_0x137188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_137188_0x137188");
#endif

    ctx->pc = 0x137188u;

    // 0x137188: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x137188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x13718c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x13718Cu;
    {
        const bool branch_taken_0x13718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13718c) {
            ctx->pc = 0x137190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13718Cu;
            // 0x137190: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137194u;
    // 0x137194: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x137198: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x13719c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13719Cu;
    {
        const bool branch_taken_0x13719c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1371A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13719Cu;
        // 0x1371a0: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13719c) {
            ctx->pc = 0x137100u;
            return;
        }
    }
    ctx->pc = 0x1371A4u;
    // 0x1371a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1371A4u;
    {
        const bool branch_taken_0x1371a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1371a4) {
            ctx->pc = 0x137220u;
            return;
        }
    }
    ctx->pc = 0x1371ACu;
    // 0x1371ac: 0x0  nop
    ctx->pc = 0x1371acu;
    // NOP
    ctx->pc = 0x1371b0u;
}
