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

// Function: entry_0011570c
// Address: 0x11570c - 0x115718
void entry_0011570c_0x11570c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011570c_0x11570c");
#endif

    ctx->pc = 0x11570cu;

    // 0x11570c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115710: 0x1642ff99  bne         $s2, $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x115710u;
    {
        const bool branch_taken_0x115710 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x115714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115710u;
        // 0x115714: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115710) {
            ctx->pc = 0x115578u;
            return;
        }
    }
    ctx->pc = 0x115718u;
}
