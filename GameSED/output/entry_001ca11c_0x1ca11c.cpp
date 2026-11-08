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

// Function: entry_001ca11c
// Address: 0x1ca11c - 0x1ca138
void entry_001ca11c_0x1ca11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca11c_0x1ca11c");
#endif

    ctx->pc = 0x1ca11cu;

    // 0x1ca11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca120: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ca120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca124: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1ca124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1ca128: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ca128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ca12c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1CA12Cu;
    {
        const bool branch_taken_0x1ca12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA12Cu;
        // 0x1ca130: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca12c) {
            ctx->pc = 0x1CA294u;
            return;
        }
    }
    ctx->pc = 0x1CA134u;
    // 0x1ca134: 0x0  nop
    ctx->pc = 0x1ca134u;
    // NOP
    ctx->pc = 0x1ca138u;
}
