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

// Function: ApFieldFieldHitprimitivechange__FP8ApcField
// Address: 0x13c1c8 - 0x13c2a4
void ApFieldFieldHitprimitivechange__FP8ApcField_0x13c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldFieldHitprimitivechange__FP8ApcField_0x13c1c8");
#endif

    ctx->pc = 0x13c1c8u;

    // 0x13c1c8: 0x8f83912c  lw          $v1, -0x6ED4($gp)
    ctx->pc = 0x13c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x13c1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c1d0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13C1D0u;
    {
        const bool branch_taken_0x13c1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1D0u;
        // 0x13c1d4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1d0) {
            ctx->pc = 0x13C210u;
            goto label_13c210;
        }
    }
    ctx->pc = 0x13C1D8u;
    // 0x13c1d8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x13c1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13c1dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C1DCu;
    {
        const bool branch_taken_0x13c1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c1dc) {
            ctx->pc = 0x13C1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C1DCu;
            // 0x13c1e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C1F8u;
            goto label_13c1f8;
        }
    }
    ctx->pc = 0x13C1E4u;
    // 0x13c1e4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x13C1E4u;
    {
        const bool branch_taken_0x13c1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c1e4) {
            ctx->pc = 0x13C1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C1E4u;
            // 0x13c1e8: 0x8ce401e0  lw          $a0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C22Cu;
            goto label_13c22c;
        }
    }
    ctx->pc = 0x13C1ECu;
    // 0x13c1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13C1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C1F4u;
    // 0x13c1f4: 0x0  nop
    ctx->pc = 0x13c1f4u;
    // NOP
label_13c1f8:
    // 0x13c1f8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13C1F8u;
    {
        const bool branch_taken_0x13c1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1F8u;
        // 0x13c1fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1f8) {
            ctx->pc = 0x13C260u;
            goto label_13c260;
        }
    }
    ctx->pc = 0x13C200u;
    // 0x13c200: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13C200u;
    {
        const bool branch_taken_0x13c200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c200) {
            ctx->pc = 0x13C204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C200u;
            // 0x13c204: 0x8ce301e0  lw          $v1, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C284u;
            goto label_13c284;
        }
    }
    ctx->pc = 0x13C208u;
    // 0x13c208: 0x3e00008  jr          $ra
    ctx->pc = 0x13C208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C210u;
label_13c210:
    // 0x13c210: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x13c214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c218: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x13c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x13c21c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x13c21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13c220: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x13C220u;
    {
        const bool branch_taken_0x13c220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C220u;
        // 0x13c224: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c220) {
            ctx->pc = 0x13C280u;
            goto label_13c280;
        }
    }
    ctx->pc = 0x13C228u;
    // 0x13c228: 0x8ce401e0  lw          $a0, 0x1E0($a3)
    ctx->pc = 0x13c228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_13c22c:
    // 0x13c22c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x13c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x13c230: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x13c234: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x13c234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13c238: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x13c238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13c23c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x13c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x13c240: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x13c240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x13c244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13c244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13c248: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x13c248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x13c24c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x13c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13c250: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c254: 0x3e00008  jr          $ra
    ctx->pc = 0x13C254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C254u;
        // 0x13c258: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C25Cu;
    // 0x13c25c: 0x0  nop
    ctx->pc = 0x13c25cu;
    // NOP
label_13c260:
    // 0x13c260: 0x8ce301e0  lw          $v1, 0x1E0($a3)
    ctx->pc = 0x13c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x13c264: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x13c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x13c268: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13c26c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13c270: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13c270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c274: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C274u;
    {
        const bool branch_taken_0x13c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C274u;
        // 0x13c278: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c274) {
            ctx->pc = 0x13C290u;
            goto label_13c290;
        }
    }
    ctx->pc = 0x13C27Cu;
    // 0x13c27c: 0x0  nop
    ctx->pc = 0x13c27cu;
    // NOP
label_13c280:
    // 0x13c280: 0x8ce301e0  lw          $v1, 0x1E0($a3)
    ctx->pc = 0x13c280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_13c284:
    // 0x13c284: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13c284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13c288: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x13c288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13c28c: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x13c28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
label_13c290:
    // 0x13c290: 0xace301e0  sw          $v1, 0x1E0($a3)
    ctx->pc = 0x13c290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
    // 0x13c294: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13c298: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13c298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13c29c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C29Cu;
        // 0x13c2a0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C2A4u;
}
