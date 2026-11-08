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

// Function: ArenaInit__20ApItemGameInfomation
// Address: 0x1185a8 - 0x1185ec
void ArenaInit__20ApItemGameInfomation_0x1185a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ArenaInit__20ApItemGameInfomation_0x1185a8");
#endif

    switch (ctx->pc) {
        case 0x1185b0u: goto label_1185b0;
        case 0x1185b8u: goto label_1185b8;
        default: break;
    }

    ctx->pc = 0x1185a8u;

    // 0x1185a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1185a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185ac: 0x0  nop
    ctx->pc = 0x1185acu;
    // NOP
label_1185b0:
    // 0x1185b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1185b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1185b4: 0x24821c18  addiu       $v0, $a0, 0x1C18
    ctx->pc = 0x1185b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7192));
label_1185b8:
    // 0x1185b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1185b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1185bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1185bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1185c0: 0x0  nop
    ctx->pc = 0x1185c0u;
    // NOP
    // 0x1185c4: 0x0  nop
    ctx->pc = 0x1185c4u;
    // NOP
    // 0x1185c8: 0x0  nop
    ctx->pc = 0x1185c8u;
    // NOP
    // 0x1185cc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1185CCu;
    {
        const bool branch_taken_0x1185cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1185D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185CCu;
        // 0x1185d0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185cc) {
            ctx->pc = 0x1185B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1185b8;
        }
    }
    ctx->pc = 0x1185D4u;
    // 0x1185d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1185d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1185d8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1185d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1185dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1185DCu;
    {
        const bool branch_taken_0x1185dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1185E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185DCu;
        // 0x1185e0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185dc) {
            ctx->pc = 0x1185B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1185b0;
        }
    }
    ctx->pc = 0x1185E4u;
    // 0x1185e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1185E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1185E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1185ECu;
}
