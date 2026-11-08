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

// Function: entry_0010a6e8
// Address: 0x10a6e8 - 0x10a700
void entry_0010a6e8_0x10a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a6e8_0x10a6e8");
#endif

    ctx->pc = 0x10a6e8u;

    // 0x10a6e8: 0x12420039  beq         $s2, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x10A6E8u;
    {
        const bool branch_taken_0x10a6e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E8u;
        // 0x10a6ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e8) {
            ctx->pc = 0x10A7D0u;
            return;
        }
    }
    ctx->pc = 0x10A6F0u;
    // 0x10a6f0: 0x1242003d  beq         $s2, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x10A6F0u;
    {
        const bool branch_taken_0x10a6f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6F0u;
        // 0x10a6f4: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6f0) {
            ctx->pc = 0x10A7E8u;
            return;
        }
    }
    ctx->pc = 0x10A6F8u;
    // 0x10a6f8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x10A6F8u;
    {
        const bool branch_taken_0x10a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6f8) {
            ctx->pc = 0x10A868u;
            return;
        }
    }
    ctx->pc = 0x10A700u;
}
