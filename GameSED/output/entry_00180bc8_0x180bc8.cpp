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

// Function: entry_00180bc8
// Address: 0x180bc8 - 0x180bd4
void entry_00180bc8_0x180bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180bc8_0x180bc8");
#endif

    ctx->pc = 0x180bc8u;

    // 0x180bc8: 0x5480ff2d  bnel        $a0, $zero, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x180BC8u;
    {
        const bool branch_taken_0x180bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x180bc8) {
            ctx->pc = 0x180BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180BC8u;
            // 0x180bcc: 0x8da5000c  lw          $a1, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180880u;
            return;
        }
    }
    ctx->pc = 0x180BD0u;
    // 0x180bd0: 0x97020002  lhu         $v0, 0x2($t8)
    ctx->pc = 0x180bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    ctx->pc = 0x180bd4u;
}
