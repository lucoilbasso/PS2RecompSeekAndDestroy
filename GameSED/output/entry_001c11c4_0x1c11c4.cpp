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

// Function: entry_001c11c4
// Address: 0x1c11c4 - 0x1c11e4
void entry_001c11c4_0x1c11c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c11c4_0x1c11c4");
#endif

    ctx->pc = 0x1c11c4u;

    // 0x1c11c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c11c8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1c11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1c11cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c11ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c11d0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1c11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1c11d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c11d8: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x1c11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
    // 0x1c11dc: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x1C11DCu;
    {
        const bool branch_taken_0x1c11dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11DCu;
        // 0x1c11e0: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11dc) {
            ctx->pc = 0x1C1058u;
            return;
        }
    }
    ctx->pc = 0x1C11E4u;
}
