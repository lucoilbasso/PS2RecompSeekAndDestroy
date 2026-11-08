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

// Function: entry_00184be0
// Address: 0x184be0 - 0x184bf8
void entry_00184be0_0x184be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184be0_0x184be0");
#endif

    ctx->pc = 0x184be0u;

    // 0x184be0: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x184be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x184be4: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x184BE4u;
    {
        const bool branch_taken_0x184be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x184BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BE4u;
        // 0x184be8: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184be4) {
            ctx->pc = 0x184BF8u;
            return;
        }
    }
    ctx->pc = 0x184BECu;
    // 0x184bec: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x184becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x184bf0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184BF0u;
    {
        const bool branch_taken_0x184bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x184bf0) {
            ctx->pc = 0x184C04u;
            return;
        }
    }
    ctx->pc = 0x184BF8u;
}
