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

// Function: entry_001057e0
// Address: 0x1057e0 - 0x105814
void entry_001057e0_0x1057e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001057e0_0x1057e0");
#endif

    switch (ctx->pc) {
        case 0x1057ecu: goto label_1057ec;
        case 0x1057fcu: goto label_1057fc;
        default: break;
    }

    ctx->pc = 0x1057e0u;

    // 0x1057e0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1057e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1057e4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1057E4u;
    SET_GPR_U32(ctx, 31, 0x1057ECu);
    ctx->pc = 0x1057E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057E4u;
    // 0x1057e8: 0x24843818  addiu       $a0, $a0, 0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1057E4u, 0x1057ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057ECu;
label_1057ec:
    // 0x1057ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1057ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1057f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1057F4u;
    SET_GPR_U32(ctx, 31, 0x1057FCu);
    ctx->pc = 0x1057F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057F4u;
    // 0x1057f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1057F4u, 0x1057FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057FCu;
label_1057fc:
    // 0x1057fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1057fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105804: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105808: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10580c: 0x3e00008  jr          $ra
    ctx->pc = 0x10580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10580Cu;
        // 0x105810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105814u;
}
