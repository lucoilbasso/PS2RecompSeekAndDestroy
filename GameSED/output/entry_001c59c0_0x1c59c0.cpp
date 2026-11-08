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

// Function: entry_001c59c0
// Address: 0x1c59c0 - 0x1c59e8
void entry_001c59c0_0x1c59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c59c0_0x1c59c0");
#endif

    ctx->pc = 0x1c59c0u;

    // 0x1c59c0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1c59c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1c59c4: 0x2623eec0  addiu       $v1, $s1, -0x1140
    ctx->pc = 0x1c59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962880));
    // 0x1c59c8: 0x2482f340  addiu       $v0, $a0, -0xCC0
    ctx->pc = 0x1c59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964032));
    // 0x1c59cc: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1c59ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x1c59d0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1c59d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1c59d4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C59D4u;
    {
        const bool branch_taken_0x1c59d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59D4u;
        // 0x1c59d8: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59d4) {
            ctx->pc = 0x1C59E8u;
            return;
        }
    }
    ctx->pc = 0x1C59DCu;
    // 0x1c59dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c59e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C59E0u;
    {
        const bool branch_taken_0x1c59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59E0u;
        // 0x1c59e4: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59e0) {
            ctx->pc = 0x1C59ECu;
            return;
        }
    }
    ctx->pc = 0x1C59E8u;
}
