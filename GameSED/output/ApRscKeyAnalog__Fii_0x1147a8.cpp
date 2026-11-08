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

// Function: ApRscKeyAnalog__Fii
// Address: 0x1147a8 - 0x114830
void ApRscKeyAnalog__Fii_0x1147a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyAnalog__Fii_0x1147a8");
#endif

    ctx->pc = 0x1147a8u;

    // 0x1147a8: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x1147a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1147ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1147acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1147b0: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x1147b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1147b4: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1147b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1147b8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1147b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1147bc: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x1147bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1147c0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1147c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1147c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1147c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1147c8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1147c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1147cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1147ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1147d0: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1147D0u;
    {
        const bool branch_taken_0x1147d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147D0u;
        // 0x1147d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147d0) {
            ctx->pc = 0x114828u;
            goto label_114828;
        }
    }
    ctx->pc = 0x1147D8u;
    // 0x1147d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1147d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1147dc: 0x50820010  beql        $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1147DCu;
    {
        const bool branch_taken_0x1147dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1147dc) {
            ctx->pc = 0x1147E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1147DCu;
            // 0x1147e0: 0x90660011  lbu         $a2, 0x11($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114820u;
            goto label_114820;
        }
    }
    ctx->pc = 0x1147E4u;
    // 0x1147e4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1147e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1147e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1147E8u;
    {
        const bool branch_taken_0x1147e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1147e8) {
            ctx->pc = 0x1147ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1147E8u;
            // 0x1147ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114800u;
            goto label_114800;
        }
    }
    ctx->pc = 0x1147F0u;
    // 0x1147f0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1147F0u;
    {
        const bool branch_taken_0x1147f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1147f0) {
            ctx->pc = 0x1147F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1147F0u;
            // 0x1147f4: 0x90660010  lbu         $a2, 0x10($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114820u;
            goto label_114820;
        }
    }
    ctx->pc = 0x1147F8u;
    // 0x1147f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1147F8u;
    {
        const bool branch_taken_0x1147f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147F8u;
        // 0x1147fc: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147f8) {
            ctx->pc = 0x114824u;
            goto label_114824;
        }
    }
    ctx->pc = 0x114800u;
label_114800:
    // 0x114800: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114800u;
    {
        const bool branch_taken_0x114800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x114800) {
            ctx->pc = 0x114804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114800u;
            // 0x114804: 0x90660012  lbu         $a2, 0x12($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114820u;
            goto label_114820;
        }
    }
    ctx->pc = 0x114808u;
    // 0x114808: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x114808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11480c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11480Cu;
    {
        const bool branch_taken_0x11480c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11480c) {
            ctx->pc = 0x114810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11480Cu;
            // 0x114810: 0x90660013  lbu         $a2, 0x13($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114820u;
            goto label_114820;
        }
    }
    ctx->pc = 0x114814u;
    // 0x114814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114814u;
    {
        const bool branch_taken_0x114814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114814u;
        // 0x114818: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114814) {
            ctx->pc = 0x114824u;
            goto label_114824;
        }
    }
    ctx->pc = 0x11481Cu;
    // 0x11481c: 0x0  nop
    ctx->pc = 0x11481cu;
    // NOP
label_114820:
    // 0x114820: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x114820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_114824:
    // 0x114824: 0x24468000  addiu       $a2, $v0, -0x8000
    ctx->pc = 0x114824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_114828:
    // 0x114828: 0x3e00008  jr          $ra
    ctx->pc = 0x114828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114828u;
        // 0x11482c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114830u;
}
