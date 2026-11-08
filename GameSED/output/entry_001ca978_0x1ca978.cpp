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

// Function: entry_001ca978
// Address: 0x1ca978 - 0x1ca998
void entry_001ca978_0x1ca978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca978_0x1ca978");
#endif

    ctx->pc = 0x1ca978u;

    // 0x1ca978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca97c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1ca97cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca980: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CA980u;
    {
        const bool branch_taken_0x1ca980 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA980u;
        // 0x1ca984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca980) {
            ctx->pc = 0x1CA9D8u;
            return;
        }
    }
    ctx->pc = 0x1CA988u;
    // 0x1ca988: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ca988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ca98c: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1ca98cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca990: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1ca990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca994: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ca994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ca998u;
}
