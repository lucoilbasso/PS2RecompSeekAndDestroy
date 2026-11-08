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

// Function: entry_001b3588
// Address: 0x1b3588 - 0x1b35a8
void entry_001b3588_0x1b3588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3588_0x1b3588");
#endif

    ctx->pc = 0x1b3588u;

    // 0x1b3588: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x1b3588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
    // 0x1b358c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B358Cu;
    {
        const bool branch_taken_0x1b358c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B358Cu;
        // 0x1b3590: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b358c) {
            ctx->pc = 0x1B35A8u;
            return;
        }
    }
    ctx->pc = 0x1B3594u;
    // 0x1b3594: 0xae60041c  sw          $zero, 0x41C($s3)
    ctx->pc = 0x1b3594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 0));
    // 0x1b3598: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b359c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b35a0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1B35A0u;
    {
        const bool branch_taken_0x1b35a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35A0u;
        // 0x1b35a4: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35a0) {
            ctx->pc = 0x1B3674u;
            return;
        }
    }
    ctx->pc = 0x1B35A8u;
}
