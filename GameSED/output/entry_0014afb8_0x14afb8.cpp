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

// Function: entry_0014afb8
// Address: 0x14afb8 - 0x14afd0
void entry_0014afb8_0x14afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014afb8_0x14afb8");
#endif

    ctx->pc = 0x14afb8u;

    // 0x14afb8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14afbc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x14afbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14afc0: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AFC0u;
    {
        const bool branch_taken_0x14afc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x14afc0) {
            ctx->pc = 0x14AFD0u;
            return;
        }
    }
    ctx->pc = 0x14AFC8u;
    // 0x14afc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14AFC8u;
    {
        const bool branch_taken_0x14afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFC8u;
        // 0x14afcc: 0x8e620188  lw          $v0, 0x188($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afc8) {
            ctx->pc = 0x14B018u;
            return;
        }
    }
    ctx->pc = 0x14AFD0u;
}
