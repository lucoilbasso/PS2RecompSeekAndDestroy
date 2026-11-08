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

// Function: entry_001b3b64
// Address: 0x1b3b64 - 0x1b3b88
void entry_001b3b64_0x1b3b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b64_0x1b3b64");
#endif

    ctx->pc = 0x1b3b64u;

    // 0x1b3b64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b3b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b68: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b3b6c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3B6Cu;
    {
        const bool branch_taken_0x1b3b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B6Cu;
        // 0x1b3b70: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b6c) {
            ctx->pc = 0x1B3BB4u;
            return;
        }
    }
    ctx->pc = 0x1B3B74u;
    // 0x1b3b74: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b3b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3b78: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b3b78u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b3b7c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b3b7cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b3b80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b3b84: 0x0  nop
    ctx->pc = 0x1b3b84u;
    // NOP
    ctx->pc = 0x1b3b88u;
}
