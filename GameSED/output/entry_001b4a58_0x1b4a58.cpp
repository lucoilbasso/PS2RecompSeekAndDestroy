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

// Function: entry_001b4a58
// Address: 0x1b4a58 - 0x1b4a78
void entry_001b4a58_0x1b4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4a58_0x1b4a58");
#endif

    ctx->pc = 0x1b4a58u;

    // 0x1b4a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a5c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b4a60: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4A60u;
    {
        const bool branch_taken_0x1b4a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A60u;
        // 0x1b4a64: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a60) {
            ctx->pc = 0x1B4AA4u;
            return;
        }
    }
    ctx->pc = 0x1B4A68u;
    // 0x1b4a68: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b4a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4a6c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b4a70: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1b4a70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x1b4a74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b4a78u;
}
