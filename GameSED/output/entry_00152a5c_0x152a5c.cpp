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

// Function: entry_00152a5c
// Address: 0x152a5c - 0x152a88
void entry_00152a5c_0x152a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152a5c_0x152a5c");
#endif

    ctx->pc = 0x152a5cu;

    // 0x152a5c: 0x126000b6  beqz        $s3, . + 4 + (0xB6 << 2)
    ctx->pc = 0x152A5Cu;
    {
        const bool branch_taken_0x152a5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A5Cu;
        // 0x152a60: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a5c) {
            ctx->pc = 0x152D38u;
            return;
        }
    }
    ctx->pc = 0x152A64u;
    // 0x152a64: 0x12e000b4  beqz        $s7, . + 4 + (0xB4 << 2)
    ctx->pc = 0x152A64u;
    {
        const bool branch_taken_0x152a64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A64u;
        // 0x152a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a64) {
            ctx->pc = 0x152D38u;
            return;
        }
    }
    ctx->pc = 0x152A6Cu;
    // 0x152a6c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x152a70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152A70u;
    {
        const bool branch_taken_0x152a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A70u;
        // 0x152a74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a70) {
            ctx->pc = 0x152A88u;
            return;
        }
    }
    ctx->pc = 0x152A78u;
    // 0x152a78: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x152A78u;
    {
        const bool branch_taken_0x152a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A78u;
        // 0x152a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a78) {
            ctx->pc = 0x152AA0u;
            return;
        }
    }
    ctx->pc = 0x152A80u;
    // 0x152a80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x152A80u;
    {
        const bool branch_taken_0x152a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a80) {
            ctx->pc = 0x152AC4u;
            return;
        }
    }
    ctx->pc = 0x152A88u;
}
