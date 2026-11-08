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

// Function: BJobRegistObjectBase__FP5BcJobP5BcObjT1
// Address: 0x1a1678 - 0x1a16dc
void BJobRegistObjectBase__FP5BcJobP5BcObjT1_0x1a1678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BJobRegistObjectBase__FP5BcJobP5BcObjT1_0x1a1678");
#endif

    switch (ctx->pc) {
        case 0x1a1678u: goto label_1a1678;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1680u: goto label_1a1680;
        case 0x1a1684u: goto label_1a1684;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a168cu: goto label_1a168c;
        case 0x1a1690u: goto label_1a1690;
        case 0x1a1694u: goto label_1a1694;
        case 0x1a1698u: goto label_1a1698;
        case 0x1a169cu: goto label_1a169c;
        case 0x1a16a0u: goto label_1a16a0;
        case 0x1a16a4u: goto label_1a16a4;
        case 0x1a16a8u: goto label_1a16a8;
        case 0x1a16acu: goto label_1a16ac;
        case 0x1a16b0u: goto label_1a16b0;
        case 0x1a16b4u: goto label_1a16b4;
        case 0x1a16b8u: goto label_1a16b8;
        case 0x1a16bcu: goto label_1a16bc;
        case 0x1a16c0u: goto label_1a16c0;
        case 0x1a16c4u: goto label_1a16c4;
        case 0x1a16c8u: goto label_1a16c8;
        case 0x1a16ccu: goto label_1a16cc;
        case 0x1a16d0u: goto label_1a16d0;
        case 0x1a16d4u: goto label_1a16d4;
        case 0x1a16d8u: goto label_1a16d8;
        default: break;
    }

    ctx->pc = 0x1a1678u;

label_1a1678:
    // 0x1a1678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a167c:
    // 0x1a167c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1680:
    // 0x1a1680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1684:
    // 0x1a1684: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a1684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a1688:
    // 0x1a1688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a168c:
    // 0x1a168c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1690:
    // 0x1a1690: 0xc0683f0  jal         func_1A0FC0
label_1a1694:
    if (ctx->pc == 0x1A1694u) {
        ctx->pc = 0x1A1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1690u;
        // 0x1a1694: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1698u;
        goto label_1a1698;
    }
    ctx->pc = 0x1A1690u;
    SET_GPR_U32(ctx, 31, 0x1A1698u);
    ctx->pc = 0x1A1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1690u;
    // 0x1a1694: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FC0u, 0x1A1690u, 0x1A1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1698u;
label_1a1698:
    // 0x1a1698: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a169c:
    // 0x1a169c: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
label_1a16a0:
    // 0x1a16a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a16a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a16a4:
    // 0x1a16a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a16a8:
    if (ctx->pc == 0x1A16A8u) {
        ctx->pc = 0x1A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16A4u;
        // 0x1a16a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16ACu;
        goto label_1a16ac;
    }
    ctx->pc = 0x1A16A4u;
    {
        const bool branch_taken_0x1a16a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16A4u;
        // 0x1a16a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16a4) {
            ctx->pc = 0x1A16B4u;
            goto label_1a16b4;
        }
    }
    ctx->pc = 0x1A16ACu;
label_1a16ac:
    // 0x1a16ac: 0xc068186  jal         func_1A0618
label_1a16b0:
    if (ctx->pc == 0x1A16B0u) {
        ctx->pc = 0x1A16B4u;
        goto label_1a16b4;
    }
    ctx->pc = 0x1A16ACu;
    SET_GPR_U32(ctx, 31, 0x1A16B4u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A16ACu, 0x1A16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16B4u;
label_1a16b4:
    // 0x1a16b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a16b8:
    // 0x1a16b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a16bc:
    if (ctx->pc == 0x1A16BCu) {
        ctx->pc = 0x1A16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16B8u;
        // 0x1a16bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16C0u;
        goto label_1a16c0;
    }
    ctx->pc = 0x1A16B8u;
    {
        const bool branch_taken_0x1a16b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16B8u;
        // 0x1a16bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16b8) {
            ctx->pc = 0x1A16C8u;
            goto label_1a16c8;
        }
    }
    ctx->pc = 0x1A16C0u;
label_1a16c0:
    // 0x1a16c0: 0x40f809  jalr        $v0
label_1a16c4:
    if (ctx->pc == 0x1A16C4u) {
        ctx->pc = 0x1A16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16C0u;
        // 0x1a16c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16C8u;
        goto label_1a16c8;
    }
    ctx->pc = 0x1A16C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A16C8u);
        ctx->pc = 0x1A16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16C0u;
        // 0x1a16c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A16C0u, 0x1A16C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A16C8u;
label_1a16c8:
    // 0x1a16c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a16c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a16cc:
    // 0x1a16cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a16ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a16d0:
    // 0x1a16d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a16d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a16d4:
    // 0x1a16d4: 0x3e00008  jr          $ra
label_1a16d8:
    if (ctx->pc == 0x1A16D8u) {
        ctx->pc = 0x1A16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16D4u;
        // 0x1a16d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16DCu;
        goto label_fallthrough_0x1a16d4;
    }
    ctx->pc = 0x1A16D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16D4u;
        // 0x1a16d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A16D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a16d4:
    ctx->pc = 0x1A16DCu;
}
