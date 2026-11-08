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

// Function: Finish__9WcHitpoly
// Address: 0x182960 - 0x1829b4
void Finish__9WcHitpoly_0x182960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9WcHitpoly_0x182960");
#endif

    switch (ctx->pc) {
        case 0x182988u: goto label_182988;
        case 0x18299cu: goto label_18299c;
        case 0x1829a4u: goto label_1829a4;
        default: break;
    }

    ctx->pc = 0x182960u;

    // 0x182960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18296c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x182970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182974: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x182974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x182978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182978u;
    {
        const bool branch_taken_0x182978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182978u;
        // 0x18297c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182978) {
            ctx->pc = 0x182988u;
            goto label_182988;
        }
    }
    ctx->pc = 0x182980u;
    // 0x182980: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x182980u;
    SET_GPR_U32(ctx, 31, 0x182988u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x182980u, 0x182988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182988u;
label_182988:
    // 0x182988: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x182988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18298c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18298Cu;
    {
        const bool branch_taken_0x18298c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18298c) {
            ctx->pc = 0x18299Cu;
            goto label_18299c;
        }
    }
    ctx->pc = 0x182994u;
    // 0x182994: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x182994u;
    SET_GPR_U32(ctx, 31, 0x18299Cu);
    ctx->pc = 0x182998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182994u;
    // 0x182998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x182994u, 0x18299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18299Cu;
label_18299c:
    // 0x18299c: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x18299Cu;
    SET_GPR_U32(ctx, 31, 0x1829A4u);
    ctx->pc = 0x1829A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18299Cu;
    // 0x1829a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x18299Cu, 0x1829A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1829A4u;
label_1829a4:
    // 0x1829a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1829a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1829a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1829ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1829ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1829B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829ACu;
        // 0x1829b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1829ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1829B4u;
}
