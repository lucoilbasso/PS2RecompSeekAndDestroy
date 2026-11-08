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

// Function: entry_0017f190
// Address: 0x17f190 - 0x17f1b4
void entry_0017f190_0x17f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f190_0x17f190");
#endif

    ctx->pc = 0x17f190u;

label_17f190:
    // 0x17f190: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17f194: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x17f194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x17f198: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17f198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17f19c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f1a0: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x17f1a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x17f1a4: 0x1231018  mult        $v0, $t1, $v1
    ctx->pc = 0x17f1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f1a8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x17f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17f1ac: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F1ACu;
    {
        const bool branch_taken_0x17f1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1ACu;
        // 0x17f1b0: 0x24650002  addiu       $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1ac) {
            ctx->pc = 0x17F190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f190;
        }
    }
    ctx->pc = 0x17F1B4u;
}
