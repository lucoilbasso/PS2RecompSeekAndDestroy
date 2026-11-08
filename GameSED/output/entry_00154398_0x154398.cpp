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

// Function: entry_00154398
// Address: 0x154398 - 0x1543b0
void entry_00154398_0x154398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154398_0x154398");
#endif

    ctx->pc = 0x154398u;

    // 0x154398: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154398u;
    {
        const bool branch_taken_0x154398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154398u;
        // 0x15439c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154398) {
            ctx->pc = 0x1543B8u;
            return;
        }
    }
    ctx->pc = 0x1543A0u;
    // 0x1543a0: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1543A0u;
    {
        const bool branch_taken_0x1543a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1543A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543A0u;
        // 0x1543a4: 0x2663079c  addiu       $v1, $s3, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543a0) {
            ctx->pc = 0x1543D0u;
            return;
        }
    }
    ctx->pc = 0x1543A8u;
    // 0x1543a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1543A8u;
    {
        const bool branch_taken_0x1543a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543a8) {
            ctx->pc = 0x1543DCu;
            return;
        }
    }
    ctx->pc = 0x1543B0u;
}
