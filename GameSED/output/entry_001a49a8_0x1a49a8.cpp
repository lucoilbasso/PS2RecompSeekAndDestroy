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

// Function: entry_001a49a8
// Address: 0x1a49a8 - 0x1a49d0
void entry_001a49a8_0x1a49a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a49a8_0x1a49a8");
#endif

    ctx->pc = 0x1a49a8u;

    // 0x1a49a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a49ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a49acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49b0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a49b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A49B4u;
    {
        const bool branch_taken_0x1a49b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49B4u;
        // 0x1a49b8: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49b4) {
            ctx->pc = 0x1A49D0u;
            return;
        }
    }
    ctx->pc = 0x1A49BCu;
    // 0x1a49bc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A49BCu;
    {
        const bool branch_taken_0x1a49bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49BCu;
        // 0x1a49c0: 0xac650024  sw          $a1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49bc) {
            ctx->pc = 0x1A49D0u;
            return;
        }
    }
    ctx->pc = 0x1A49C4u;
    // 0x1a49c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a49c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a49c8: 0x806881e  j           func_1A2078
    ctx->pc = 0x1A49C8u;
    ctx->pc = 0x1A49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A49C8u;
    // 0x1a49cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    ChangeNextProc__11BMotionCtrl_0x1a2078(rdram, ctx, runtime); return;
    ctx->pc = 0x1A49D0u;
}
