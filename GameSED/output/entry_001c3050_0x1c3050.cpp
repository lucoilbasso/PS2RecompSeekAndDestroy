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

// Function: entry_001c3050
// Address: 0x1c3050 - 0x1c3060
void entry_001c3050_0x1c3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3050_0x1c3050");
#endif

    ctx->pc = 0x1c3050u;

    // 0x1c3050: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x1c3050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3054: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C3054u;
    {
        const bool branch_taken_0x1c3054 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3054u;
        // 0x1c3058: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3054) {
            ctx->pc = 0x1C3194u;
            return;
        }
    }
    ctx->pc = 0x1C305Cu;
    // 0x1c305c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1c3060u;
}
