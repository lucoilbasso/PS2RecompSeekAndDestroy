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

// Function: entry_001ae840
// Address: 0x1ae840 - 0x1ae854
void entry_001ae840_0x1ae840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae840_0x1ae840");
#endif

    ctx->pc = 0x1ae840u;

    // 0x1ae840: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ae840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ae844: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE844u;
    {
        const bool branch_taken_0x1ae844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE844u;
        // 0x1ae848: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae844) {
            ctx->pc = 0x1AE854u;
            return;
        }
    }
    ctx->pc = 0x1AE84Cu;
    // 0x1ae84c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1ae84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae850: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1ae850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->pc = 0x1ae854u;
}
