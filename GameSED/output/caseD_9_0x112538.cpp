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

// Function: caseD_9
// Address: 0x112538 - 0x112550
void caseD_9_0x112538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x112538");
#endif

    ctx->pc = 0x112538u;

    // 0x112538: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11253c: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x11253cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112540: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x112540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x112544: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x112544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x112548: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112548u;
    {
        const bool branch_taken_0x112548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112548u;
        // 0x11254c: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112548) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x112550u;
}
