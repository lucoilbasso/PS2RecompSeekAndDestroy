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

// Function: entry_001043a0
// Address: 0x1043a0 - 0x1043c0
void entry_001043a0_0x1043a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043a0_0x1043a0");
#endif

    ctx->pc = 0x1043a0u;

    // 0x1043a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1043a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1043a4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1043a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1043a8: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1043A8u;
    {
        const bool branch_taken_0x1043a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043A8u;
        // 0x1043ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043a8) {
            ctx->pc = 0x1043C0u;
            return;
        }
    }
    ctx->pc = 0x1043B0u;
    // 0x1043b0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1043b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1043b4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1043b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1043b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1043B8u;
    {
        const bool branch_taken_0x1043b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1043b8) {
            ctx->pc = 0x1043C4u;
            return;
        }
    }
    ctx->pc = 0x1043C0u;
}
