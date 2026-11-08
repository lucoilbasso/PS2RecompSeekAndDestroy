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

// Function: entry_0015c700
// Address: 0x15c700 - 0x15c71c
void entry_0015c700_0x15c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c700_0x15c700");
#endif

    ctx->pc = 0x15c700u;

label_15c700:
    // 0x15c700: 0x24a5ff9c  addiu       $a1, $a1, -0x64
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967196));
    // 0x15c704: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x15c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15c708: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x15c708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x15c70c: 0x0  nop
    ctx->pc = 0x15c70cu;
    // NOP
    // 0x15c710: 0x0  nop
    ctx->pc = 0x15c710u;
    // NOP
    // 0x15c714: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C714u;
    {
        const bool branch_taken_0x15c714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C714u;
        // 0x15c718: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c714) {
            ctx->pc = 0x15C700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c700;
        }
    }
    ctx->pc = 0x15C71Cu;
}
