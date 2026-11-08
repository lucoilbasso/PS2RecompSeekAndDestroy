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

// Function: entry_001d4c70
// Address: 0x1d4c70 - 0x1d4c90
void entry_001d4c70_0x1d4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c70_0x1d4c70");
#endif

    ctx->pc = 0x1d4c70u;

    // 0x1d4c70: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1d4c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d4c74: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1d4c74u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d4c78: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d4c7c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1D4C7Cu;
    {
        const bool branch_taken_0x1d4c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C7Cu;
        // 0x1d4c80: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c7c) {
            ctx->pc = 0x1D4B58u;
            return;
        }
    }
    ctx->pc = 0x1D4C84u;
    // 0x1d4c84: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1D4C84u;
    {
        const bool branch_taken_0x1d4c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C84u;
        // 0x1d4c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c84) {
            ctx->pc = 0x1D4E04u;
            return;
        }
    }
    ctx->pc = 0x1D4C8Cu;
    // 0x1d4c8c: 0x0  nop
    ctx->pc = 0x1d4c8cu;
    // NOP
    ctx->pc = 0x1d4c90u;
}
