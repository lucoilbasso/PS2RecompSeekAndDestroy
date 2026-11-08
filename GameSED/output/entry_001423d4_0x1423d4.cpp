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

// Function: entry_001423d4
// Address: 0x1423d4 - 0x1423e0
void entry_001423d4_0x1423d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001423d4_0x1423d4");
#endif

    ctx->pc = 0x1423d4u;

    // 0x1423d4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1423d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1423d8: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1423D8u;
    {
        const bool branch_taken_0x1423d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1423DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423D8u;
        // 0x1423dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423d8) {
            ctx->pc = 0x1423F4u;
            return;
        }
    }
    ctx->pc = 0x1423E0u;
}
