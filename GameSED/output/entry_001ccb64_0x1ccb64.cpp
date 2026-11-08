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

// Function: entry_001ccb64
// Address: 0x1ccb64 - 0x1ccb7c
void entry_001ccb64_0x1ccb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb64_0x1ccb64");
#endif

    ctx->pc = 0x1ccb64u;

    // 0x1ccb64: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCB64u;
    {
        const bool branch_taken_0x1ccb64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB64u;
        // 0x1ccb68: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb64) {
            ctx->pc = 0x1CCB7Cu;
            return;
        }
    }
    ctx->pc = 0x1CCB6Cu;
    // 0x1ccb6c: 0x84c40004  lh          $a0, 0x4($a2)
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ccb70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ccb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccb74: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CCB74u;
    {
        const bool branch_taken_0x1ccb74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB74u;
        // 0x1ccb78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb74) {
            ctx->pc = 0x1CCBA8u;
            return;
        }
    }
    ctx->pc = 0x1CCB7Cu;
}
