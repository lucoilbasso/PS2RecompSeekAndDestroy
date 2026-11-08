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

// Function: BMotionTimerSetup__FP5BcObjP11BMotionCtrli
// Address: 0x1a4ec8 - 0x1a4f38
void BMotionTimerSetup__FP5BcObjP11BMotionCtrli_0x1a4ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionTimerSetup__FP5BcObjP11BMotionCtrli_0x1a4ec8");
#endif

    switch (ctx->pc) {
        case 0x1a4ec8u: goto label_1a4ec8;
        case 0x1a4eccu: goto label_1a4ecc;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ed4u: goto label_1a4ed4;
        case 0x1a4ed8u: goto label_1a4ed8;
        case 0x1a4edcu: goto label_1a4edc;
        case 0x1a4ee0u: goto label_1a4ee0;
        case 0x1a4ee4u: goto label_1a4ee4;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4ef0u: goto label_1a4ef0;
        case 0x1a4ef4u: goto label_1a4ef4;
        case 0x1a4ef8u: goto label_1a4ef8;
        case 0x1a4efcu: goto label_1a4efc;
        case 0x1a4f00u: goto label_1a4f00;
        case 0x1a4f04u: goto label_1a4f04;
        case 0x1a4f08u: goto label_1a4f08;
        case 0x1a4f0cu: goto label_1a4f0c;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f14u: goto label_1a4f14;
        case 0x1a4f18u: goto label_1a4f18;
        case 0x1a4f1cu: goto label_1a4f1c;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f24u: goto label_1a4f24;
        case 0x1a4f28u: goto label_1a4f28;
        case 0x1a4f2cu: goto label_1a4f2c;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f34u: goto label_1a4f34;
        default: break;
    }

    ctx->pc = 0x1a4ec8u;

label_1a4ec8:
    // 0x1a4ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4ecc:
    // 0x1a4ecc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a4ed0:
    // 0x1a4ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4ed4:
    // 0x1a4ed4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ed8:
    // 0x1a4ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4edc:
    // 0x1a4edc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a4edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ee0:
    // 0x1a4ee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ee4:
    // 0x1a4ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ee8:
    // 0x1a4ee8: 0x24464e58  addiu       $a2, $v0, 0x4E58
    ctx->pc = 0x1a4ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20056));
label_1a4eec:
    // 0x1a4eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4ef0:
    // 0x1a4ef0: 0xc068866  jal         func_1A2198
label_1a4ef4:
    if (ctx->pc == 0x1A4EF4u) {
        ctx->pc = 0x1A4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EF0u;
        // 0x1a4ef4: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EF8u;
        goto label_1a4ef8;
    }
    ctx->pc = 0x1A4EF0u;
    SET_GPR_U32(ctx, 31, 0x1A4EF8u);
    ctx->pc = 0x1A4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EF0u;
    // 0x1a4ef4: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4EF0u, 0x1A4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EF8u;
label_1a4ef8:
    // 0x1a4ef8: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1a4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1a4efc:
    // 0x1a4efc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a4efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a4f00:
    // 0x1a4f00: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1a4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_1a4f04:
    // 0x1a4f04: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1a4f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1a4f08:
    // 0x1a4f08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a4f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f0c:
    // 0x1a4f0c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a4f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a4f10:
    // 0x1a4f10: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
label_1a4f14:
    if (ctx->pc == 0x1A4F14u) {
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F18u;
        goto label_1a4f18;
    }
    ctx->pc = 0x1A4F10u;
    {
        const bool branch_taken_0x1a4f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f10) {
            ctx->pc = 0x1A4F24u;
            goto label_1a4f24;
        }
    }
    ctx->pc = 0x1A4F18u;
label_1a4f18:
    // 0x1a4f18: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a4f1c:
    // 0x1a4f1c: 0x40f809  jalr        $v0
label_1a4f20:
    if (ctx->pc == 0x1A4F20u) {
        ctx->pc = 0x1A4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F1Cu;
        // 0x1a4f20: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F24u;
        goto label_1a4f24;
    }
    ctx->pc = 0x1A4F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4F24u);
        ctx->pc = 0x1A4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F1Cu;
        // 0x1a4f20: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F1Cu, 0x1A4F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4F24u;
label_1a4f24:
    // 0x1a4f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4f28:
    // 0x1a4f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4f2c:
    // 0x1a4f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4f30:
    // 0x1a4f30: 0x3e00008  jr          $ra
label_1a4f34:
    if (ctx->pc == 0x1A4F34u) {
        ctx->pc = 0x1A4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F30u;
        // 0x1a4f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F38u;
        goto label_fallthrough_0x1a4f30;
    }
    ctx->pc = 0x1A4F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F30u;
        // 0x1a4f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4f30:
    ctx->pc = 0x1A4F38u;
}
