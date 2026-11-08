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

// Function: entry_00129e28
// Address: 0x129e28 - 0x129e50
void entry_00129e28_0x129e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129e28_0x129e28");
#endif

    ctx->pc = 0x129e28u;

label_129e28:
    // 0x129e28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129e2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x129e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x129e30: 0x0  nop
    ctx->pc = 0x129e30u;
    // NOP
    // 0x129e34: 0x0  nop
    ctx->pc = 0x129e34u;
    // NOP
    // 0x129e38: 0x0  nop
    ctx->pc = 0x129e38u;
    // NOP
    // 0x129e3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129E3Cu;
    {
        const bool branch_taken_0x129e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E3Cu;
        // 0x129e40: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e3c) {
            ctx->pc = 0x129E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129e28;
        }
    }
    ctx->pc = 0x129E44u;
    // 0x129e44: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x129E44u;
    {
        const bool branch_taken_0x129e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E44u;
        // 0x129e48: 0xdfb10158  ld          $s1, 0x158($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e44) {
            ctx->pc = 0x129F40u;
            return;
        }
    }
    ctx->pc = 0x129E4Cu;
    // 0x129e4c: 0x0  nop
    ctx->pc = 0x129e4cu;
    // NOP
    ctx->pc = 0x129e50u;
}
