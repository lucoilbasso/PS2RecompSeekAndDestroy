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

// Function: ApMCardDataLoadSystem__FP8ApcMCard
// Address: 0x11caf8 - 0x11cb44
void ApMCardDataLoadSystem__FP8ApcMCard_0x11caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardDataLoadSystem__FP8ApcMCard_0x11caf8");
#endif

    switch (ctx->pc) {
        case 0x11cb08u: goto label_11cb08;
        default: break;
    }

    ctx->pc = 0x11caf8u;

    // 0x11caf8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11cafc: 0x248349c0  addiu       $v1, $a0, 0x49C0
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 18880));
    // 0x11cb00: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11cb04: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x11cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
label_11cb08:
    // 0x11cb08: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x11cb08u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cb0c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x11cb0cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11cb10: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x11cb10u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11cb14: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x11cb14u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11cb18: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x11cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x11cb1c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x11cb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x11cb20: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x11cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x11cb24: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x11cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x11cb28: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11cb2c: 0x0  nop
    ctx->pc = 0x11cb2cu;
    // NOP
    // 0x11cb30: 0x0  nop
    ctx->pc = 0x11cb30u;
    // NOP
    // 0x11cb34: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CB34u;
    {
        const bool branch_taken_0x11cb34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB34u;
        // 0x11cb38: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb34) {
            ctx->pc = 0x11CB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cb08;
        }
    }
    ctx->pc = 0x11CB3Cu;
    // 0x11cb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CB44u;
}
