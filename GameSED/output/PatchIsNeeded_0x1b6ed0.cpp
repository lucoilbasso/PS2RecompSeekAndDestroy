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

// Function: PatchIsNeeded
// Address: 0x1b6ed0 - 0x1b6f38
void PatchIsNeeded_0x1b6ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PatchIsNeeded_0x1b6ed0");
#endif

    switch (ctx->pc) {
        case 0x1b6ee4u: goto label_1b6ee4;
        case 0x1b6f08u: goto label_1b6f08;
        case 0x1b6f10u: goto label_1b6f10;
        case 0x1b6f18u: goto label_1b6f18;
        default: break;
    }

    ctx->pc = 0x1b6ed0u;

    // 0x1b6ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6ed4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b6ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b6edc: 0xc06bd44  jal         func_1AF510
    ctx->pc = 0x1B6EDCu;
    SET_GPR_U32(ctx, 31, 0x1B6EE4u);
    ctx->pc = 0x1B6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EDCu;
    // 0x1b6ee0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF510u, 0x1B6EDCu, 0x1B6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EE4u;
label_1b6ee4:
    // 0x1b6ee4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6ee8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6eec: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x1b6eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x1b6ef0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x1b6ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b6ef4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b6ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b6ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6efc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1b6efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1b6f00: 0xc06bd40  jal         func_1AF500
    ctx->pc = 0x1B6F00u;
    SET_GPR_U32(ctx, 31, 0x1B6F08u);
    ctx->pc = 0x1B6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F00u;
    // 0x1b6f04: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF500u, 0x1B6F00u, 0x1B6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F08u;
label_1b6f08:
    // 0x1b6f08: 0xc06bd44  jal         func_1AF510
    ctx->pc = 0x1B6F08u;
    SET_GPR_U32(ctx, 31, 0x1B6F10u);
    ctx->pc = 0x1B6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F08u;
    // 0x1b6f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF510u, 0x1B6F08u, 0x1B6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F10u;
label_1b6f10:
    // 0x1b6f10: 0xc06bd40  jal         func_1AF500
    ctx->pc = 0x1B6F10u;
    SET_GPR_U32(ctx, 31, 0x1B6F18u);
    ctx->pc = 0x1B6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F10u;
    // 0x1b6f14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF500u, 0x1B6F10u, 0x1B6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F18u;
label_1b6f18:
    // 0x1b6f18: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b6f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6f20: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x1b6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x1b6f24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b6f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6f28: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b6f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b6f2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b6f30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F30u;
        // 0x1b6f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6F38u;
}
