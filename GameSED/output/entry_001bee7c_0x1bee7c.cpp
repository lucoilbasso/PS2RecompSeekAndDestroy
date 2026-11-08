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

// Function: entry_001bee7c
// Address: 0x1bee7c - 0x1beea4
void entry_001bee7c_0x1bee7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bee7c_0x1bee7c");
#endif

    ctx->pc = 0x1bee7cu;

    // 0x1bee7c: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1bee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1bee80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bee84: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1BEE84u;
    {
        const bool branch_taken_0x1bee84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE84u;
        // 0x1bee88: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee84) {
            ctx->pc = 0x1BF094u;
            return;
        }
    }
    ctx->pc = 0x1BEE8Cu;
    // 0x1bee8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bee90: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEE90u;
    {
        const bool branch_taken_0x1bee90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bee90) {
            ctx->pc = 0x1BEE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEE90u;
            // 0x1bee94: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEEA4u;
            return;
        }
    }
    ctx->pc = 0x1BEE98u;
    // 0x1bee98: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x1BEE98u;
    {
        const bool branch_taken_0x1bee98 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bee98) {
            ctx->pc = 0x1BEED8u;
            return;
        }
    }
    ctx->pc = 0x1BEEA0u;
    // 0x1beea0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1beea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1beea4u;
}
