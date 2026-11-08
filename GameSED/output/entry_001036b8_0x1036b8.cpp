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

// Function: entry_001036b8
// Address: 0x1036b8 - 0x1036d4
void entry_001036b8_0x1036b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001036b8_0x1036b8");
#endif

    ctx->pc = 0x1036b8u;

    // 0x1036b8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1036b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036bc: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1036BCu;
    {
        const bool branch_taken_0x1036bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1036C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036BCu;
        // 0x1036c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036bc) {
            ctx->pc = 0x1036D4u;
            return;
        }
    }
    ctx->pc = 0x1036C4u;
    // 0x1036c4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1036c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1036c8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1036c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1036cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1036CCu;
    {
        const bool branch_taken_0x1036cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1036cc) {
            ctx->pc = 0x1036D8u;
            return;
        }
    }
    ctx->pc = 0x1036D4u;
}
