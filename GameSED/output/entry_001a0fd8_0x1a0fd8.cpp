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

// Function: entry_001a0fd8
// Address: 0x1a0fd8 - 0x1a1004
void entry_001a0fd8_0x1a0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0fd8_0x1a0fd8");
#endif

    ctx->pc = 0x1a0fd8u;

label_1a0fd8:
    // 0x1a0fd8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0FD8u;
    {
        const bool branch_taken_0x1a0fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FD8u;
        // 0x1a0fdc: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fd8) {
            ctx->pc = 0x1A1004u;
            return;
        }
    }
    ctx->pc = 0x1A0FE0u;
    // 0x1a0fe0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0fe4: 0x0  nop
    ctx->pc = 0x1a0fe4u;
    // NOP
    // 0x1a0fe8: 0x0  nop
    ctx->pc = 0x1a0fe8u;
    // NOP
    // 0x1a0fec: 0x0  nop
    ctx->pc = 0x1a0fecu;
    // NOP
    // 0x1a0ff0: 0x0  nop
    ctx->pc = 0x1a0ff0u;
    // NOP
    // 0x1a0ff4: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0FF4u;
    {
        const bool branch_taken_0x1a0ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a0ff4) {
            ctx->pc = 0x1A0FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0FF4u;
            // 0x1a0ff8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0fd8;
        }
    }
    ctx->pc = 0x1A0FFCu;
    // 0x1a0ffc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a0ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1000: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a1000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x1a1004u;
}
