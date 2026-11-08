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

// Function: movie_exec
// Address: 0x1700d8 - 0x170130
void movie_exec_0x1700d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movie_exec_0x1700d8");
#endif

    switch (ctx->pc) {
        case 0x1700ecu: goto label_1700ec;
        case 0x170114u: goto label_170114;
        case 0x17011cu: goto label_17011c;
        default: break;
    }

    ctx->pc = 0x1700d8u;

    // 0x1700d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1700dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1700dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1700e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1700e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1700e4: 0xc05c134  jal         func_1704D0
    ctx->pc = 0x1700E4u;
    SET_GPR_U32(ctx, 31, 0x1700ECu);
    ctx->pc = 0x1700E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700E4u;
    // 0x1700e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1704D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1704D0u, 0x1700E4u, 0x1700ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700ECu;
label_1700ec:
    // 0x1700ec: 0x8f8591a4  lw          $a1, -0x6E5C($gp)
    ctx->pc = 0x1700ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x1700f0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1700f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1700f4: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1700f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1700f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1700f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700fc: 0x24841368  addiu       $a0, $a0, 0x1368
    ctx->pc = 0x1700fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x170100: 0x3c0100a8  lui         $at, 0xA8
    ctx->pc = 0x170100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)168 << 16));
    // 0x170104: 0x342196c0  ori         $at, $at, 0x96C0
    ctx->pc = 0x170104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38592);
    // 0x170108: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x170108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x17010c: 0xc05c04c  jal         func_170130
    ctx->pc = 0x17010Cu;
    SET_GPR_U32(ctx, 31, 0x170114u);
    ctx->pc = 0x170110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17010Cu;
    // 0x170110: 0x24c61438  addiu       $a2, $a2, 0x1438 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x17010Cu, 0x170114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170114u;
label_170114:
    // 0x170114: 0xc05c216  jal         func_170858
    ctx->pc = 0x170114u;
    SET_GPR_U32(ctx, 31, 0x17011Cu);
    ctx->pc = 0x170858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170858u, 0x170114u, 0x17011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17011Cu;
label_17011c:
    // 0x17011c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17011cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170120: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x170120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x170124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170128: 0x3e00008  jr          $ra
    ctx->pc = 0x170128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170128u;
        // 0x17012c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170130u;
}
