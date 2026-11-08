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

// Function: entry_0010f0d4
// Address: 0x10f0d4 - 0x10f0e8
void entry_0010f0d4_0x10f0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f0d4_0x10f0d4");
#endif

    ctx->pc = 0x10f0d4u;

    // 0x10f0d4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F0D4u;
    {
        const bool branch_taken_0x10f0d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D4u;
        // 0x10f0d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0d4) {
            ctx->pc = 0x10F0E8u;
            return;
        }
    }
    ctx->pc = 0x10F0DCu;
    // 0x10f0dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10F0DCu;
    {
        const bool branch_taken_0x10f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0DCu;
        // 0x10f0e0: 0x8c820c08  lw          $v0, 0xC08($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0dc) {
            ctx->pc = 0x10F108u;
            return;
        }
    }
    ctx->pc = 0x10F0E4u;
    // 0x10f0e4: 0x0  nop
    ctx->pc = 0x10f0e4u;
    // NOP
    ctx->pc = 0x10f0e8u;
}
