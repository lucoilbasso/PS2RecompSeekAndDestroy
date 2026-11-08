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

// Function: entry_001ce0a8
// Address: 0x1ce0a8 - 0x1ce0c0
void entry_001ce0a8_0x1ce0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce0a8_0x1ce0a8");
#endif

    ctx->pc = 0x1ce0a8u;

    // 0x1ce0a8: 0x8fa20d8c  lw          $v0, 0xD8C($sp)
    ctx->pc = 0x1ce0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x1ce0ac: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE0ACu;
    {
        const bool branch_taken_0x1ce0ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0ACu;
        // 0x1ce0b0: 0xde7e0018  ld          $fp, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0ac) {
            ctx->pc = 0x1CE0C0u;
            return;
        }
    }
    ctx->pc = 0x1CE0B4u;
    // 0x1ce0b4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1CE0B4u;
    {
        const bool branch_taken_0x1ce0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0B4u;
        // 0x1ce0b8: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0b4) {
            ctx->pc = 0x1CE1B0u;
            return;
        }
    }
    ctx->pc = 0x1CE0BCu;
    // 0x1ce0bc: 0x0  nop
    ctx->pc = 0x1ce0bcu;
    // NOP
    ctx->pc = 0x1ce0c0u;
}
