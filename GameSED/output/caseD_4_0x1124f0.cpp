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

// Function: caseD_4
// Address: 0x1124f0 - 0x112500
void caseD_4_0x1124f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1124f0");
#endif

    ctx->pc = 0x1124f0u;

    // 0x1124f0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124f4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1124F8u;
    {
        const bool branch_taken_0x1124f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124F8u;
        // 0x1124fc: 0xac710020  sw          $s1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124f8) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x112500u;
}
