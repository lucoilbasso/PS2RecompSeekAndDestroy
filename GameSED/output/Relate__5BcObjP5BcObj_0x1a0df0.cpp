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

// Function: Relate__5BcObjP5BcObj
// Address: 0x1a0df0 - 0x1a0e34
void Relate__5BcObjP5BcObj_0x1a0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Relate__5BcObjP5BcObj_0x1a0df0");
#endif

    switch (ctx->pc) {
        case 0x1a0e08u: goto label_1a0e08;
        case 0x1a0e24u: goto label_1a0e24;
        default: break;
    }

    ctx->pc = 0x1a0df0u;

    // 0x1a0df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0dfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a0e00: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1A0E00u;
    SET_GPR_U32(ctx, 31, 0x1A0E08u);
    ctx->pc = 0x1A0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E00u;
    // 0x1a0e04: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A0E00u, 0x1A0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E08u;
label_1a0e08:
    // 0x1a0e08: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e10: 0x24a58878  addiu       $a1, $a1, -0x7788
    ctx->pc = 0x1a0e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    // 0x1a0e14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0E14u;
    {
        const bool branch_taken_0x1a0e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E14u;
        // 0x1a0e18: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e14) {
            ctx->pc = 0x1A0E24u;
            goto label_1a0e24;
        }
    }
    ctx->pc = 0x1A0E1Cu;
    // 0x1a0e1c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E24u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0E1Cu, 0x1A0E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E24u;
label_1a0e24:
    // 0x1a0e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a0e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E2Cu;
        // 0x1a0e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0E34u;
}
