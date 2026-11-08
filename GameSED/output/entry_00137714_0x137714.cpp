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

// Function: entry_00137714
// Address: 0x137714 - 0x137724
void entry_00137714_0x137714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137714_0x137714");
#endif

    ctx->pc = 0x137714u;

    // 0x137714: 0x24032118  addiu       $v1, $zero, 0x2118
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x137718: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x137718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13771c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x13771Cu;
    {
        const bool branch_taken_0x13771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13771c) {
            ctx->pc = 0x137720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13771Cu;
            // 0x137720: 0x8c840260  lw          $a0, 0x260($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137724u;
            return;
        }
    }
    ctx->pc = 0x137724u;
}
