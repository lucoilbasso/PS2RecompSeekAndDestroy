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

// Function: NowLevel__11BMotionCtrl
// Address: 0x1a47d8 - 0x1a4840
void NowLevel__11BMotionCtrl_0x1a47d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowLevel__11BMotionCtrl_0x1a47d8");
#endif

    switch (ctx->pc) {
        case 0x1a47d8u: goto label_1a47d8;
        case 0x1a47dcu: goto label_1a47dc;
        case 0x1a47e0u: goto label_1a47e0;
        case 0x1a47e4u: goto label_1a47e4;
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47ecu: goto label_1a47ec;
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f4u: goto label_1a47f4;
        case 0x1a47f8u: goto label_1a47f8;
        case 0x1a47fcu: goto label_1a47fc;
        case 0x1a4800u: goto label_1a4800;
        case 0x1a4804u: goto label_1a4804;
        case 0x1a4808u: goto label_1a4808;
        case 0x1a480cu: goto label_1a480c;
        case 0x1a4810u: goto label_1a4810;
        case 0x1a4814u: goto label_1a4814;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a481cu: goto label_1a481c;
        case 0x1a4820u: goto label_1a4820;
        case 0x1a4824u: goto label_1a4824;
        case 0x1a4828u: goto label_1a4828;
        case 0x1a482cu: goto label_1a482c;
        case 0x1a4830u: goto label_1a4830;
        case 0x1a4834u: goto label_1a4834;
        case 0x1a4838u: goto label_1a4838;
        case 0x1a483cu: goto label_1a483c;
        default: break;
    }

    ctx->pc = 0x1a47d8u;

label_1a47d8:
    // 0x1a47d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a47d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a47dc:
    // 0x1a47dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a47dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a47e0:
    // 0x1a47e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a47e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a47e4:
    // 0x1a47e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a47e8:
    // 0x1a47e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a47ec:
    if (ctx->pc == 0x1A47ECu) {
        ctx->pc = 0x1A47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47E8u;
        // 0x1a47ec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47F0u;
        goto label_1a47f0;
    }
    ctx->pc = 0x1A47E8u;
    {
        const bool branch_taken_0x1a47e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47E8u;
        // 0x1a47ec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47e8) {
            ctx->pc = 0x1A4808u;
            goto label_1a4808;
        }
    }
    ctx->pc = 0x1A47F0u;
label_1a47f0:
    // 0x1a47f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a47f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a47f4:
    // 0x1a47f4: 0x40f809  jalr        $v0
label_1a47f8:
    if (ctx->pc == 0x1A47F8u) {
        ctx->pc = 0x1A47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47F4u;
        // 0x1a47f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47FCu;
        goto label_1a47fc;
    }
    ctx->pc = 0x1A47F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A47FCu);
        ctx->pc = 0x1A47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47F4u;
        // 0x1a47f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47F4u, 0x1A47FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A47FCu;
label_1a47fc:
    // 0x1a47fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a4800:
    if (ctx->pc == 0x1A4800u) {
        ctx->pc = 0x1A4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47FCu;
        // 0x1a4800: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4804u;
        goto label_1a4804;
    }
    ctx->pc = 0x1A47FCu;
    {
        const bool branch_taken_0x1a47fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47FCu;
        // 0x1a4800: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47fc) {
            ctx->pc = 0x1A4838u;
            goto label_1a4838;
        }
    }
    ctx->pc = 0x1A4804u;
label_1a4804:
    // 0x1a4804: 0x0  nop
    ctx->pc = 0x1a4804u;
    // NOP
label_1a4808:
    // 0x1a4808: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1a4808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1a480c:
    // 0x1a480c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a4810:
    if (ctx->pc == 0x1A4810u) {
        ctx->pc = 0x1A4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A480Cu;
        // 0x1a4810: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4814u;
        goto label_1a4814;
    }
    ctx->pc = 0x1A480Cu;
    {
        const bool branch_taken_0x1a480c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a480c) {
            ctx->pc = 0x1A4810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A480Cu;
            // 0x1a4810: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4820u;
            goto label_1a4820;
        }
    }
    ctx->pc = 0x1A4814u;
label_1a4814:
    // 0x1a4814: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a4814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a4818:
    // 0x1a4818: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a481c:
    if (ctx->pc == 0x1A481Cu) {
        ctx->pc = 0x1A481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4818u;
        // 0x1a481c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4820u;
        goto label_1a4820;
    }
    ctx->pc = 0x1A4818u;
    {
        const bool branch_taken_0x1a4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4818u;
        // 0x1a481c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4818) {
            ctx->pc = 0x1A4834u;
            goto label_1a4834;
        }
    }
    ctx->pc = 0x1A4820u;
label_1a4820:
    // 0x1a4820: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a4820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a4824:
    // 0x1a4824: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a4824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a4828:
    // 0x1a4828: 0xc068186  jal         func_1A0618
label_1a482c:
    if (ctx->pc == 0x1A482Cu) {
        ctx->pc = 0x1A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4828u;
        // 0x1a482c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4830u;
        goto label_1a4830;
    }
    ctx->pc = 0x1A4828u;
    SET_GPR_U32(ctx, 31, 0x1A4830u);
    ctx->pc = 0x1A482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4828u;
    // 0x1a482c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4828u, 0x1A4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4830u;
label_1a4830:
    // 0x1a4830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4834:
    // 0x1a4834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4838:
    // 0x1a4838: 0x3e00008  jr          $ra
label_1a483c:
    if (ctx->pc == 0x1A483Cu) {
        ctx->pc = 0x1A483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4838u;
        // 0x1a483c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4840u;
        goto label_fallthrough_0x1a4838;
    }
    ctx->pc = 0x1A4838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4838u;
        // 0x1a483c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4838:
    ctx->pc = 0x1A4840u;
}
