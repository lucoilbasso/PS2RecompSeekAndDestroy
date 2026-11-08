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

// Function: entry_00124f20
// Address: 0x124f20 - 0x124f48
void entry_00124f20_0x124f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124f20_0x124f20");
#endif

    ctx->pc = 0x124f20u;

label_124f20:
    // 0x124f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124f24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124f28: 0x0  nop
    ctx->pc = 0x124f28u;
    // NOP
    // 0x124f2c: 0x0  nop
    ctx->pc = 0x124f2cu;
    // NOP
    // 0x124f30: 0x0  nop
    ctx->pc = 0x124f30u;
    // NOP
    // 0x124f34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124F34u;
    {
        const bool branch_taken_0x124f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F34u;
        // 0x124f38: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f34) {
            ctx->pc = 0x124F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124f20;
        }
    }
    ctx->pc = 0x124F3Cu;
    // 0x124f3c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x124F3Cu;
    {
        const bool branch_taken_0x124f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F3Cu;
        // 0x124f40: 0xdfb10118  ld          $s1, 0x118($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f3c) {
            ctx->pc = 0x125038u;
            return;
        }
    }
    ctx->pc = 0x124F44u;
    // 0x124f44: 0x0  nop
    ctx->pc = 0x124f44u;
    // NOP
    ctx->pc = 0x124f48u;
}
