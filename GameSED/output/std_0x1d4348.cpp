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

// Function: std
// Address: 0x1d4348 - 0x1d43a4
void std_0x1d4348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_0x1d4348");
#endif

    ctx->pc = 0x1d4348u;

    // 0x1d4348: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d434c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d4350: 0x3c08001d  lui         $t0, 0x1D
    ctx->pc = 0x1d4350u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)29 << 16));
    // 0x1d4354: 0x3c09001d  lui         $t1, 0x1D
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)29 << 16));
    // 0x1d4358: 0x244263c0  addiu       $v0, $v0, 0x63C0
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25536));
    // 0x1d435c: 0x24636428  addiu       $v1, $v1, 0x6428
    ctx->pc = 0x1d435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25640));
    // 0x1d4360: 0x250864a8  addiu       $t0, $t0, 0x64A8
    ctx->pc = 0x1d4360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25768));
    // 0x1d4364: 0x25296510  addiu       $t1, $t1, 0x6510
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25872));
    // 0x1d4368: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x1d4368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x1d436c: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x1d436cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d4370: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x1d4370u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d4374: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1d4374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1d4378: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1d4378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1d437c: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x1d437cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x1d4380: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x1d4380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x1d4384: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d4384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d4388: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d4388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d438c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d438cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d4390: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d4390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d4394: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1d4394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1d4398: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d4398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d439c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D439Cu;
        // 0x1d43a0: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D43A4u;
}
