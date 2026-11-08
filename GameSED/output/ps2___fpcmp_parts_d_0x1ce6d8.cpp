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

// Function: __fpcmp_parts_d
// Address: 0x1ce6d8 - 0x1ce7f8
void ps2___fpcmp_parts_d_0x1ce6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x1ce6d8");
#endif

    ctx->pc = 0x1ce6d8u;

    // 0x1ce6d8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1ce6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce6dc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1ce6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ce6e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE6E0u;
    {
        const bool branch_taken_0x1ce6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6e0) {
            ctx->pc = 0x1CE6F8u;
            goto label_1ce6f8;
        }
    }
    ctx->pc = 0x1CE6E8u;
    // 0x1ce6e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ce6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ce6ec: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1ce6ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ce6f0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE6F0u;
    {
        const bool branch_taken_0x1ce6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6f0) {
            ctx->pc = 0x1CE6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE6F0u;
            // 0x1ce6f4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE700u;
            goto label_1ce700;
        }
    }
    ctx->pc = 0x1CE6F8u;
label_1ce6f8:
    // 0x1ce6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6F8u;
        // 0x1ce6fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE700u;
label_1ce700:
    // 0x1ce700: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE700u;
    {
        const bool branch_taken_0x1ce700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE700u;
        // 0x1ce704: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce700) {
            ctx->pc = 0x1CE720u;
            goto label_1ce720;
        }
    }
    ctx->pc = 0x1CE708u;
    // 0x1ce708: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CE708u;
    {
        const bool branch_taken_0x1ce708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce708) {
            ctx->pc = 0x1CE70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE708u;
            // 0x1ce70c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE774u;
            goto label_1ce774;
        }
    }
    ctx->pc = 0x1CE710u;
    // 0x1ce710: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce714: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ce718: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE718u;
        // 0x1ce71c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE720u;
label_1ce720:
    // 0x1ce720: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE720u;
    {
        const bool branch_taken_0x1ce720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce720) {
            ctx->pc = 0x1CE724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE720u;
            // 0x1ce724: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE740u;
            goto label_1ce740;
        }
    }
    ctx->pc = 0x1CE728u;
    // 0x1ce728: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ce728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce72c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ce72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce734: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE734u;
        // 0x1ce738: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE73Cu;
    // 0x1ce73c: 0x0  nop
    ctx->pc = 0x1ce73cu;
    // NOP
label_1ce740:
    // 0x1ce740: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE740u;
    {
        const bool branch_taken_0x1ce740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce740) {
            ctx->pc = 0x1CE744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE740u;
            // 0x1ce744: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE768u;
            goto label_1ce768;
        }
    }
    ctx->pc = 0x1CE748u;
    // 0x1ce748: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1ce748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ce74c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CE74Cu;
    {
        const bool branch_taken_0x1ce74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE74Cu;
        // 0x1ce750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce74c) {
            ctx->pc = 0x1CE7F0u;
            goto label_1ce7f0;
        }
    }
    ctx->pc = 0x1CE754u;
    // 0x1ce754: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ce754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce75c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce760: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE760u;
        // 0x1ce764: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE768u;
label_1ce768:
    // 0x1ce768: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE768u;
    {
        const bool branch_taken_0x1ce768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce768) {
            ctx->pc = 0x1CE76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE768u;
            // 0x1ce76c: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE788u;
            goto label_1ce788;
        }
    }
    ctx->pc = 0x1CE770u;
    // 0x1ce770: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1ce770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce774:
    // 0x1ce774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE77Cu;
        // 0x1ce780: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE784u;
    // 0x1ce784: 0x0  nop
    ctx->pc = 0x1ce784u;
    // NOP
label_1ce788:
    // 0x1ce788: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce78c: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CE78Cu;
    {
        const bool branch_taken_0x1ce78c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE78Cu;
        // 0x1ce790: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce78c) {
            ctx->pc = 0x1CE7CCu;
            goto label_1ce7cc;
        }
    }
    ctx->pc = 0x1CE794u;
    // 0x1ce794: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ce798: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ce798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ce79c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1ce79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ce7a0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE7A0u;
    {
        const bool branch_taken_0x1ce7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7a0) {
            ctx->pc = 0x1CE7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7A0u;
            // 0x1ce7a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7CCu;
            goto label_1ce7cc;
        }
    }
    ctx->pc = 0x1CE7A8u;
    // 0x1ce7a8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1ce7a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ce7ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE7ACu;
    {
        const bool branch_taken_0x1ce7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7ACu;
        // 0x1ce7b0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7ac) {
            ctx->pc = 0x1CE7E4u;
            goto label_1ce7e4;
        }
    }
    ctx->pc = 0x1CE7B4u;
    // 0x1ce7b4: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x1ce7b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ce7b8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x1ce7b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ce7bc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1ce7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ce7c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7C0u;
    {
        const bool branch_taken_0x1ce7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7c0) {
            ctx->pc = 0x1CE7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7C0u;
            // 0x1ce7c4: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7D8u;
            goto label_1ce7d8;
        }
    }
    ctx->pc = 0x1CE7C8u;
    // 0x1ce7c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce7cc:
    // 0x1ce7cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7D0u;
        // 0x1ce7d4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE7D8u;
label_1ce7d8:
    // 0x1ce7d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7D8u;
    {
        const bool branch_taken_0x1ce7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7d8) {
            ctx->pc = 0x1CE7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7D8u;
            // 0x1ce7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7F0u;
            goto label_1ce7f0;
        }
    }
    ctx->pc = 0x1CE7E0u;
    // 0x1ce7e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ce7e4:
    // 0x1ce7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7E8u;
        // 0x1ce7ec: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE7F0u;
label_1ce7f0:
    // 0x1ce7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE7F8u;
}
