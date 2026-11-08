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

// Function: entry_001bdd20
// Address: 0x1bdd20 - 0x1bdd3c
void entry_001bdd20_0x1bdd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdd20_0x1bdd20");
#endif

    ctx->pc = 0x1bdd20u;

    // 0x1bdd20: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1bdd24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDD24u;
    {
        const bool branch_taken_0x1bdd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD24u;
        // 0x1bdd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd24) {
            ctx->pc = 0x1BDD3Cu;
            return;
        }
    }
    ctx->pc = 0x1BDD2Cu;
    // 0x1bdd2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdd30: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1BDD30u;
    {
        const bool branch_taken_0x1bdd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD30u;
        // 0x1bdd34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd30) {
            ctx->pc = 0x1BDC40u;
            return;
        }
    }
    ctx->pc = 0x1BDD38u;
    // 0x1bdd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1bdd3cu;
}
