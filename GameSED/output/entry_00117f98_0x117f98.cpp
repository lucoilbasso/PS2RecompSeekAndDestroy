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

// Function: entry_00117f98
// Address: 0x117f98 - 0x117fc0
void entry_00117f98_0x117f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117f98_0x117f98");
#endif

    ctx->pc = 0x117f98u;

label_117f98:
    // 0x117f98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x117f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x117f9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x117f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x117fa0: 0x0  nop
    ctx->pc = 0x117fa0u;
    // NOP
    // 0x117fa4: 0x0  nop
    ctx->pc = 0x117fa4u;
    // NOP
    // 0x117fa8: 0x0  nop
    ctx->pc = 0x117fa8u;
    // NOP
    // 0x117fac: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117FACu;
    {
        const bool branch_taken_0x117fac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x117FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FACu;
        // 0x117fb0: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fac) {
            ctx->pc = 0x117F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117f98;
        }
    }
    ctx->pc = 0x117FB4u;
    // 0x117fb4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x117fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117fb8: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x117fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x117fbc: 0x0  nop
    ctx->pc = 0x117fbcu;
    // NOP
    ctx->pc = 0x117fc0u;
}
