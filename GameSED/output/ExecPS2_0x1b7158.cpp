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

// Function: ExecPS2
// Address: 0x1b7158 - 0x1b71c8
void ExecPS2_0x1b7158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecPS2_0x1b7158");
#endif

    switch (ctx->pc) {
        case 0x1b718cu: goto label_1b718c;
        case 0x1b7194u: goto label_1b7194;
        case 0x1b71b0u: goto label_1b71b0;
        default: break;
    }

    ctx->pc = 0x1b7158u;

    // 0x1b7158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b715c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b7160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7164: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b7164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b7168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b716c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b716cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7170: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b7170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7174: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b7174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b7178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b717c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7180: 0x2484acd0  addiu       $a0, $a0, -0x5330
    ctx->pc = 0x1b7180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946000));
    // 0x1b7184: 0xc06dc0e  jal         func_1B7038
    ctx->pc = 0x1B7184u;
    SET_GPR_U32(ctx, 31, 0x1B718Cu);
    ctx->pc = 0x1B7188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7184u;
    // 0x1b7188: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7038u, 0x1B7184u, 0x1B718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B718Cu;
label_1b718c:
    // 0x1b718c: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1B718Cu;
    SET_GPR_U32(ctx, 31, 0x1B7194u);
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1B718Cu, 0x1B7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7194u;
label_1b7194:
    // 0x1b7194: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b7198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b719c: 0x8c47bd38  lw          $a3, -0x42C8($v0)
    ctx->pc = 0x1b719cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x24BD38u));
    // 0x1b71a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b71a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b71a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71a8: 0xc06bc2c  jal         func_1AF0B0
    ctx->pc = 0x1B71A8u;
    SET_GPR_U32(ctx, 31, 0x1B71B0u);
    ctx->pc = 0x1B71ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71A8u;
    // 0x1b71ac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF0B0u, 0x1B71A8u, 0x1B71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71B0u;
label_1b71b0:
    // 0x1b71b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b71b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b71b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b71b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b71b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b71b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b71bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b71bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b71c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B71C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71C0u;
        // 0x1b71c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B71C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B71C8u;
}
