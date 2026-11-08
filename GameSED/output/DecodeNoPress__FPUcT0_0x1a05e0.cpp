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

// Function: DecodeNoPress__FPUcT0
// Address: 0x1a05e0 - 0x1a0618
void DecodeNoPress__FPUcT0_0x1a05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DecodeNoPress__FPUcT0_0x1a05e0");
#endif

    switch (ctx->pc) {
        case 0x1a05f0u: goto label_1a05f0;
        default: break;
    }

    ctx->pc = 0x1a05e0u;

    // 0x1a05e0: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x1a05e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A05E4u;
    {
        const bool branch_taken_0x1a05e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05E4u;
        // 0x1a05e8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05e4) {
            ctx->pc = 0x1A0604u;
            goto label_1a0604;
        }
    }
    ctx->pc = 0x1A05ECu;
    // 0x1a05ec: 0x0  nop
    ctx->pc = 0x1a05ecu;
    // NOP
label_1a05f0:
    // 0x1a05f0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1a05f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a05f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a05f8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a05f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a05fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a0600: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
label_1a0604:
    // 0x1a0604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0608: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A0608u;
    {
        const bool branch_taken_0x1a0608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0608u;
        // 0x1a060c: 0xaf829170  sw          $v0, -0x6E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0608) {
            ctx->pc = 0x1A05F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a05f0;
        }
    }
    ctx->pc = 0x1A0610u;
    // 0x1a0610: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0618u;
}
