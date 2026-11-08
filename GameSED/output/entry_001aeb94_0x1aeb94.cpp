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

// Function: entry_001aeb94
// Address: 0x1aeb94 - 0x1aebb0
void entry_001aeb94_0x1aeb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeb94_0x1aeb94");
#endif

    ctx->pc = 0x1aeb94u;

    // 0x1aeb94: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEB94u;
    {
        const bool branch_taken_0x1aeb94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB94u;
        // 0x1aeb98: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb94) {
            ctx->pc = 0x1AEBB0u;
            return;
        }
    }
    ctx->pc = 0x1AEB9Cu;
    // 0x1aeb9c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aeb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aeba0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aeba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1aeba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aeba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aeba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aebac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1aebacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1aebb0u;
}
