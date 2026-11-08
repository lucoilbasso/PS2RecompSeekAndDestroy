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

// Function: ApDaemonGetAroundList__Fv
// Address: 0x1392a0 - 0x1392f8
void ApDaemonGetAroundList__Fv_0x1392a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonGetAroundList__Fv_0x1392a0");
#endif

    ctx->pc = 0x1392a0u;

    // 0x1392a0: 0x8f828a18  lw          $v0, -0x75E8($gp)
    ctx->pc = 0x1392a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
    // 0x1392a4: 0x8f838a1c  lw          $v1, -0x75E4($gp)
    ctx->pc = 0x1392a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937116)));
    // 0x1392a8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1392a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1392ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1392acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1392b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1392B0u;
    {
        const bool branch_taken_0x1392b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1392b0) {
            ctx->pc = 0x1392F0u;
            goto label_1392f0;
        }
    }
    ctx->pc = 0x1392B8u;
    // 0x1392b8: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1392bc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1392bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1392c0: 0x8cc6a390  lw          $a2, -0x5C70($a2)
    ctx->pc = 0x1392c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943632)));
    // 0x1392c4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1392C4u;
    {
        const bool branch_taken_0x1392c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1392C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392C4u;
        // 0x1392c8: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392c4) {
            ctx->pc = 0x1392DCu;
            goto label_1392dc;
        }
    }
    ctx->pc = 0x1392CCu;
    // 0x1392cc: 0x24c400f0  addiu       $a0, $a2, 0xF0
    ctx->pc = 0x1392ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x1392d0: 0x8ca3b830  lw          $v1, -0x47D0($a1)
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948912)));
    // 0x1392d4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1392d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1392d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1392d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1392dc:
    // 0x1392dc: 0x8f838a18  lw          $v1, -0x75E8($gp)
    ctx->pc = 0x1392dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
    // 0x1392e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1392e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1392e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1392e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1392E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1392ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392E8u;
        // 0x1392ec: 0xaf838a18  sw          $v1, -0x75E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1392F0u;
label_1392f0:
    // 0x1392f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1392F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1392F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392F0u;
        // 0x1392f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1392F8u;
}
