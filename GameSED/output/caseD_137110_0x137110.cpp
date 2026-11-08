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

// Function: caseD_137110
// Address: 0x137110 - 0x137138
void caseD_137110_0x137110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_137110_0x137110");
#endif

    ctx->pc = 0x137110u;

    // 0x137110: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x137114: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137118: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137118u;
    {
        const bool branch_taken_0x137118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137118u;
        // 0x13711c: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137118) {
            ctx->pc = 0x137100u;
            return;
        }
    }
    ctx->pc = 0x137120u;
    // 0x137120: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x137120u;
    {
        const bool branch_taken_0x137120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137120u;
        // 0x137124: 0x30c20060  andi        $v0, $a2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137120) {
            ctx->pc = 0x137228u;
            return;
        }
    }
    ctx->pc = 0x137128u;
    // 0x137128: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x137128u;
    {
        const bool branch_taken_0x137128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137128) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137130u;
    // 0x137130: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x137130u;
    {
        const bool branch_taken_0x137130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137130u;
        // 0x137134: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137130) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137138u;
}
