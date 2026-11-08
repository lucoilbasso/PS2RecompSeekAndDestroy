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

// Function: entry_001b399c
// Address: 0x1b399c - 0x1b39c0
void entry_001b399c_0x1b399c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b399c_0x1b399c");
#endif

    ctx->pc = 0x1b399cu;

    // 0x1b399c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b399cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39a0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b39a4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B39A4u;
    {
        const bool branch_taken_0x1b39a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39A4u;
        // 0x1b39a8: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39a4) {
            ctx->pc = 0x1B39ECu;
            return;
        }
    }
    ctx->pc = 0x1B39ACu;
    // 0x1b39ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b39acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b39b0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b39b4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b39b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b39b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b39bc: 0x0  nop
    ctx->pc = 0x1b39bcu;
    // NOP
    ctx->pc = 0x1b39c0u;
}
