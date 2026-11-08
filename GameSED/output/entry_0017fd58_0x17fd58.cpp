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

// Function: entry_0017fd58
// Address: 0x17fd58 - 0x17fd74
void entry_0017fd58_0x17fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fd58_0x17fd58");
#endif

    ctx->pc = 0x17fd58u;

label_17fd58:
    // 0x17fd58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17fd5c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17fd60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17fd64: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x17fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17fd68: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17fd6c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FD6Cu;
    {
        const bool branch_taken_0x17fd6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD6Cu;
        // 0x17fd70: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd6c) {
            ctx->pc = 0x17FD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fd58;
        }
    }
    ctx->pc = 0x17FD74u;
}
