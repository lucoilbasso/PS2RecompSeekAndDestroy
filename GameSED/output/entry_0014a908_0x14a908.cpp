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

// Function: entry_0014a908
// Address: 0x14a908 - 0x14a944
void entry_0014a908_0x14a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a908_0x14a908");
#endif

    switch (ctx->pc) {
        case 0x14a914u: goto label_14a914;
        case 0x14a924u: goto label_14a924;
        default: break;
    }

    ctx->pc = 0x14a908u;

    // 0x14a908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a90c: 0xc068584  jal         func_1A1610
    ctx->pc = 0x14A90Cu;
    SET_GPR_U32(ctx, 31, 0x14A914u);
    ctx->pc = 0x14A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A90Cu;
    // 0x14a910: 0x24843580  addiu       $a0, $a0, 0x3580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x14A90Cu, 0x14A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A914u;
label_14a914:
    // 0x14a914: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x14a914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x14a918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a91c: 0xc068584  jal         func_1A1610
    ctx->pc = 0x14A91Cu;
    SET_GPR_U32(ctx, 31, 0x14A924u);
    ctx->pc = 0x14A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A91Cu;
    // 0x14a920: 0x24843598  addiu       $a0, $a0, 0x3598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x14A91Cu, 0x14A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A924u;
label_14a924:
    // 0x14a924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a92c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14a92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14a930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14a934: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14a934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a938: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14a938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a93c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A93Cu;
        // 0x14a940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A944u;
}
