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

// Function: entry_0018da40
// Address: 0x18da40 - 0x18da5c
void entry_0018da40_0x18da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da40_0x18da40");
#endif

    ctx->pc = 0x18da40u;

    // 0x18da40: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18da40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18da44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DA44u;
    {
        const bool branch_taken_0x18da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA44u;
        // 0x18da48: 0x24c2ffb0  addiu       $v0, $a2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da44) {
            ctx->pc = 0x18DA64u;
            return;
        }
    }
    ctx->pc = 0x18DA4Cu;
    // 0x18da4c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x18da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x18da50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18da54: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18da54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x18da58: 0x2442ffc9  addiu       $v0, $v0, -0x37
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
    ctx->pc = 0x18da5cu;
}
