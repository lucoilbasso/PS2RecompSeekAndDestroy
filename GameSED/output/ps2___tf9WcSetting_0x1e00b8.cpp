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

// Function: __tf9WcSetting
// Address: 0x1e00b8 - 0x1e0108
void ps2___tf9WcSetting_0x1e00b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9WcSetting_0x1e00b8");
#endif

    switch (ctx->pc) {
        case 0x1e00dcu: goto label_1e00dc;
        case 0x1e00f4u: goto label_1e00f4;
        default: break;
    }

    ctx->pc = 0x1e00b8u;

    // 0x1e00b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e00b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e00bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e00c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e00c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e00c4: 0x24501c50  addiu       $s0, $v0, 0x1C50
    ctx->pc = 0x1e00c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7248));
    // 0x1e00c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411C50u));
    // 0x1e00cc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E00CCu;
    {
        const bool branch_taken_0x1e00cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00CCu;
        // 0x1e00d0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00cc) {
            ctx->pc = 0x1E00F4u;
            goto label_1e00f4;
        }
    }
    ctx->pc = 0x1E00D4u;
    // 0x1e00d4: 0xc077e40  jal         func_1DF900
    ctx->pc = 0x1E00D4u;
    SET_GPR_U32(ctx, 31, 0x1E00DCu);
    ctx->pc = 0x1DF900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF900u, 0x1E00D4u, 0x1E00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00DCu;
label_1e00dc:
    // 0x1e00dc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e00dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e00e0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1e00e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1e00e4: 0x24a58328  addiu       $a1, $a1, -0x7CD8
    ctx->pc = 0x1e00e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935336));
    // 0x1e00e8: 0x24c61c40  addiu       $a2, $a2, 0x1C40
    ctx->pc = 0x1e00e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7232));
    // 0x1e00ec: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E00ECu;
    SET_GPR_U32(ctx, 31, 0x1E00F4u);
    ctx->pc = 0x1E00F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00ECu;
    // 0x1e00f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E00ECu, 0x1E00F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00F4u;
label_1e00f4:
    // 0x1e00f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e00f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e00f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e00fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e00fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0100: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0100u;
        // 0x1e0104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0108u;
}
