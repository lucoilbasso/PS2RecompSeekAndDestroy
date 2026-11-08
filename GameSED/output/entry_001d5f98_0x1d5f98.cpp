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

// Function: entry_001d5f98
// Address: 0x1d5f98 - 0x1d5fac
void entry_001d5f98_0x1d5f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5f98_0x1d5f98");
#endif

    ctx->pc = 0x1d5f98u;

    // 0x1d5f98: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1d5f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d5f9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5F9Cu;
    {
        const bool branch_taken_0x1d5f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f9c) {
            ctx->pc = 0x1D5FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F9Cu;
            // 0x1d5fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5FACu;
            return;
        }
    }
    ctx->pc = 0x1D5FA4u;
    // 0x1d5fa4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1d5fa8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1d5facu;
}
