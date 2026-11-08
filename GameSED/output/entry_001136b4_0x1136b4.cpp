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

// Function: entry_001136b4
// Address: 0x1136b4 - 0x1136d8
void entry_001136b4_0x1136b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001136b4_0x1136b4");
#endif

    ctx->pc = 0x1136b4u;

label_1136b4:
    // 0x1136b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1136b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1136b8: 0x0  nop
    ctx->pc = 0x1136b8u;
    // NOP
    // 0x1136bc: 0x0  nop
    ctx->pc = 0x1136bcu;
    // NOP
    // 0x1136c0: 0x0  nop
    ctx->pc = 0x1136c0u;
    // NOP
    // 0x1136c4: 0x0  nop
    ctx->pc = 0x1136c4u;
    // NOP
    // 0x1136c8: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1136C8u;
    {
        const bool branch_taken_0x1136c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1136c8) {
            ctx->pc = 0x1136CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1136C8u;
            // 0x1136cc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1136b4;
        }
    }
    ctx->pc = 0x1136D0u;
    // 0x1136d0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1136d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1136d4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1136d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1136d8u;
}
