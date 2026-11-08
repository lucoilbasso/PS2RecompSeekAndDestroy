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

// Function: entry_00165a38
// Address: 0x165a38 - 0x165a44
void entry_00165a38_0x165a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a38_0x165a38");
#endif

    ctx->pc = 0x165a38u;

    // 0x165a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x165A3Cu;
    {
        const bool branch_taken_0x165a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a3c) {
            ctx->pc = 0x165A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A3Cu;
            // 0x165a40: 0x90830c00  lbu         $v1, 0xC00($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A50u;
            return;
        }
    }
    ctx->pc = 0x165A44u;
}
