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

// Function: entry_001738e8
// Address: 0x1738e8 - 0x1738fc
void entry_001738e8_0x1738e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001738e8_0x1738e8");
#endif

    ctx->pc = 0x1738e8u;

    // 0x1738e8: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x1738e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1738ec: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1738ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1738f0: 0x1440fdf3  bnez        $v0, . + 4 + (-0x20D << 2)
    ctx->pc = 0x1738F0u;
    {
        const bool branch_taken_0x1738f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1738F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738F0u;
        // 0x1738f4: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738f0) {
            ctx->pc = 0x1730C0u;
            return;
        }
    }
    ctx->pc = 0x1738F8u;
    // 0x1738f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1738f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1738fcu;
}
