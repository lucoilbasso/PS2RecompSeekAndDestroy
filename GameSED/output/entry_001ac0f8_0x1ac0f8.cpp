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

// Function: entry_001ac0f8
// Address: 0x1ac0f8 - 0x1ac108
void entry_001ac0f8_0x1ac0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac0f8_0x1ac0f8");
#endif

    ctx->pc = 0x1ac0f8u;

    // 0x1ac0f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac0fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ac0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ac100: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AC100u;
    {
        const bool branch_taken_0x1ac100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC100u;
        // 0x1ac104: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac100) {
            ctx->pc = 0x1AC0E0u;
            return;
        }
    }
    ctx->pc = 0x1AC108u;
}
