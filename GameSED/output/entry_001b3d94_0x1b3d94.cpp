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

// Function: entry_001b3d94
// Address: 0x1b3d94 - 0x1b3da4
void entry_001b3d94_0x1b3d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d94_0x1b3d94");
#endif

    ctx->pc = 0x1b3d94u;

    // 0x1b3d94: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D94u;
    {
        const bool branch_taken_0x1b3d94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d94) {
            ctx->pc = 0x1B3D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3D94u;
            // 0x1b3d98: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3DA4u;
            return;
        }
    }
    ctx->pc = 0x1B3D9Cu;
    // 0x1b3d9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3D9Cu;
    {
        const bool branch_taken_0x1b3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D9Cu;
        // 0x1b3da0: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d9c) {
            ctx->pc = 0x1B3DF0u;
            return;
        }
    }
    ctx->pc = 0x1B3DA4u;
}
