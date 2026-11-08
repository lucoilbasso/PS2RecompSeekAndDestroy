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

// Function: entry_0013f6e4
// Address: 0x13f6e4 - 0x13f6fc
void entry_0013f6e4_0x13f6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f6e4_0x13f6e4");
#endif

    ctx->pc = 0x13f6e4u;

    // 0x13f6e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x13f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x13f6e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F6E8u;
    {
        const bool branch_taken_0x13f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6e8) {
            ctx->pc = 0x13F6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F6E8u;
            // 0x13f6ec: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6FCu;
            return;
        }
    }
    ctx->pc = 0x13F6F0u;
    // 0x13f6f0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x13f6f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x13f6f8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x13f6fcu;
}
