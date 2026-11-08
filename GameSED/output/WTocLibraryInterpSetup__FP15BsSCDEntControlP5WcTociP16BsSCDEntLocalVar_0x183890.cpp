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

// Function: WTocLibraryInterpSetup__FP15BsSCDEntControlP5WcTociP16BsSCDEntLocalVar
// Address: 0x183890 - 0x183954
void WTocLibraryInterpSetup__FP15BsSCDEntControlP5WcTociP16BsSCDEntLocalVar_0x183890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTocLibraryInterpSetup__FP15BsSCDEntControlP5WcTociP16BsSCDEntLocalVar_0x183890");
#endif

    switch (ctx->pc) {
        case 0x1838e8u: goto label_1838e8;
        case 0x1838fcu: goto label_1838fc;
        default: break;
    }

    ctx->pc = 0x183890u;

    // 0x183890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18389c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1838a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1838a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1838a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1838a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1838a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1838acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1838b0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1838b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1838b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1838b8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1838bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1838bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1838c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1838c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838c4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1838c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1838c8: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1838cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1838ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1838d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1838d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1838D4u;
    {
        const bool branch_taken_0x1838d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1838D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838D4u;
        // 0x1838d8: 0x103a021  addu        $s4, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838d4) {
            ctx->pc = 0x1838FCu;
            goto label_1838fc;
        }
    }
    ctx->pc = 0x1838DCu;
    // 0x1838dc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1838e0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1838E0u;
    SET_GPR_U32(ctx, 31, 0x1838E8u);
    ctx->pc = 0x1838E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838E0u;
    // 0x1838e4: 0x24847e28  addiu       $a0, $a0, 0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1838E0u, 0x1838E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838E8u;
label_1838e8:
    // 0x1838e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1838ec: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
    // 0x1838f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1838f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1838F4u;
    SET_GPR_U32(ctx, 31, 0x1838FCu);
    ctx->pc = 0x1838F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838F4u;
    // 0x1838f8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1838F4u, 0x1838FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838FCu;
label_1838fc:
    // 0x1838fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1838fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x183900: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x183900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183904: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x183904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x183908: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x183908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x18390c: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x18390cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x183910: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x183910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x183914: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x183914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x183918: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x183918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18391c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18391cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183920: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x183920u;
    {
        const bool branch_taken_0x183920 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x183924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183920u;
        // 0x183924: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183920) {
            ctx->pc = 0x18392Cu;
            goto label_18392c;
        }
    }
    ctx->pc = 0x183928u;
    // 0x183928: 0x8e270038  lw          $a3, 0x38($s1)
    ctx->pc = 0x183928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_18392c:
    // 0x18392c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18392cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183930: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x183930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x183934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18393c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18393cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183940: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x183940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183944: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x183944u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183948: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x183948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18394c: 0x3e00008  jr          $ra
    ctx->pc = 0x18394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18394Cu;
        // 0x183950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18394Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183954u;
}
