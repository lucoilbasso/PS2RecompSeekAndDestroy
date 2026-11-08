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

// Function: entry_001ca0f4
// Address: 0x1ca0f4 - 0x1ca110
void entry_001ca0f4_0x1ca0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca0f4_0x1ca0f4");
#endif

    ctx->pc = 0x1ca0f4u;

    // 0x1ca0f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0f8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ca0fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1ca0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1ca100: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ca100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ca104: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1CA104u;
    {
        const bool branch_taken_0x1ca104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA104u;
        // 0x1ca108: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca104) {
            ctx->pc = 0x1CA294u;
            return;
        }
    }
    ctx->pc = 0x1CA10Cu;
    // 0x1ca10c: 0x0  nop
    ctx->pc = 0x1ca10cu;
    // NOP
    ctx->pc = 0x1ca110u;
}
