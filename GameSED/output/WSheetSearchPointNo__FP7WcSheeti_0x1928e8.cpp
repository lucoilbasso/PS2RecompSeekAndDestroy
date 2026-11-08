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

// Function: WSheetSearchPointNo__FP7WcSheeti
// Address: 0x1928e8 - 0x192924
void WSheetSearchPointNo__FP7WcSheeti_0x1928e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSearchPointNo__FP7WcSheeti_0x1928e8");
#endif

    switch (ctx->pc) {
        case 0x1928f8u: goto label_1928f8;
        default: break;
    }

    ctx->pc = 0x1928e8u;

    // 0x1928e8: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1928ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1928ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928f0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1928F0u;
    {
        const bool branch_taken_0x1928f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928F0u;
        // 0x1928f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928f0) {
            ctx->pc = 0x19291Cu;
            goto label_19291c;
        }
    }
    ctx->pc = 0x1928F8u;
label_1928f8:
    // 0x1928f8: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1928F8u;
    {
        const bool branch_taken_0x1928f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1928FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928F8u;
        // 0x1928fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928f8) {
            ctx->pc = 0x19291Cu;
            goto label_19291c;
        }
    }
    ctx->pc = 0x192900u;
    // 0x192900: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x192904: 0x0  nop
    ctx->pc = 0x192904u;
    // NOP
    // 0x192908: 0x0  nop
    ctx->pc = 0x192908u;
    // NOP
    // 0x19290c: 0x0  nop
    ctx->pc = 0x19290cu;
    // NOP
    // 0x192910: 0x0  nop
    ctx->pc = 0x192910u;
    // NOP
    // 0x192914: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x192914u;
    {
        const bool branch_taken_0x192914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192914u;
        // 0x192918: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192914) {
            ctx->pc = 0x1928F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1928f8;
        }
    }
    ctx->pc = 0x19291Cu;
label_19291c:
    // 0x19291c: 0x3e00008  jr          $ra
    ctx->pc = 0x19291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192924u;
}
