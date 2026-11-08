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

// Function: entry_001bc928
// Address: 0x1bc928 - 0x1bc93c
void entry_001bc928_0x1bc928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc928_0x1bc928");
#endif

    ctx->pc = 0x1bc928u;

    // 0x1bc928: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC928u;
    {
        const bool branch_taken_0x1bc928 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x1BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC928u;
        // 0x1bc92c: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc928) {
            ctx->pc = 0x1BC93Cu;
            return;
        }
    }
    ctx->pc = 0x1BC930u;
    // 0x1bc930: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x1bc930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1bc934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC934u;
    {
        const bool branch_taken_0x1bc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC934u;
        // 0x1bc938: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc934) {
            ctx->pc = 0x1BC940u;
            return;
        }
    }
    ctx->pc = 0x1BC93Cu;
}
