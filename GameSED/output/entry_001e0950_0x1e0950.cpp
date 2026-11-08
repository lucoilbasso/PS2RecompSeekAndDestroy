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

// Function: entry_001e0950
// Address: 0x1e0950 - 0x1e0978
void entry_001e0950_0x1e0950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0950_0x1e0950");
#endif

    ctx->pc = 0x1e0950u;

label_1e0950:
    // 0x1e0950: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0950u;
    {
        const bool branch_taken_0x1e0950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0950u;
        // 0x1e0954: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0950) {
            ctx->pc = 0x1E0978u;
            return;
        }
    }
    ctx->pc = 0x1E0958u;
    // 0x1e0958: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e0958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e095c: 0x0  nop
    ctx->pc = 0x1e095cu;
    // NOP
    // 0x1e0960: 0x0  nop
    ctx->pc = 0x1e0960u;
    // NOP
    // 0x1e0964: 0x0  nop
    ctx->pc = 0x1e0964u;
    // NOP
    // 0x1e0968: 0x0  nop
    ctx->pc = 0x1e0968u;
    // NOP
    // 0x1e096c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E096Cu;
    {
        const bool branch_taken_0x1e096c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e096c) {
            ctx->pc = 0x1E0970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E096Cu;
            // 0x1e0970: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0950;
        }
    }
    ctx->pc = 0x1E0974u;
    // 0x1e0974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e0978u;
}
