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

// Function: voBufGetData
// Address: 0x173df0 - 0x173e3c
void voBufGetData_0x173df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufGetData_0x173df0");
#endif

    switch (ctx->pc) {
        case 0x173e04u: goto label_173e04;
        default: break;
    }

    ctx->pc = 0x173df0u;

    // 0x173df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173df8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173dfc: 0xc05cf5a  jal         func_173D68
    ctx->pc = 0x173DFCu;
    SET_GPR_U32(ctx, 31, 0x173E04u);
    ctx->pc = 0x173E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DFCu;
    // 0x173e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D68u, 0x173DFCu, 0x173E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E04u;
label_173e04:
    // 0x173e04: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x173E04u;
    {
        const bool branch_taken_0x173e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e04) {
            ctx->pc = 0x173E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E04u;
            // 0x173e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E2Cu;
            goto label_173e2c;
        }
    }
    ctx->pc = 0x173E0Cu;
    // 0x173e0c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x173e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x173e10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173e14: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x173e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x173e18: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x173e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173e1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x173e20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173e24: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x173e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x173e28: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x173e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_173e2c:
    // 0x173e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173e34: 0x3e00008  jr          $ra
    ctx->pc = 0x173E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E34u;
        // 0x173e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173E3Cu;
}
