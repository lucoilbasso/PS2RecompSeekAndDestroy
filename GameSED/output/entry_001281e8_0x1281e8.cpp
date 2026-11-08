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

// Function: entry_001281e8
// Address: 0x1281e8 - 0x1281f8
void entry_001281e8_0x1281e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001281e8_0x1281e8");
#endif

    ctx->pc = 0x1281e8u;

    // 0x1281e8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1281e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1281ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1281ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1281f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1281F0u;
    {
        const bool branch_taken_0x1281f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281F0u;
        // 0x1281f4: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281f0) {
            ctx->pc = 0x128200u;
            return;
        }
    }
    ctx->pc = 0x1281F8u;
}
