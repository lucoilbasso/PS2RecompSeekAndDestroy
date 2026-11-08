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

// Function: entry_001780e0
// Address: 0x1780e0 - 0x178120
void entry_001780e0_0x1780e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001780e0_0x1780e0");
#endif

    switch (ctx->pc) {
        case 0x1780e8u: goto label_1780e8;
        case 0x178100u: goto label_178100;
        default: break;
    }

    ctx->pc = 0x1780e0u;

    // 0x1780e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1780E0u;
    SET_GPR_U32(ctx, 31, 0x1780E8u);
    ctx->pc = 0x1780E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780E0u;
    // 0x1780e4: 0x8e241010  lw          $a0, 0x1010($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1780E0u, 0x1780E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780E8u;
label_1780e8:
    // 0x1780e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1780e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780ec: 0x8e221044  lw          $v0, 0x1044($s1)
    ctx->pc = 0x1780ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4164)));
    // 0x1780f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1780f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1780f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1780f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1780f8: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x1780F8u;
    SET_GPR_U32(ctx, 31, 0x178100u);
    ctx->pc = 0x1780FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780F8u;
    // 0x1780fc: 0xae221044  sw          $v0, 0x1044($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x1780F8u, 0x178100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178100u;
label_178100:
    // 0x178100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17810c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17810cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178110: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178114: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x178114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178118: 0x3e00008  jr          $ra
    ctx->pc = 0x178118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178118u;
        // 0x17811c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178120u;
}
