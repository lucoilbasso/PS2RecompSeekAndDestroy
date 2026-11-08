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

// Function: Cmd_SE_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x11d270 - 0x11d344
void Cmd_SE_SETUP_Entry__FP15BsSCDEntControl_0x11d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_SETUP_Entry__FP15BsSCDEntControl_0x11d270");
#endif

    switch (ctx->pc) {
        case 0x11d298u: goto label_11d298;
        case 0x11d2a4u: goto label_11d2a4;
        case 0x11d2c4u: goto label_11d2c4;
        case 0x11d2ccu: goto label_11d2cc;
        case 0x11d2f0u: goto label_11d2f0;
        case 0x11d328u: goto label_11d328;
        default: break;
    }

    ctx->pc = 0x11d270u;

    // 0x11d270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d27c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d280: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11d284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11d288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d28c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x11d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11d290: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11D290u;
    SET_GPR_U32(ctx, 31, 0x11D298u);
    ctx->pc = 0x11D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D290u;
    // 0x11d294: 0x8c520044  lw          $s2, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11D290u, 0x11D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D298u;
label_11d298:
    // 0x11d298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d29c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11D29Cu;
    SET_GPR_U32(ctx, 31, 0x11D2A4u);
    ctx->pc = 0x11D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D29Cu;
    // 0x11d2a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11D29Cu, 0x11D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2A4u;
label_11d2a4:
    // 0x11d2a4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x11d2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11d2a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11d2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2ac: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x11d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11d2b0: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x11d2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11d2b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11d2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2b8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x11d2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11d2bc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11D2BCu;
    SET_GPR_U32(ctx, 31, 0x11D2C4u);
    ctx->pc = 0x11D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2BCu;
    // 0x11d2c0: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11D2BCu, 0x11D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2C4u;
label_11d2c4:
    // 0x11d2c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x11D2C4u;
    SET_GPR_U32(ctx, 31, 0x11D2CCu);
    ctx->pc = 0x11D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2C4u;
    // 0x11d2c8: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11D2C4u, 0x11D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2CCu;
label_11d2cc:
    // 0x11d2cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11d2d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D2D0u;
    {
        const bool branch_taken_0x11d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2D0u;
        // 0x11d2d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2d0) {
            ctx->pc = 0x11D2DCu;
            goto label_11d2dc;
        }
    }
    ctx->pc = 0x11D2D8u;
    // 0x11d2d8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x11d2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_11d2dc:
    // 0x11d2dc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d2e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2e4: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x11d2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x11d2e8: 0xc05eec6  jal         func_17BB18
    ctx->pc = 0x11D2E8u;
    SET_GPR_U32(ctx, 31, 0x11D2F0u);
    ctx->pc = 0x11D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2E8u;
    // 0x11d2ec: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB18u, 0x11D2E8u, 0x11D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2F0u;
label_11d2f0:
    // 0x11d2f0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x11d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11d2f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11d2f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11d2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d300: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D300u;
    {
        const bool branch_taken_0x11d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D300u;
        // 0x11d304: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d300) {
            ctx->pc = 0x11D30Cu;
            goto label_11d30c;
        }
    }
    ctx->pc = 0x11D308u;
    // 0x11d308: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x11d308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_11d30c:
    // 0x11d30c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d310: 0x2508f800  addiu       $t0, $t0, -0x800
    ctx->pc = 0x11d310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965248));
    // 0x11d314: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x11d314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x11d318: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x11d318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11d31c: 0x8ce770e8  lw          $a3, 0x70E8($a3)
    ctx->pc = 0x11d31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28904)));
    // 0x11d320: 0xc047758  jal         func_11DD60
    ctx->pc = 0x11D320u;
    SET_GPR_U32(ctx, 31, 0x11D328u);
    ctx->pc = 0x11D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D320u;
    // 0x11d324: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD60u, 0x11D320u, 0x11D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D328u;
label_11d328:
    // 0x11d328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11d330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11d334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d33c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D33Cu;
        // 0x11d340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D344u;
}
