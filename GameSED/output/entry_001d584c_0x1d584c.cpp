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

// Function: entry_001d584c
// Address: 0x1d584c - 0x1d5870
void entry_001d584c_0x1d584c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d584c_0x1d584c");
#endif

    ctx->pc = 0x1d584cu;

    // 0x1d584c: 0x264b0014  addiu       $t3, $s2, 0x14
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1d5850: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d5854: 0x1628821  addu        $s1, $t3, $v0
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1d5858: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1d5858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d585c: 0x260d0014  addiu       $t5, $s0, 0x14
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1d5860: 0x171182b  sltu        $v1, $t3, $s1
    ctx->pc = 0x1d5860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d5864: 0x1a27021  addu        $t6, $t5, $v0
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1d5868: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1D5868u;
    {
        const bool branch_taken_0x1d5868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5868u;
        // 0x1d586c: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5868) {
            ctx->pc = 0x1D5964u;
            return;
        }
    }
    ctx->pc = 0x1D5870u;
}
