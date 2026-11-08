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

// Function: entry_001868e8
// Address: 0x1868e8 - 0x18690c
void entry_001868e8_0x1868e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001868e8_0x1868e8");
#endif

    ctx->pc = 0x1868e8u;

label_1868e8:
    // 0x1868e8: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1868E8u;
    {
        const bool branch_taken_0x1868e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1868ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868E8u;
        // 0x1868ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868e8) {
            ctx->pc = 0x186910u;
            return;
        }
    }
    ctx->pc = 0x1868F0u;
    // 0x1868f0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1868f4: 0x0  nop
    ctx->pc = 0x1868f4u;
    // NOP
    // 0x1868f8: 0x0  nop
    ctx->pc = 0x1868f8u;
    // NOP
    // 0x1868fc: 0x0  nop
    ctx->pc = 0x1868fcu;
    // NOP
    // 0x186900: 0x0  nop
    ctx->pc = 0x186900u;
    // NOP
    // 0x186904: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186904u;
    {
        const bool branch_taken_0x186904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186904) {
            ctx->pc = 0x186908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186904u;
            // 0x186908: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1868E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1868e8;
        }
    }
    ctx->pc = 0x18690Cu;
}
