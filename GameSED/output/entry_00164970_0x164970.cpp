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

// Function: entry_00164970
// Address: 0x164970 - 0x164988
void entry_00164970_0x164970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164970_0x164970");
#endif

    ctx->pc = 0x164970u;

    // 0x164970: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164970u;
    {
        const bool branch_taken_0x164970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164970u;
        // 0x164974: 0x121027  nor         $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164970) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164978u;
    // 0x164978: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x164978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16497c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16497Cu;
    {
        const bool branch_taken_0x16497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16497Cu;
        // 0x164980: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16497c) {
            ctx->pc = 0x1649A8u;
            return;
        }
    }
    ctx->pc = 0x164984u;
    // 0x164984: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x164984u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    ctx->pc = 0x164988u;
}
