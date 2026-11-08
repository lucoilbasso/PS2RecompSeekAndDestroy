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

// Function: WFontManInitLocal__FP9WcFontMan
// Address: 0x17c688 - 0x17c73c
void WFontManInitLocal__FP9WcFontMan_0x17c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFontManInitLocal__FP9WcFontMan_0x17c688");
#endif

    switch (ctx->pc) {
        case 0x17c6b8u: goto label_17c6b8;
        case 0x17c6c4u: goto label_17c6c4;
        case 0x17c6d0u: goto label_17c6d0;
        case 0x17c6e0u: goto label_17c6e0;
        case 0x17c6f0u: goto label_17c6f0;
        case 0x17c700u: goto label_17c700;
        default: break;
    }

    ctx->pc = 0x17c688u;

    // 0x17c688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17c688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17c68c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c690: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17c694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c69c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17c6a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17c6a4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x17c6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c6a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17c6ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17c6b0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17C6B0u;
    SET_GPR_U32(ctx, 31, 0x17C6B8u);
    ctx->pc = 0x17C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6B0u;
    // 0x17c6b4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17C6B0u, 0x17C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6B8u;
label_17c6b8:
    // 0x17c6b8: 0xae220830  sw          $v0, 0x830($s1)
    ctx->pc = 0x17c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2096), GPR_U32(ctx, 2));
    // 0x17c6bc: 0xc05f1e8  jal         func_17C7A0
    ctx->pc = 0x17C6BCu;
    SET_GPR_U32(ctx, 31, 0x17C6C4u);
    ctx->pc = 0x17C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6BCu;
    // 0x17c6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C7A0u, 0x17C6BCu, 0x17C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6C4u;
label_17c6c4:
    // 0x17c6c4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17c6c8: 0x2450e9e0  addiu       $s0, $v0, -0x1620
    ctx->pc = 0x17c6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
    // 0x17c6cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21E9E0u));
label_17c6d0:
    // 0x17c6d0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x17c6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x17c6d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17c6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17c6d8: 0xc05f20c  jal         func_17C830
    ctx->pc = 0x17C6D8u;
    SET_GPR_U32(ctx, 31, 0x17C6E0u);
    ctx->pc = 0x17C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6D8u;
    // 0x17c6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C830u, 0x17C6D8u, 0x17C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6E0u;
label_17c6e0:
    // 0x17c6e0: 0x643fffb  bgezl       $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17C6E0u;
    {
        const bool branch_taken_0x17c6e0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x17c6e0) {
            ctx->pc = 0x17C6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C6E0u;
            // 0x17c6e4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C6E8u;
    // 0x17c6e8: 0xc05f0ea  jal         func_17C3A8
    ctx->pc = 0x17C6E8u;
    SET_GPR_U32(ctx, 31, 0x17C6F0u);
    ctx->pc = 0x17C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6E8u;
    // 0x17c6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C3A8u, 0x17C6E8u, 0x17C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6F0u;
label_17c6f0:
    // 0x17c6f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c6f4: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x17c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x17c6f8: 0x2622082e  addiu       $v0, $s1, 0x82E
    ctx->pc = 0x17c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2094));
    // 0x17c6fc: 0x0  nop
    ctx->pc = 0x17c6fcu;
    // NOP
label_17c700:
    // 0x17c700: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17c704: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x17c704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17c708: 0x0  nop
    ctx->pc = 0x17c708u;
    // NOP
    // 0x17c70c: 0x0  nop
    ctx->pc = 0x17c70cu;
    // NOP
    // 0x17c710: 0x0  nop
    ctx->pc = 0x17c710u;
    // NOP
    // 0x17c714: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C714u;
    {
        const bool branch_taken_0x17c714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C714u;
        // 0x17c718: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c714) {
            ctx->pc = 0x17C700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c700;
        }
    }
    ctx->pc = 0x17C71Cu;
    // 0x17c71c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c720: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17c720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c724: 0xac510044  sw          $s1, 0x44($v0)
    ctx->pc = 0x17c724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 17));
    // 0x17c728: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17c728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c72c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17c72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c730: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17c734: 0x3e00008  jr          $ra
    ctx->pc = 0x17C734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C734u;
        // 0x17c738: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C73Cu;
}
