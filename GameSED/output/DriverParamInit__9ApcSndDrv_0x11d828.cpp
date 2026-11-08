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

// Function: DriverParamInit__9ApcSndDrv
// Address: 0x11d828 - 0x11d860
void DriverParamInit__9ApcSndDrv_0x11d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DriverParamInit__9ApcSndDrv_0x11d828");
#endif

    ctx->pc = 0x11d828u;

    // 0x11d828: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x11d828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x11d82c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x11d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x11d830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d834: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x11d834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11d838: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x11d838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x11d83c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x11d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x11d840: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11d840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11d844: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x11d844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x11d848: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x11d848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x11d84c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x11d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x11d850: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x11d850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x11d854: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x11d854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x11d858: 0x3e00008  jr          $ra
    ctx->pc = 0x11D858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D858u;
        // 0x11d85c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D860u;
}
