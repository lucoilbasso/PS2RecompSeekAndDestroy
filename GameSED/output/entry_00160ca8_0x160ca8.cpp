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

// Function: entry_00160ca8
// Address: 0x160ca8 - 0x160cc4
void entry_00160ca8_0x160ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ca8_0x160ca8");
#endif

    ctx->pc = 0x160ca8u;

label_160ca8:
    // 0x160ca8: 0x24a5ff9c  addiu       $a1, $a1, -0x64
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967196));
    // 0x160cac: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x160cb0: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x160cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x160cb4: 0x0  nop
    ctx->pc = 0x160cb4u;
    // NOP
    // 0x160cb8: 0x0  nop
    ctx->pc = 0x160cb8u;
    // NOP
    // 0x160cbc: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160CBCu;
    {
        const bool branch_taken_0x160cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CBCu;
        // 0x160cc0: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cbc) {
            ctx->pc = 0x160CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160ca8;
        }
    }
    ctx->pc = 0x160CC4u;
}
