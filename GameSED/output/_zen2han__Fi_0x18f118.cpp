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

// Function: _zen2han__Fi
// Address: 0x18f118 - 0x18f1b8
void _zen2han__Fi_0x18f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_zen2han__Fi_0x18f118");
#endif

    switch (ctx->pc) {
        case 0x18f160u: goto label_18f160;
        case 0x18f188u: goto label_18f188;
        default: break;
    }

    ctx->pc = 0x18f118u;

    // 0x18f118: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x18f118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x18f11c: 0x2c630060  sltiu       $v1, $v1, 0x60
    ctx->pc = 0x18f11cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x18f120: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18F120u;
    {
        const bool branch_taken_0x18f120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F120u;
        // 0x18f124: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f120) {
            ctx->pc = 0x18F1B0u;
            goto label_18f1b0;
        }
    }
    ctx->pc = 0x18F128u;
    // 0x18f128: 0x2483dcd0  addiu       $v1, $a0, -0x2330
    ctx->pc = 0x18f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958288));
    // 0x18f12c: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x18f12cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x18f130: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x18F130u;
    {
        const bool branch_taken_0x18f130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F130u;
        // 0x18f134: 0x2482dd00  addiu       $v0, $a0, -0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f130) {
            ctx->pc = 0x18F1B0u;
            goto label_18f1b0;
        }
    }
    ctx->pc = 0x18F138u;
    // 0x18f138: 0x2483dcbf  addiu       $v1, $a0, -0x2341
    ctx->pc = 0x18f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958271));
    // 0x18f13c: 0x2c63001a  sltiu       $v1, $v1, 0x1A
    ctx->pc = 0x18f13cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f140: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x18F140u;
    {
        const bool branch_taken_0x18f140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f140) {
            ctx->pc = 0x18F1B0u;
            goto label_18f1b0;
        }
    }
    ctx->pc = 0x18F148u;
    // 0x18f148: 0x2482dc9f  addiu       $v0, $a0, -0x2361
    ctx->pc = 0x18f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958239));
    // 0x18f14c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x18f14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f150: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F150u;
    {
        const bool branch_taken_0x18f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f150) {
            ctx->pc = 0x18F154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F150u;
            // 0x18f154: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F170u;
            goto label_18f170;
        }
    }
    ctx->pc = 0x18F158u;
    // 0x18f158: 0x3e00008  jr          $ra
    ctx->pc = 0x18F158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F158u;
        // 0x18f15c: 0x2482dd00  addiu       $v0, $a0, -0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F160u;
label_18f160:
    // 0x18f160: 0x8f838d70  lw          $v1, -0x7290($gp)
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x18f164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18f168: 0x3e00008  jr          $ra
    ctx->pc = 0x18F168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F168u;
        // 0x18f16c: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F170u;
label_18f170:
    // 0x18f170: 0x2463edd8  addiu       $v1, $v1, -0x1228
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962648));
    // 0x18f174: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18f174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f178: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F178u;
    {
        const bool branch_taken_0x18f178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F178u;
        // 0x18f17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f178) {
            ctx->pc = 0x18F1ACu;
            goto label_18f1ac;
        }
    }
    ctx->pc = 0x18F180u;
    // 0x18f180: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18f180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f184: 0x0  nop
    ctx->pc = 0x18f184u;
    // NOP
label_18f188:
    // 0x18f188: 0x1082fff5  beq         $a0, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18F188u;
    {
        const bool branch_taken_0x18f188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F188u;
        // 0x18f18c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f188) {
            ctx->pc = 0x18F160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f160;
        }
    }
    ctx->pc = 0x18F190u;
    // 0x18f190: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18f190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f194: 0x0  nop
    ctx->pc = 0x18f194u;
    // NOP
    // 0x18f198: 0x0  nop
    ctx->pc = 0x18f198u;
    // NOP
    // 0x18f19c: 0x0  nop
    ctx->pc = 0x18f19cu;
    // NOP
    // 0x18f1a0: 0x0  nop
    ctx->pc = 0x18f1a0u;
    // NOP
    // 0x18f1a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18F1A4u;
    {
        const bool branch_taken_0x18f1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1A4u;
        // 0x18f1a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1a4) {
            ctx->pc = 0x18F188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f188;
        }
    }
    ctx->pc = 0x18F1ACu;
label_18f1ac:
    // 0x18f1ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_18f1b0:
    // 0x18f1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F1B8u;
}
