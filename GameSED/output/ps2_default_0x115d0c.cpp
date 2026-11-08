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

// Function: default
// Address: 0x115d0c - 0x115d34
void ps2_default_0x115d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x115d0c");
#endif

    ctx->pc = 0x115d0cu;

    // 0x115d0c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x115d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x115d10: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x115d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x115d14: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x115d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x115d18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x115d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115d1c: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x115d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x115d20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x115d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x115d24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x115d28: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x115d28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x115d2c: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x115D2Cu;
    {
        const bool branch_taken_0x115d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D2Cu;
        // 0x115d30: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d2c) {
            ctx->pc = 0x115C78u;
            return;
        }
    }
    ctx->pc = 0x115D34u;
}
