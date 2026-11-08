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

// Function: entry_0019cc50
// Address: 0x19cc50 - 0x19cc64
void entry_0019cc50_0x19cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc50_0x19cc50");
#endif

    ctx->pc = 0x19cc50u;

    // 0x19cc50: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CC50u;
    {
        const bool branch_taken_0x19cc50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC50u;
        // 0x19cc54: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc50) {
            ctx->pc = 0x19CC64u;
            return;
        }
    }
    ctx->pc = 0x19CC58u;
    // 0x19cc58: 0x55800008  bnel        $t4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC58u;
    {
        const bool branch_taken_0x19cc58 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cc58) {
            ctx->pc = 0x19CC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CC58u;
            // 0x19cc5c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CC7Cu;
            return;
        }
    }
    ctx->pc = 0x19CC60u;
    // 0x19cc60: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x19cc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19cc64u;
}
