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

// Function: B_MemClr128__FPvUi
// Address: 0x19c9b0 - 0x19c9e4
void B_MemClr128__FPvUi_0x19c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_MemClr128__FPvUi_0x19c9b0");
#endif

    switch (ctx->pc) {
        case 0x19c9c0u: goto label_19c9c0;
        default: break;
    }

    ctx->pc = 0x19c9b0u;

    // 0x19c9b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19c9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9b4: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x19c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x19c9b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19c9b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9bc: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x19c9bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19c9c0:
    // 0x19c9c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19c9c4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x19c9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x19c9c8: 0x0  nop
    ctx->pc = 0x19c9c8u;
    // NOP
    // 0x19c9cc: 0x0  nop
    ctx->pc = 0x19c9ccu;
    // NOP
    // 0x19c9d0: 0x0  nop
    ctx->pc = 0x19c9d0u;
    // NOP
    // 0x19c9d4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C9D4u;
    {
        const bool branch_taken_0x19c9d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9D4u;
        // 0x19c9d8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9d4) {
            ctx->pc = 0x19C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c9c0;
        }
    }
    ctx->pc = 0x19C9DCu;
    // 0x19c9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C9E4u;
}
