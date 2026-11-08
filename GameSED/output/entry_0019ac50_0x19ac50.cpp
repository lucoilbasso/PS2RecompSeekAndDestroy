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

// Function: entry_0019ac50
// Address: 0x19ac50 - 0x19ac70
void entry_0019ac50_0x19ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ac50_0x19ac50");
#endif

    ctx->pc = 0x19ac50u;

    // 0x19ac50: 0x2803e  dsrl32      $s0, $v0, 0
    ctx->pc = 0x19ac50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x19ac54: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC54u;
    {
        const bool branch_taken_0x19ac54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC54u;
        // 0x19ac58: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac54) {
            ctx->pc = 0x19AC70u;
            return;
        }
    }
    ctx->pc = 0x19AC5Cu;
    // 0x19ac5c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x19ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19ac60: 0x27b10001  addiu       $s1, $sp, 0x1
    ctx->pc = 0x19ac60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x19ac64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19AC64u;
    {
        const bool branch_taken_0x19ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC64u;
        // 0x19ac68: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac64) {
            ctx->pc = 0x19ACA4u;
            return;
        }
    }
    ctx->pc = 0x19AC6Cu;
    // 0x19ac6c: 0x0  nop
    ctx->pc = 0x19ac6cu;
    // NOP
    ctx->pc = 0x19ac70u;
}
