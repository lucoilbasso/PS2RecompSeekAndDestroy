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

// Function: Clear__7WcSheet
// Address: 0x1df5b8 - 0x1df610
void Clear__7WcSheet_0x1df5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7WcSheet_0x1df5b8");
#endif

    ctx->pc = 0x1df5b8u;

    // 0x1df5b8: 0x24830150  addiu       $v1, $a0, 0x150
    ctx->pc = 0x1df5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1df5bc: 0xac8001dc  sw          $zero, 0x1DC($a0)
    ctx->pc = 0x1df5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 0));
    // 0x1df5c0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1df5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df5c4: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1df5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1df5c8: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1df5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1df5cc: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1df5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1df5d0: 0x90e5ee68  lbu         $a1, -0x1198($a3)
    ctx->pc = 0x1df5d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x21EE68u));
    // 0x1df5d4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1df5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1df5d8: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1df5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df5dc: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x1df5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1df5e0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1df5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1df5e4: 0x248401d0  addiu       $a0, $a0, 0x1D0
    ctx->pc = 0x1df5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x1df5e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1df5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1df5ec: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1df5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1df5f0: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x1df5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x1df5f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1df5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1df5f8: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x1df5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x1df5fc: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x1df5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df600: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x1df600u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df604: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1df604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1df608: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF608u;
        // 0x1df60c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF610u;
}
