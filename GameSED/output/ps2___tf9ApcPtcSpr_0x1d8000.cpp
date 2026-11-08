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

// Function: __tf9ApcPtcSpr
// Address: 0x1d8000 - 0x1d8050
void ps2___tf9ApcPtcSpr_0x1d8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcPtcSpr_0x1d8000");
#endif

    switch (ctx->pc) {
        case 0x1d8024u: goto label_1d8024;
        case 0x1d803cu: goto label_1d803c;
        default: break;
    }

    ctx->pc = 0x1d8000u;

    // 0x1d8000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8004: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d8004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d8008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d800c: 0x24500ab0  addiu       $s0, $v0, 0xAB0
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x1d8010: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410AB0u));
    // 0x1d8014: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8014u;
    {
        const bool branch_taken_0x1d8014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8014u;
        // 0x1d8018: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8014) {
            ctx->pc = 0x1D803Cu;
            goto label_1d803c;
        }
    }
    ctx->pc = 0x1D801Cu;
    // 0x1d801c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1D801Cu;
    SET_GPR_U32(ctx, 31, 0x1D8024u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1D801Cu, 0x1D8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8024u;
label_1d8024:
    // 0x1d8024: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d8028: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d8028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d802c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x1d802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x1d8030: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1d8030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1d8034: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D8034u;
    SET_GPR_U32(ctx, 31, 0x1D803Cu);
    ctx->pc = 0x1D8038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8034u;
    // 0x1d8038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D8034u, 0x1D803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D803Cu;
label_1d803c:
    // 0x1d803c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d803cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8048: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8048u;
        // 0x1d804c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8050u;
}
