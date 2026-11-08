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

// Function: sceDevConsClear
// Address: 0x1ad6c0 - 0x1ad718
void sceDevConsClear_0x1ad6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsClear_0x1ad6c0");
#endif

    switch (ctx->pc) {
        case 0x1ad6f0u: goto label_1ad6f0;
        default: break;
    }

    ctx->pc = 0x1ad6c0u;

    // 0x1ad6c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ad6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ad6c8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ad6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ad6cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ad6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ad6d0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1ad6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ad6d4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1ad6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ad6d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ad6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ad6dc: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD6DCu;
    {
        const bool branch_taken_0x1ad6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6DCu;
        // 0x1ad6e0: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6dc) {
            ctx->pc = 0x1AD70Cu;
            goto label_1ad70c;
        }
    }
    ctx->pc = 0x1AD6E4u;
    // 0x1ad6e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ad6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ad6e8: 0x24030720  addiu       $v1, $zero, 0x720
    ctx->pc = 0x1ad6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    // 0x1ad6ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ad6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ad6f0:
    // 0x1ad6f0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1ad6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad6f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ad6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ad6f8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ad6fc: 0x0  nop
    ctx->pc = 0x1ad6fcu;
    // NOP
    // 0x1ad700: 0x0  nop
    ctx->pc = 0x1ad700u;
    // NOP
    // 0x1ad704: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD704u;
    {
        const bool branch_taken_0x1ad704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad704) {
            ctx->pc = 0x1AD6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad6f0;
        }
    }
    ctx->pc = 0x1AD70Cu;
label_1ad70c:
    // 0x1ad70c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1ad70cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x1ad710: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD710u;
        // 0x1ad714: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD718u;
}
