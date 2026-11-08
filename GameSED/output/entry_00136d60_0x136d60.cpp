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

// Function: entry_00136d60
// Address: 0x136d60 - 0x136d78
void entry_00136d60_0x136d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d60_0x136d60");
#endif

    ctx->pc = 0x136d60u;

    // 0x136d60: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x136d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x136d64: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136D64u;
    {
        const bool branch_taken_0x136d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x136d64) {
            ctx->pc = 0x136D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136D64u;
            // 0x136d68: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136D78u;
            return;
        }
    }
    ctx->pc = 0x136D6Cu;
    // 0x136d6c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136d70: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x136D70u;
    {
        const bool branch_taken_0x136d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D70u;
        // 0x136d74: 0x2442a380  addiu       $v0, $v0, -0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d70) {
            ctx->pc = 0x136E08u;
            return;
        }
    }
    ctx->pc = 0x136D78u;
}
