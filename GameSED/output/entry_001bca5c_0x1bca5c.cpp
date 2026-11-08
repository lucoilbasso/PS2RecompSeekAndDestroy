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

// Function: entry_001bca5c
// Address: 0x1bca5c - 0x1bca78
void entry_001bca5c_0x1bca5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bca5c_0x1bca5c");
#endif

    ctx->pc = 0x1bca5cu;

    // 0x1bca5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCA5Cu;
    {
        const bool branch_taken_0x1bca5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA5Cu;
        // 0x1bca60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca5c) {
            ctx->pc = 0x1BCA80u;
            return;
        }
    }
    ctx->pc = 0x1BCA64u;
    // 0x1bca64: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x1bca64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1bca68: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BCA68u;
    {
        const bool branch_taken_0x1bca68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA68u;
        // 0x1bca6c: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca68) {
            ctx->pc = 0x1BCA28u;
            return;
        }
    }
    ctx->pc = 0x1BCA70u;
    // 0x1bca70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCA70u;
    {
        const bool branch_taken_0x1bca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA70u;
        // 0x1bca74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca70) {
            ctx->pc = 0x1BCA84u;
            return;
        }
    }
    ctx->pc = 0x1BCA78u;
}
