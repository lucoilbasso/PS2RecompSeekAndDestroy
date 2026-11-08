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

// Function: entry_001091c0
// Address: 0x1091c0 - 0x1091d0
void entry_001091c0_0x1091c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091c0_0x1091c0");
#endif

    ctx->pc = 0x1091c0u;

    // 0x1091c0: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1091c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1091c4: 0x52000040  beql        $s0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x1091C4u;
    {
        const bool branch_taken_0x1091c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1091c4) {
            ctx->pc = 0x1091C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1091C4u;
            // 0x1091c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1092C8u;
            return;
        }
    }
    ctx->pc = 0x1091CCu;
    // 0x1091cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1091ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1091d0u;
}
