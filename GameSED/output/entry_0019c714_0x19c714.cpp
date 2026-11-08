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

// Function: entry_0019c714
// Address: 0x19c714 - 0x19c728
void entry_0019c714_0x19c714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c714_0x19c714");
#endif

    ctx->pc = 0x19c714u;

    // 0x19c714: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19c714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19c718: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x19c71c: 0x9024f4d8  lbu         $a0, -0xB28($at)
    ctx->pc = 0x19c71cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964440)));
    // 0x19c720: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C720u;
    {
        const bool branch_taken_0x19c720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c720) {
            ctx->pc = 0x19C724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C720u;
            // 0x19c724: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C73Cu;
            return;
        }
    }
    ctx->pc = 0x19C728u;
}
