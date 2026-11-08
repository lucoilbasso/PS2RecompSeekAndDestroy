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

// Function: Clear__8WcExtent
// Address: 0x1de360 - 0x1de390
void Clear__8WcExtent_0x1de360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8WcExtent_0x1de360");
#endif

    ctx->pc = 0x1de360u;

    // 0x1de360: 0x24830150  addiu       $v1, $a0, 0x150
    ctx->pc = 0x1de360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1de364: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1de364u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1de368: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1de368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1de36c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1de36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1de370: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1de370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1de374: 0x90e5ed70  lbu         $a1, -0x1290($a3)
    ctx->pc = 0x1de374u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x21ED70u));
    // 0x1de378: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1de378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1de37c: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1de37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1de380: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x1de380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1de384: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1de384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1de388: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE388u;
        // 0x1de38c: 0xac800164  sw          $zero, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE390u;
}
