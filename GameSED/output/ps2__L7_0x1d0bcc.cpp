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

// Function: $L7
// Address: 0x1d0bcc - 0x1d0bf0
void ps2__L7_0x1d0bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L7_0x1d0bcc");
#endif

    ctx->pc = 0x1d0bccu;

label_1d0bcc:
    // 0x1d0bcc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d0bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0bd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d0bd4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1d0bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0bd8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1d0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1d0bdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d0be0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0BE0u;
    {
        const bool branch_taken_0x1d0be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0be0) {
            ctx->pc = 0x1D0BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0bcc;
        }
    }
    ctx->pc = 0x1D0BE8u;
    // 0x1d0be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BE8u;
        // 0x1d0bec: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0BF0u;
}
