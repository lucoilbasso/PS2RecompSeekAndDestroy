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

// Function: entry_001d5ff0
// Address: 0x1d5ff0 - 0x1d6018
void entry_001d5ff0_0x1d5ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ff0_0x1d5ff0");
#endif

    ctx->pc = 0x1d5ff0u;

    // 0x1d5ff0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1d5ff4: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x1d5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d5ff8: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x1d5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5ffc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6000: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d6000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d6004: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6008: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x1d6008u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1d600c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6010: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D6010u;
    {
        const bool branch_taken_0x1d6010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6010u;
        // 0x1d6014: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6010) {
            ctx->pc = 0x1D6048u;
            return;
        }
    }
    ctx->pc = 0x1D6018u;
}
