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

// Function: entry_0012d20c
// Address: 0x12d20c - 0x12d220
void entry_0012d20c_0x12d20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d20c_0x12d20c");
#endif

    ctx->pc = 0x12d20cu;

    // 0x12d20c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D20Cu;
    {
        const bool branch_taken_0x12d20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d20c) {
            ctx->pc = 0x12D210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D20Cu;
            // 0x12d210: 0x8ca300c0  lw          $v1, 0xC0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D220u;
            return;
        }
    }
    ctx->pc = 0x12D214u;
    // 0x12d214: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x12d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x12d218: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x12d218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x12d21c: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x12d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    ctx->pc = 0x12d220u;
}
