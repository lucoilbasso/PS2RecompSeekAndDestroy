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

// Function: KeyBufDownLoad__20ApItemGameInfomationPUs
// Address: 0x118548 - 0x118574
void KeyBufDownLoad__20ApItemGameInfomationPUs_0x118548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyBufDownLoad__20ApItemGameInfomationPUs_0x118548");
#endif

    switch (ctx->pc) {
        case 0x118550u: goto label_118550;
        default: break;
    }

    ctx->pc = 0x118548u;

    // 0x118548: 0x24840c32  addiu       $a0, $a0, 0xC32
    ctx->pc = 0x118548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3122));
    // 0x11854c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11854cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118550:
    // 0x118550: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x118550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118554: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x118554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x118558: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11855c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x11855cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x118560: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x118560u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x118564: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118564u;
    {
        const bool branch_taken_0x118564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118564u;
        // 0x118568: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118564) {
            ctx->pc = 0x118550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118550;
        }
    }
    ctx->pc = 0x11856Cu;
    // 0x11856c: 0x3e00008  jr          $ra
    ctx->pc = 0x11856Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11856Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118574u;
}
