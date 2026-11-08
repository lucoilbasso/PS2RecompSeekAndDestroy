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

// Function: entry_00161e84
// Address: 0x161e84 - 0x161e90
void entry_00161e84_0x161e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161e84_0x161e84");
#endif

    ctx->pc = 0x161e84u;

    // 0x161e84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x161E84u;
    {
        const bool branch_taken_0x161e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E84u;
        // 0x161e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e84) {
            ctx->pc = 0x161E90u;
            return;
        }
    }
    ctx->pc = 0x161E8Cu;
    // 0x161e8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x161e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x161e90u;
}
