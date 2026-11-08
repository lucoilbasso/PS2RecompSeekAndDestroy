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

// Function: entry_001a22a8
// Address: 0x1a22a8 - 0x1a22cc
void entry_001a22a8_0x1a22a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a22a8_0x1a22a8");
#endif

    ctx->pc = 0x1a22a8u;

label_1a22a8:
    // 0x1a22a8: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x1a22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1a22ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A22ACu;
    {
        const bool branch_taken_0x1a22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22ac) {
            ctx->pc = 0x1A22B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A22ACu;
            // 0x1a22b0: 0x94c30002  lhu         $v1, 0x2($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A22D0u;
            return;
        }
    }
    ctx->pc = 0x1A22B4u;
    // 0x1a22b4: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1a22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a22b8: 0x0  nop
    ctx->pc = 0x1a22b8u;
    // NOP
    // 0x1a22bc: 0x0  nop
    ctx->pc = 0x1a22bcu;
    // NOP
    // 0x1a22c0: 0x0  nop
    ctx->pc = 0x1a22c0u;
    // NOP
    // 0x1a22c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A22C4u;
    {
        const bool branch_taken_0x1a22c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a22c4) {
            ctx->pc = 0x1A22C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A22C4u;
            // 0x1a22c8: 0x8cc60028  lw          $a2, 0x28($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A22A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a22a8;
        }
    }
    ctx->pc = 0x1A22CCu;
}
