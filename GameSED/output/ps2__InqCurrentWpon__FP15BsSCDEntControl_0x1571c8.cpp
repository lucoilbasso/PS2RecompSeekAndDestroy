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

// Function: _InqCurrentWpon__FP15BsSCDEntControl
// Address: 0x1571c8 - 0x157218
void ps2__InqCurrentWpon__FP15BsSCDEntControl_0x1571c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqCurrentWpon__FP15BsSCDEntControl_0x1571c8");
#endif

    switch (ctx->pc) {
        case 0x157204u: goto label_157204;
        default: break;
    }

    ctx->pc = 0x1571c8u;

    // 0x1571c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1571c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1571cc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1571ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1571d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1571d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1571d4: 0x24062118  addiu       $a2, $zero, 0x2118
    ctx->pc = 0x1571d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x1571d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1571d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1571dc: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1571e0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1571e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1571e4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1571e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1571e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1571e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571ec: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1571ECu;
    {
        const bool branch_taken_0x1571ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1571F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571ECu;
        // 0x1571f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571ec) {
            ctx->pc = 0x157204u;
            goto label_157204;
        }
    }
    ctx->pc = 0x1571F4u;
    // 0x1571f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1571f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1571f8: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1571f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1571fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1571FCu;
    SET_GPR_U32(ctx, 31, 0x157204u);
    ctx->pc = 0x157200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571FCu;
    // 0x157200: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1571FCu, 0x157204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157204u;
label_157204:
    // 0x157204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x157204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15720c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15720cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157210: 0x3e00008  jr          $ra
    ctx->pc = 0x157210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157210u;
        // 0x157214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157218u;
}
