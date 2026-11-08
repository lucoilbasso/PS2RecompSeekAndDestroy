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

// Function: __tf7WcSheet
// Address: 0x1df520 - 0x1df570
void ps2___tf7WcSheet_0x1df520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcSheet_0x1df520");
#endif

    switch (ctx->pc) {
        case 0x1df544u: goto label_1df544;
        case 0x1df55cu: goto label_1df55c;
        default: break;
    }

    ctx->pc = 0x1df520u;

    // 0x1df520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df524: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1df524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1df528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df52c: 0x24501c20  addiu       $s0, $v0, 0x1C20
    ctx->pc = 0x1df52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7200));
    // 0x1df530: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411C20u));
    // 0x1df534: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF534u;
    {
        const bool branch_taken_0x1df534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF534u;
        // 0x1df538: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df534) {
            ctx->pc = 0x1DF55Cu;
            goto label_1df55c;
        }
    }
    ctx->pc = 0x1DF53Cu;
    // 0x1df53c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DF53Cu;
    SET_GPR_U32(ctx, 31, 0x1DF544u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DF53Cu, 0x1DF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF544u;
label_1df544:
    // 0x1df544: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1df544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1df548: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1df548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1df54c: 0x24a581e8  addiu       $a1, $a1, -0x7E18
    ctx->pc = 0x1df54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935016));
    // 0x1df550: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1df550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1df554: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DF554u;
    SET_GPR_U32(ctx, 31, 0x1DF55Cu);
    ctx->pc = 0x1DF558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF554u;
    // 0x1df558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DF554u, 0x1DF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF55Cu;
label_1df55c:
    // 0x1df55c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df568: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF568u;
        // 0x1df56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF570u;
}
