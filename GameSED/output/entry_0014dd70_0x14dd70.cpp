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

// Function: entry_0014dd70
// Address: 0x14dd70 - 0x14dd88
void entry_0014dd70_0x14dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dd70_0x14dd70");
#endif

    ctx->pc = 0x14dd70u;

    // 0x14dd70: 0x2402030a  addiu       $v0, $zero, 0x30A
    ctx->pc = 0x14dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x14dd74: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DD74u;
    {
        const bool branch_taken_0x14dd74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD74u;
        // 0x14dd78: 0x24030309  addiu       $v1, $zero, 0x309 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd74) {
            ctx->pc = 0x14DD88u;
            return;
        }
    }
    ctx->pc = 0x14DD7Cu;
    // 0x14dd7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DD7Cu;
    {
        const bool branch_taken_0x14dd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD7Cu;
        // 0x14dd80: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd7c) {
            ctx->pc = 0x14DDA0u;
            return;
        }
    }
    ctx->pc = 0x14DD84u;
    // 0x14dd84: 0x0  nop
    ctx->pc = 0x14dd84u;
    // NOP
    ctx->pc = 0x14dd88u;
}
