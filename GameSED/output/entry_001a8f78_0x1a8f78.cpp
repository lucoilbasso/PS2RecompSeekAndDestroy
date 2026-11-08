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

// Function: entry_001a8f78
// Address: 0x1a8f78 - 0x1a8fa4
void entry_001a8f78_0x1a8f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f78_0x1a8f78");
#endif

    ctx->pc = 0x1a8f78u;

    // 0x1a8f78: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A8F78u;
    {
        const bool branch_taken_0x1a8f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F78u;
        // 0x1a8f7c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f78) {
            ctx->pc = 0x1A8FC0u;
            return;
        }
    }
    ctx->pc = 0x1A8F80u;
    // 0x1a8f80: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1a8f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a8f84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a8f88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8f8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8F8Cu;
    {
        const bool branch_taken_0x1a8f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F8Cu;
        // 0x1a8f90: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f8c) {
            ctx->pc = 0x1A8FA4u;
            return;
        }
    }
    ctx->pc = 0x1A8F94u;
    // 0x1a8f94: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a8f98: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a8f9c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8FA4u);
    ctx->pc = 0x1A8FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F9Cu;
    // 0x1a8fa0: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8F9Cu, 0x1A8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FA4u;
}
