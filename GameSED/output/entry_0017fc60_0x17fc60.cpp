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

// Function: entry_0017fc60
// Address: 0x17fc60 - 0x17fc88
void entry_0017fc60_0x17fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fc60_0x17fc60");
#endif

    ctx->pc = 0x17fc60u;

    // 0x17fc60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17fc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc64: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x17fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17fc68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17fc68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc6c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x17fc70: 0x262f021  addu        $fp, $s3, $v0
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17fc74: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x17fc78: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x17fc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x17fc7c: 0x1ac00017  blez        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x17FC7Cu;
    {
        const bool branch_taken_0x17fc7c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x17FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC7Cu;
        // 0x17fc80: 0x264a021  addu        $s4, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc7c) {
            ctx->pc = 0x17FCDCu;
            return;
        }
    }
    ctx->pc = 0x17FC84u;
    // 0x17fc84: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x17fc84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17fc88u;
}
