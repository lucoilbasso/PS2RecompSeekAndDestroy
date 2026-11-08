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

// Function: entry_00152ac4
// Address: 0x152ac4 - 0x152ad8
void entry_00152ac4_0x152ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152ac4_0x152ac4");
#endif

    ctx->pc = 0x152ac4u;

    // 0x152ac4: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152AC4u;
    {
        const bool branch_taken_0x152ac4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x152AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AC4u;
        // 0x152ac8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ac4) {
            ctx->pc = 0x152AD8u;
            return;
        }
    }
    ctx->pc = 0x152ACCu;
    // 0x152acc: 0x8e4206dc  lw          $v0, 0x6DC($s2)
    ctx->pc = 0x152accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1756)));
    // 0x152ad0: 0x3842003b  xori        $v0, $v0, 0x3B
    ctx->pc = 0x152ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)59);
    // 0x152ad4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x152ad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x152ad8u;
}
