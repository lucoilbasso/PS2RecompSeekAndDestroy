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

// Function: entry_0015aa98
// Address: 0x15aa98 - 0x15aaa8
void entry_0015aa98_0x15aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa98_0x15aa98");
#endif

    ctx->pc = 0x15aa98u;

    // 0x15aa98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AA98u;
    {
        const bool branch_taken_0x15aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA98u;
        // 0x15aa9c: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa98) {
            ctx->pc = 0x15AAA8u;
            return;
        }
    }
    ctx->pc = 0x15AAA0u;
    // 0x15aaa0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15aaa4: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x15aaa4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    ctx->pc = 0x15aaa8u;
}
