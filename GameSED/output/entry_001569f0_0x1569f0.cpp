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

// Function: entry_001569f0
// Address: 0x1569f0 - 0x1569fc
void entry_001569f0_0x1569f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001569f0_0x1569f0");
#endif

    ctx->pc = 0x1569f0u;

    // 0x1569f0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1569f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1569F4u;
    {
        const bool branch_taken_0x1569f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1569f4) {
            ctx->pc = 0x1569F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1569F4u;
            // 0x1569f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156A08u;
            return;
        }
    }
    ctx->pc = 0x1569FCu;
}
