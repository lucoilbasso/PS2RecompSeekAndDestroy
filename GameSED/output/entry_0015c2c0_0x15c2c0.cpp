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

// Function: entry_0015c2c0
// Address: 0x15c2c0 - 0x15c2dc
void entry_0015c2c0_0x15c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c2c0_0x15c2c0");
#endif

    ctx->pc = 0x15c2c0u;

label_15c2c0:
    // 0x15c2c0: 0x24e7ff9c  addiu       $a3, $a3, -0x64
    ctx->pc = 0x15c2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967196));
    // 0x15c2c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15c2c8: 0x28e30064  slti        $v1, $a3, 0x64
    ctx->pc = 0x15c2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x15c2cc: 0x0  nop
    ctx->pc = 0x15c2ccu;
    // NOP
    // 0x15c2d0: 0x0  nop
    ctx->pc = 0x15c2d0u;
    // NOP
    // 0x15c2d4: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C2D4u;
    {
        const bool branch_taken_0x15c2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2D4u;
        // 0x15c2d8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2d4) {
            ctx->pc = 0x15C2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c2c0;
        }
    }
    ctx->pc = 0x15C2DCu;
}
