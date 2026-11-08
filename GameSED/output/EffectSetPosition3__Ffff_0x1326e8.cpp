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

// Function: EffectSetPosition3__Ffff
// Address: 0x1326e8 - 0x132750
void EffectSetPosition3__Ffff_0x1326e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSetPosition3__Ffff_0x1326e8");
#endif

    switch (ctx->pc) {
        case 0x1326e8u: goto label_1326e8;
        case 0x1326ecu: goto label_1326ec;
        case 0x1326f0u: goto label_1326f0;
        case 0x1326f4u: goto label_1326f4;
        case 0x1326f8u: goto label_1326f8;
        case 0x1326fcu: goto label_1326fc;
        case 0x132700u: goto label_132700;
        case 0x132704u: goto label_132704;
        case 0x132708u: goto label_132708;
        case 0x13270cu: goto label_13270c;
        case 0x132710u: goto label_132710;
        case 0x132714u: goto label_132714;
        case 0x132718u: goto label_132718;
        case 0x13271cu: goto label_13271c;
        case 0x132720u: goto label_132720;
        case 0x132724u: goto label_132724;
        case 0x132728u: goto label_132728;
        case 0x13272cu: goto label_13272c;
        case 0x132730u: goto label_132730;
        case 0x132734u: goto label_132734;
        case 0x132738u: goto label_132738;
        case 0x13273cu: goto label_13273c;
        case 0x132740u: goto label_132740;
        case 0x132744u: goto label_132744;
        case 0x132748u: goto label_132748;
        case 0x13274cu: goto label_13274c;
        default: break;
    }

    ctx->pc = 0x1326e8u;

label_1326e8:
    // 0x1326e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1326e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1326ec:
    // 0x1326ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1326ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1326f0:
    // 0x1326f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1326f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1326f4:
    // 0x1326f4: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1326f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_1326f8:
    // 0x1326f8: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x1326f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1326fc:
    // 0x1326fc: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x1326fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_132700:
    // 0x132700: 0x8cc602f8  lw          $a2, 0x2F8($a2)
    ctx->pc = 0x132700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 760)));
label_132704:
    // 0x132704: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x132704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_132708:
    // 0x132708: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x132708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_13270c:
    // 0x13270c: 0x44047000  mfc1        $a0, $f14
    ctx->pc = 0x13270cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_132710:
    // 0x132710: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x132710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_132714:
    // 0x132714: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x132714u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_132718:
    // 0x132718: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x132718u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_13271c:
    // 0x13271c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13271cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_132720:
    // 0x132720: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x132720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_132724:
    // 0x132724: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_132728:
    if (ctx->pc == 0x132728u) {
        ctx->pc = 0x132728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132724u;
        // 0x132728: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13272Cu;
        goto label_13272c;
    }
    ctx->pc = 0x132724u;
    {
        const bool branch_taken_0x132724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x132728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132724u;
        // 0x132728: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132724) {
            ctx->pc = 0x132744u;
            goto label_132744;
        }
    }
    ctx->pc = 0x13272Cu;
label_13272c:
    // 0x13272c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_132730:
    // 0x132730: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x132730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_132734:
    // 0x132734: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x132734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_132738:
    // 0x132738: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x132738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13273c:
    // 0x13273c: 0x60f809  jalr        $v1
label_132740:
    if (ctx->pc == 0x132740u) {
        ctx->pc = 0x132740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13273Cu;
        // 0x132740: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132744u;
        goto label_132744;
    }
    ctx->pc = 0x13273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132744u);
        ctx->pc = 0x132740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13273Cu;
        // 0x132740: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13273Cu, 0x132744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132744u;
label_132744:
    // 0x132744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_132748:
    // 0x132748: 0x3e00008  jr          $ra
label_13274c:
    if (ctx->pc == 0x13274Cu) {
        ctx->pc = 0x13274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132748u;
        // 0x13274c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132750u;
        goto label_fallthrough_0x132748;
    }
    ctx->pc = 0x132748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132748u;
        // 0x13274c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132748:
    ctx->pc = 0x132750u;
}
