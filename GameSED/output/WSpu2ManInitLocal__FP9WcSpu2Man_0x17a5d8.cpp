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

// Function: WSpu2ManInitLocal__FP9WcSpu2Man
// Address: 0x17a5d8 - 0x17a620
void WSpu2ManInitLocal__FP9WcSpu2Man_0x17a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpu2ManInitLocal__FP9WcSpu2Man_0x17a5d8");
#endif

    switch (ctx->pc) {
        case 0x17a5ecu: goto label_17a5ec;
        case 0x17a60cu: goto label_17a60c;
        default: break;
    }

    ctx->pc = 0x17a5d8u;

    // 0x17a5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a5dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17a5e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17a5e4: 0xc05e988  jal         func_17A620
    ctx->pc = 0x17A5E4u;
    SET_GPR_U32(ctx, 31, 0x17A5ECu);
    ctx->pc = 0x17A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5E4u;
    // 0x17a5e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A620u, 0x17A5E4u, 0x17A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5ECu;
label_17a5ec:
    // 0x17a5ec: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a5f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5f4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x17a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x17a5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a5fc: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x17a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    // 0x17a600: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17a600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17a604: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17A604u;
    SET_GPR_U32(ctx, 31, 0x17A60Cu);
    ctx->pc = 0x17A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A604u;
    // 0x17a608: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17A604u, 0x17A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A60Cu;
label_17a60c:
    // 0x17a60c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x17a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x17a610: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a614: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a618: 0x3e00008  jr          $ra
    ctx->pc = 0x17A618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A618u;
        // 0x17a61c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A620u;
}
