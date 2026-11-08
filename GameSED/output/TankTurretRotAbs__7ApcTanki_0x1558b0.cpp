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

// Function: TankTurretRotAbs__7ApcTanki
// Address: 0x1558b0 - 0x1558f0
void TankTurretRotAbs__7ApcTanki_0x1558b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankTurretRotAbs__7ApcTanki_0x1558b0");
#endif

    switch (ctx->pc) {
        case 0x1558ccu: goto label_1558cc;
        case 0x1558e0u: goto label_1558e0;
        default: break;
    }

    ctx->pc = 0x1558b0u;

    // 0x1558b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1558b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1558b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1558b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1558bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1558bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1558c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1558c4: 0xc058562  jal         func_161588
    ctx->pc = 0x1558C4u;
    SET_GPR_U32(ctx, 31, 0x1558CCu);
    ctx->pc = 0x1558C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558C4u;
    // 0x1558c8: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x1558C4u, 0x1558CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558CCu;
label_1558cc:
    // 0x1558cc: 0x8e02076c  lw          $v0, 0x76C($s0)
    ctx->pc = 0x1558ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
    // 0x1558d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1558D0u;
    {
        const bool branch_taken_0x1558d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558D0u;
        // 0x1558d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558d0) {
            ctx->pc = 0x1558E0u;
            goto label_1558e0;
        }
    }
    ctx->pc = 0x1558D8u;
    // 0x1558d8: 0xc061944  jal         func_186510
    ctx->pc = 0x1558D8u;
    SET_GPR_U32(ctx, 31, 0x1558E0u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x1558D8u, 0x1558E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558E0u;
label_1558e0:
    // 0x1558e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1558e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1558e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1558e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1558E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558E8u;
        // 0x1558ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1558F0u;
}
