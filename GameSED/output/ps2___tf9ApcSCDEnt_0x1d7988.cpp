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

// Function: __tf9ApcSCDEnt
// Address: 0x1d7988 - 0x1d79d8
void ps2___tf9ApcSCDEnt_0x1d7988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcSCDEnt_0x1d7988");
#endif

    switch (ctx->pc) {
        case 0x1d79acu: goto label_1d79ac;
        case 0x1d79c4u: goto label_1d79c4;
        default: break;
    }

    ctx->pc = 0x1d7988u;

    // 0x1d7988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d798c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d7990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7994: 0x24500710  addiu       $s0, $v0, 0x710
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    // 0x1d7998: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d7998u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410710u));
    // 0x1d799c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D799Cu;
    {
        const bool branch_taken_0x1d799c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D799Cu;
        // 0x1d79a0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d799c) {
            ctx->pc = 0x1D79C4u;
            goto label_1d79c4;
        }
    }
    ctx->pc = 0x1D79A4u;
    // 0x1d79a4: 0xc077308  jal         func_1DCC20
    ctx->pc = 0x1D79A4u;
    SET_GPR_U32(ctx, 31, 0x1D79ACu);
    ctx->pc = 0x1DCC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC20u, 0x1D79A4u, 0x1D79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79ACu;
label_1d79ac:
    // 0x1d79ac: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d79acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d79b0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d79b4: 0x24a53aa0  addiu       $a1, $a1, 0x3AA0
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15008));
    // 0x1d79b8: 0x24c61560  addiu       $a2, $a2, 0x1560
    ctx->pc = 0x1d79b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5472));
    // 0x1d79bc: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D79BCu;
    SET_GPR_U32(ctx, 31, 0x1D79C4u);
    ctx->pc = 0x1D79C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79BCu;
    // 0x1d79c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D79BCu, 0x1D79C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79C4u;
label_1d79c4:
    // 0x1d79c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d79c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d79c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d79cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d79ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d79d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D79D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79D0u;
        // 0x1d79d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D79D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D79D8u;
}
