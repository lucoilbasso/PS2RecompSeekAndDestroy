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

// Function: entry_0014d0b0
// Address: 0x14d0b0 - 0x14d0c4
void entry_0014d0b0_0x14d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d0b0_0x14d0b0");
#endif

    ctx->pc = 0x14d0b0u;

    // 0x14d0b0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D0B0u;
    {
        const bool branch_taken_0x14d0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0B0u;
        // 0x14d0b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0b0) {
            ctx->pc = 0x14D0E0u;
            return;
        }
    }
    ctx->pc = 0x14D0B8u;
    // 0x14d0b8: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x14d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x14d0bc: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D0BCu;
    {
        const bool branch_taken_0x14d0bc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14d0bc) {
            ctx->pc = 0x14D0E0u;
            return;
        }
    }
    ctx->pc = 0x14D0C4u;
}
