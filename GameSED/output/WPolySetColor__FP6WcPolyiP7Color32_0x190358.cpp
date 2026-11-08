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

// Function: WPolySetColor__FP6WcPolyiP7Color32
// Address: 0x190358 - 0x1903c8
void WPolySetColor__FP6WcPolyiP7Color32_0x190358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolySetColor__FP6WcPolyiP7Color32_0x190358");
#endif

    ctx->pc = 0x190358u;

    // 0x190358: 0x94820158  lhu         $v0, 0x158($a0)
    ctx->pc = 0x190358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x19035c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x190360: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x190360u;
    {
        const bool branch_taken_0x190360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190360u;
        // 0x190364: 0x24870154  addiu       $a3, $a0, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190360) {
            ctx->pc = 0x1903B0u;
            goto label_1903b0;
        }
    }
    ctx->pc = 0x190368u;
    // 0x190368: 0x9482015a  lhu         $v0, 0x15A($a0)
    ctx->pc = 0x190368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x19036c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x19036cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x190370: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x190370u;
    {
        const bool branch_taken_0x190370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190370) {
            ctx->pc = 0x1903C0u;
            goto label_1903c0;
        }
    }
    ctx->pc = 0x190378u;
    // 0x190378: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190378u;
    {
        const bool branch_taken_0x190378 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190378u;
        // 0x19037c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190378) {
            ctx->pc = 0x190398u;
            goto label_190398;
        }
    }
    ctx->pc = 0x190380u;
    // 0x190380: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x190384: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x190384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19038c: 0x3e00008  jr          $ra
    ctx->pc = 0x19038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19038Cu;
        // 0x190390: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19038Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190394u;
    // 0x190394: 0x0  nop
    ctx->pc = 0x190394u;
    // NOP
label_190398:
    // 0x190398: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x190398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19039c: 0x24830154  addiu       $v1, $a0, 0x154
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x1903a0: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x1903a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1903a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1903a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1903a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1903A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1903ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903A8u;
        // 0x1903ac: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1903A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1903B0u;
label_1903b0:
    // 0x1903b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1903b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1903b4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x1903b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1903b8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1903b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1903bc: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x1903bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
label_1903c0:
    // 0x1903c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1903C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1903C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1903C8u;
}
