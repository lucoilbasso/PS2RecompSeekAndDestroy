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

// Function: Cmd_TANK_EQU_PARTS_CLEAR_Entry__FP15BsSCDEntControl
// Address: 0x1198b0 - 0x119908
void Cmd_TANK_EQU_PARTS_CLEAR_Entry__FP15BsSCDEntControl_0x1198b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_EQU_PARTS_CLEAR_Entry__FP15BsSCDEntControl_0x1198b0");
#endif

    switch (ctx->pc) {
        case 0x1198c0u: goto label_1198c0;
        case 0x1198e0u: goto label_1198e0;
        default: break;
    }

    ctx->pc = 0x1198b0u;

    // 0x1198b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1198b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1198b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1198b8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1198B8u;
    SET_GPR_U32(ctx, 31, 0x1198C0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1198B8u, 0x1198C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198C0u;
label_1198c0:
    // 0x1198c0: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x1198c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x1198c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1198c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1198c8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1198c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1198cc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1198ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1198d0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1198d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1198d4: 0x2421d546  addiu       $at, $at, -0x2ABA
    ctx->pc = 0x1198d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294956358));
    // 0x1198d8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1198d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1198dc: 0x0  nop
    ctx->pc = 0x1198dcu;
    // NOP
label_1198e0:
    // 0x1198e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1198e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1198e4: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x1198e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1198e8: 0x0  nop
    ctx->pc = 0x1198e8u;
    // NOP
    // 0x1198ec: 0x0  nop
    ctx->pc = 0x1198ecu;
    // NOP
    // 0x1198f0: 0x0  nop
    ctx->pc = 0x1198f0u;
    // NOP
    // 0x1198f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1198F4u;
    {
        const bool branch_taken_0x1198f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1198F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198F4u;
        // 0x1198f8: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198f4) {
            ctx->pc = 0x1198E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1198e0;
        }
    }
    ctx->pc = 0x1198FCu;
    // 0x1198fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1198fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119900: 0x3e00008  jr          $ra
    ctx->pc = 0x119900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119900u;
        // 0x119904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119908u;
}
