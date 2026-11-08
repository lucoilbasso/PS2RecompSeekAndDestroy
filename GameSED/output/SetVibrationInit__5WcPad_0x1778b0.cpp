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

// Function: SetVibrationInit__5WcPad
// Address: 0x1778b0 - 0x17790c
void SetVibrationInit__5WcPad_0x1778b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVibrationInit__5WcPad_0x1778b0");
#endif

    ctx->pc = 0x1778b0u;

    // 0x1778b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1778b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1778b4: 0x2442e820  addiu       $v0, $v0, -0x17E0
    ctx->pc = 0x1778b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x1778b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1778b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21E820u));
    // 0x1778bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1778BCu;
    {
        const bool branch_taken_0x1778bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1778C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778BCu;
        // 0x1778c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778bc) {
            ctx->pc = 0x1778D0u;
            goto label_1778d0;
        }
    }
    ctx->pc = 0x1778C4u;
    // 0x1778c4: 0xa0400055  sb          $zero, 0x55($v0)
    ctx->pc = 0x1778c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x1778c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1778C8u;
    {
        const bool branch_taken_0x1778c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778C8u;
        // 0x1778cc: 0xa0400054  sb          $zero, 0x54($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778c8) {
            ctx->pc = 0x1778DCu;
            goto label_1778dc;
        }
    }
    ctx->pc = 0x1778D0u;
label_1778d0:
    // 0x1778d0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1778d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1778d4: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x1778d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1778d8: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x1778d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
label_1778dc:
    // 0x1778dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1778e0: 0x2442e820  addiu       $v0, $v0, -0x17E0
    ctx->pc = 0x1778e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x1778e4: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1778e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x1778e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1778e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21E87Cu));
    // 0x1778ec: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1778ECu;
    {
        const bool branch_taken_0x1778ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1778ec) {
            ctx->pc = 0x1778F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1778ECu;
            // 0x1778f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177900u;
            goto label_177900;
        }
    }
    ctx->pc = 0x1778F4u;
    // 0x1778f4: 0xa0800055  sb          $zero, 0x55($a0)
    ctx->pc = 0x1778f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x1778f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1778F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1778FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778F8u;
        // 0x1778fc: 0xa0800054  sb          $zero, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1778F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177900u;
label_177900:
    // 0x177900: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x177900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x177904: 0x3e00008  jr          $ra
    ctx->pc = 0x177904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177904u;
        // 0x177908: 0xa0820055  sb          $v0, 0x55($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17790Cu;
}
