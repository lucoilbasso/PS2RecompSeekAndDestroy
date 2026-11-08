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

// Function: entry_001b5144
// Address: 0x1b5144 - 0x1b5160
void entry_001b5144_0x1b5144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5144_0x1b5144");
#endif

    ctx->pc = 0x1b5144u;

    // 0x1b5144: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B5144u;
    {
        const bool branch_taken_0x1b5144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5144u;
        // 0x1b5148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5144) {
            ctx->pc = 0x1B5188u;
            return;
        }
    }
    ctx->pc = 0x1B514Cu;
    // 0x1b514c: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1b514cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1b5150: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5154: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b5154u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5158: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b5158u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b515c: 0x0  nop
    ctx->pc = 0x1b515cu;
    // NOP
    ctx->pc = 0x1b5160u;
}
