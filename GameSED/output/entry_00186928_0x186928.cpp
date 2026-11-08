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

// Function: entry_00186928
// Address: 0x186928 - 0x186950
void entry_00186928_0x186928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186928_0x186928");
#endif

    ctx->pc = 0x186928u;

label_186928:
    // 0x186928: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x186928u;
    {
        const bool branch_taken_0x186928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186928u;
        // 0x18692c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186928) {
            ctx->pc = 0x186950u;
            return;
        }
    }
    ctx->pc = 0x186930u;
    // 0x186930: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x186930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186934: 0x0  nop
    ctx->pc = 0x186934u;
    // NOP
    // 0x186938: 0x0  nop
    ctx->pc = 0x186938u;
    // NOP
    // 0x18693c: 0x0  nop
    ctx->pc = 0x18693cu;
    // NOP
    // 0x186940: 0x0  nop
    ctx->pc = 0x186940u;
    // NOP
    // 0x186944: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186944u;
    {
        const bool branch_taken_0x186944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186944) {
            ctx->pc = 0x186948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186944u;
            // 0x186948: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186928;
        }
    }
    ctx->pc = 0x18694Cu;
    // 0x18694c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186950u;
}
