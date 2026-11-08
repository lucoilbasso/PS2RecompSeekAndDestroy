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

// Function: entry_0017fb70
// Address: 0x17fb70 - 0x17fb80
void entry_0017fb70_0x17fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fb70_0x17fb70");
#endif

    ctx->pc = 0x17fb70u;

    // 0x17fb70: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17fb74: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x17fb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17fb78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FB78u;
    {
        const bool branch_taken_0x17fb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB78u;
        // 0x17fb7c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb78) {
            ctx->pc = 0x17FB60u;
            return;
        }
    }
    ctx->pc = 0x17FB80u;
}
