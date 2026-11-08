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

// Function: entry_0018f420
// Address: 0x18f420 - 0x18f438
void entry_0018f420_0x18f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f420_0x18f420");
#endif

    ctx->pc = 0x18f420u;

    // 0x18f420: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x18F420u;
    {
        const bool branch_taken_0x18f420 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F420u;
        // 0x18f424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f420) {
            ctx->pc = 0x18F458u;
            return;
        }
    }
    ctx->pc = 0x18F428u;
    // 0x18f428: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x18f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x18f42c: 0x2446d630  addiu       $a2, $v0, -0x29D0
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956592));
    // 0x18f430: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x18f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x18f434: 0x0  nop
    ctx->pc = 0x18f434u;
    // NOP
    ctx->pc = 0x18f438u;
}
