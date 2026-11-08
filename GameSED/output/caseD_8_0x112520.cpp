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

// Function: caseD_8
// Address: 0x112520 - 0x112538
void caseD_8_0x112520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x112520");
#endif

    ctx->pc = 0x112520u;

    // 0x112520: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112524: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x112524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112528: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x112528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11252c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x112530: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x112530u;
    {
        const bool branch_taken_0x112530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112530u;
        // 0x112534: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112530) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x112538u;
}
