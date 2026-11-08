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

// Function: entry_0010d568
// Address: 0x10d568 - 0x10d5b4
void entry_0010d568_0x10d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d568_0x10d568");
#endif

    switch (ctx->pc) {
        case 0x10d57cu: goto label_10d57c;
        default: break;
    }

    ctx->pc = 0x10d568u;

    // 0x10d568: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d56c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d574: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D574u;
    SET_GPR_U32(ctx, 31, 0x10D57Cu);
    ctx->pc = 0x10D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D574u;
    // 0x10d578: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D574u, 0x10D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D57Cu;
label_10d57c:
    // 0x10d57c: 0x260301e0  addiu       $v1, $s0, 0x1E0
    ctx->pc = 0x10d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x10d580: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x10d580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10d584: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x10d584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d588: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x10d588u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x10d58c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d590: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10d594: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d598: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10d598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d59c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10d5a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d5a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10d5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d5a8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10d5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5ACu;
        // 0x10d5b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D5B4u;
}
