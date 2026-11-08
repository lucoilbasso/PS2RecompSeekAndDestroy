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

// Function: entry_001b93cc
// Address: 0x1b93cc - 0x1b93dc
void entry_001b93cc_0x1b93cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b93cc_0x1b93cc");
#endif

    ctx->pc = 0x1b93ccu;

    // 0x1b93cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b93d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b93d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B93D4u;
    {
        const bool branch_taken_0x1b93d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93D4u;
        // 0x1b93d8: 0x90620042  lbu         $v0, 0x42($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93d4) {
            ctx->pc = 0x1B93F0u;
            return;
        }
    }
    ctx->pc = 0x1B93DCu;
}
