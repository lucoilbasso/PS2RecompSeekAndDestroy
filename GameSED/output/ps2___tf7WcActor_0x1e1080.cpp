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

// Function: __tf7WcActor
// Address: 0x1e1080 - 0x1e10d0
void ps2___tf7WcActor_0x1e1080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcActor_0x1e1080");
#endif

    switch (ctx->pc) {
        case 0x1e10a4u: goto label_1e10a4;
        case 0x1e10bcu: goto label_1e10bc;
        default: break;
    }

    ctx->pc = 0x1e1080u;

    // 0x1e1080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1084: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e1084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e1088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e108c: 0x24501cc0  addiu       $s0, $v0, 0x1CC0
    ctx->pc = 0x1e108cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7360));
    // 0x1e1090: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411CC0u));
    // 0x1e1094: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1094u;
    {
        const bool branch_taken_0x1e1094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1094u;
        // 0x1e1098: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1094) {
            ctx->pc = 0x1E10BCu;
            goto label_1e10bc;
        }
    }
    ctx->pc = 0x1E109Cu;
    // 0x1e109c: 0xc07830e  jal         func_1E0C38
    ctx->pc = 0x1E109Cu;
    SET_GPR_U32(ctx, 31, 0x1E10A4u);
    ctx->pc = 0x1E0C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0C38u, 0x1E109Cu, 0x1E10A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10A4u;
label_1e10a4:
    // 0x1e10a4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e10a8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1e10a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1e10ac: 0x24a58510  addiu       $a1, $a1, -0x7AF0
    ctx->pc = 0x1e10acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935824));
    // 0x1e10b0: 0x24c61cb0  addiu       $a2, $a2, 0x1CB0
    ctx->pc = 0x1e10b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7344));
    // 0x1e10b4: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E10B4u;
    SET_GPR_U32(ctx, 31, 0x1E10BCu);
    ctx->pc = 0x1E10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E10B4u;
    // 0x1e10b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E10B4u, 0x1E10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10BCu;
label_1e10bc:
    // 0x1e10bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e10bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e10c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e10c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e10c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e10c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E10C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10C8u;
        // 0x1e10cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E10C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E10D0u;
}
