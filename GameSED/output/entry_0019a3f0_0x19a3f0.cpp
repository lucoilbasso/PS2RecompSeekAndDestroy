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

// Function: entry_0019a3f0
// Address: 0x19a3f0 - 0x19a400
void entry_0019a3f0_0x19a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a3f0_0x19a3f0");
#endif

    ctx->pc = 0x19a3f0u;

    // 0x19a3f0: 0x8ce3009c  lw          $v1, 0x9C($a3)
    ctx->pc = 0x19a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x19a3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a3f8: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19A3F8u;
    {
        const bool branch_taken_0x19a3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a3f8) {
            ctx->pc = 0x19A3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A3F8u;
            // 0x19a3fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A400u;
            return;
        }
    }
    ctx->pc = 0x19A400u;
}
