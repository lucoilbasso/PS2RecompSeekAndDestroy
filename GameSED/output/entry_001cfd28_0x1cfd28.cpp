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

// Function: entry_001cfd28
// Address: 0x1cfd28 - 0x1cfd40
void entry_001cfd28_0x1cfd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfd28_0x1cfd28");
#endif

    ctx->pc = 0x1cfd28u;

    // 0x1cfd28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFD28u;
    {
        const bool branch_taken_0x1cfd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD28u;
        // 0x1cfd2c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd28) {
            ctx->pc = 0x1CFD40u;
            return;
        }
    }
    ctx->pc = 0x1CFD30u;
    // 0x1cfd30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1cfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1cfd34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cfd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cfd38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFD38u;
    {
        const bool branch_taken_0x1cfd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD38u;
        // 0x1cfd3c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd38) {
            ctx->pc = 0x1CFD54u;
            return;
        }
    }
    ctx->pc = 0x1CFD40u;
}
