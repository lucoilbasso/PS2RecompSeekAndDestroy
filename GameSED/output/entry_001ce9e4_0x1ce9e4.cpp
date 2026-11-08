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

// Function: entry_001ce9e4
// Address: 0x1ce9e4 - 0x1ce9f4
void entry_001ce9e4_0x1ce9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9e4_0x1ce9e4");
#endif

    ctx->pc = 0x1ce9e4u;

    // 0x1ce9e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9E4u;
    {
        const bool branch_taken_0x1ce9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9e4) {
            ctx->pc = 0x1CE9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE9E4u;
            // 0x1ce9e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE9F4u;
            return;
        }
    }
    ctx->pc = 0x1CE9ECu;
    // 0x1ce9ec: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1ce9ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce9f0: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1ce9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x1ce9f4u;
}
