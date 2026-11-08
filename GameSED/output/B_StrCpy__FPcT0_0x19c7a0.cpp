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

// Function: B_StrCpy__FPcT0
// Address: 0x19c7a0 - 0x19c7d8
void B_StrCpy__FPcT0_0x19c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_StrCpy__FPcT0_0x19c7a0");
#endif

    switch (ctx->pc) {
        case 0x19c7b0u: goto label_19c7b0;
        default: break;
    }

    ctx->pc = 0x19c7a0u;

    // 0x19c7a0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c7a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c7a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19c7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C7A8u;
    {
        const bool branch_taken_0x19c7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7A8u;
        // 0x19c7ac: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7a8) {
            ctx->pc = 0x19C7CCu;
            goto label_19c7cc;
        }
    }
    ctx->pc = 0x19C7B0u;
label_19c7b0:
    // 0x19c7b0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19c7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19c7b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c7b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c7bc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c7c0: 0x0  nop
    ctx->pc = 0x19c7c0u;
    // NOP
    // 0x19c7c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C7C4u;
    {
        const bool branch_taken_0x19c7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7C4u;
        // 0x19c7c8: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7c4) {
            ctx->pc = 0x19C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c7b0;
        }
    }
    ctx->pc = 0x19C7CCu;
label_19c7cc:
    // 0x19c7cc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19c7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7D0u;
        // 0x19c7d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C7D8u;
}
