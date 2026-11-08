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

// Function: BMotionDataLinerSetup__FP5BcObjP11BMotionCtrlPvb
// Address: 0x1a55a8 - 0x1a5648
void BMotionDataLinerSetup__FP5BcObjP11BMotionCtrlPvb_0x1a55a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionDataLinerSetup__FP5BcObjP11BMotionCtrlPvb_0x1a55a8");
#endif

    switch (ctx->pc) {
        case 0x1a55a8u: goto label_1a55a8;
        case 0x1a55acu: goto label_1a55ac;
        case 0x1a55b0u: goto label_1a55b0;
        case 0x1a55b4u: goto label_1a55b4;
        case 0x1a55b8u: goto label_1a55b8;
        case 0x1a55bcu: goto label_1a55bc;
        case 0x1a55c0u: goto label_1a55c0;
        case 0x1a55c4u: goto label_1a55c4;
        case 0x1a55c8u: goto label_1a55c8;
        case 0x1a55ccu: goto label_1a55cc;
        case 0x1a55d0u: goto label_1a55d0;
        case 0x1a55d4u: goto label_1a55d4;
        case 0x1a55d8u: goto label_1a55d8;
        case 0x1a55dcu: goto label_1a55dc;
        case 0x1a55e0u: goto label_1a55e0;
        case 0x1a55e4u: goto label_1a55e4;
        case 0x1a55e8u: goto label_1a55e8;
        case 0x1a55ecu: goto label_1a55ec;
        case 0x1a55f0u: goto label_1a55f0;
        case 0x1a55f4u: goto label_1a55f4;
        case 0x1a55f8u: goto label_1a55f8;
        case 0x1a55fcu: goto label_1a55fc;
        case 0x1a5600u: goto label_1a5600;
        case 0x1a5604u: goto label_1a5604;
        case 0x1a5608u: goto label_1a5608;
        case 0x1a560cu: goto label_1a560c;
        case 0x1a5610u: goto label_1a5610;
        case 0x1a5614u: goto label_1a5614;
        case 0x1a5618u: goto label_1a5618;
        case 0x1a561cu: goto label_1a561c;
        case 0x1a5620u: goto label_1a5620;
        case 0x1a5624u: goto label_1a5624;
        case 0x1a5628u: goto label_1a5628;
        case 0x1a562cu: goto label_1a562c;
        case 0x1a5630u: goto label_1a5630;
        case 0x1a5634u: goto label_1a5634;
        case 0x1a5638u: goto label_1a5638;
        case 0x1a563cu: goto label_1a563c;
        case 0x1a5640u: goto label_1a5640;
        case 0x1a5644u: goto label_1a5644;
        default: break;
    }

    ctx->pc = 0x1a55a8u;

label_1a55a8:
    // 0x1a55a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a55a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a55ac:
    // 0x1a55ac: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a55acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a55b0:
    // 0x1a55b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a55b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a55b4:
    // 0x1a55b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a55b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a55b8:
    // 0x1a55b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a55b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a55bc:
    // 0x1a55bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a55bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a55c0:
    // 0x1a55c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a55c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a55c4:
    // 0x1a55c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a55c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a55c8:
    // 0x1a55c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a55c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a55cc:
    // 0x1a55cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a55ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a55d0:
    // 0x1a55d0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a55d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a55d4:
    // 0x1a55d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a55d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a55d8:
    // 0x1a55d8: 0xc068866  jal         func_1A2198
label_1a55dc:
    if (ctx->pc == 0x1A55DCu) {
        ctx->pc = 0x1A55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55D8u;
        // 0x1a55dc: 0x24463400  addiu       $a2, $v0, 0x3400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55E0u;
        goto label_1a55e0;
    }
    ctx->pc = 0x1A55D8u;
    SET_GPR_U32(ctx, 31, 0x1A55E0u);
    ctx->pc = 0x1A55DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55D8u;
    // 0x1a55dc: 0x24463400  addiu       $a2, $v0, 0x3400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A55D8u, 0x1A55E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A55E0u;
label_1a55e0:
    // 0x1a55e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a55e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a55e4:
    // 0x1a55e4: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a55e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a55e8:
    // 0x1a55e8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1a55ec:
    if (ctx->pc == 0x1A55ECu) {
        ctx->pc = 0x1A55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55E8u;
        // 0x1a55ec: 0xacb10004  sw          $s1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55F0u;
        goto label_1a55f0;
    }
    ctx->pc = 0x1A55E8u;
    {
        const bool branch_taken_0x1a55e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55E8u;
        // 0x1a55ec: 0xacb10004  sw          $s1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55e8) {
            ctx->pc = 0x1A5600u;
            goto label_1a5600;
        }
    }
    ctx->pc = 0x1A55F0u;
label_1a55f0:
    // 0x1a55f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a55f4:
    // 0x1a55f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a55f8:
    if (ctx->pc == 0x1A55F8u) {
        ctx->pc = 0x1A55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55F4u;
        // 0x1a55f8: 0xa4a2000e  sh          $v0, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55FCu;
        goto label_1a55fc;
    }
    ctx->pc = 0x1A55F4u;
    {
        const bool branch_taken_0x1a55f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55F4u;
        // 0x1a55f8: 0xa4a2000e  sh          $v0, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55f4) {
            ctx->pc = 0x1A5604u;
            goto label_1a5604;
        }
    }
    ctx->pc = 0x1A55FCu;
label_1a55fc:
    // 0x1a55fc: 0x0  nop
    ctx->pc = 0x1a55fcu;
    // NOP
label_1a5600:
    // 0x1a5600: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x1a5600u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_1a5604:
    // 0x1a5604: 0x8e47007c  lw          $a3, 0x7C($s2)
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1a5608:
    // 0x1a5608: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x1a5608u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_1a560c:
    // 0x1a560c: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x1a560cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
label_1a5610:
    // 0x1a5610: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a5614:
    // 0x1a5614: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1a5614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1a5618:
    // 0x1a5618: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a5618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a561c:
    // 0x1a561c: 0x14f20004  bne         $a3, $s2, . + 4 + (0x4 << 2)
label_1a5620:
    if (ctx->pc == 0x1A5620u) {
        ctx->pc = 0x1A5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A561Cu;
        // 0x1a5620: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5624u;
        goto label_1a5624;
    }
    ctx->pc = 0x1A561Cu;
    {
        const bool branch_taken_0x1a561c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A561Cu;
        // 0x1a5620: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a561c) {
            ctx->pc = 0x1A5630u;
            goto label_1a5630;
        }
    }
    ctx->pc = 0x1A5624u;
label_1a5624:
    // 0x1a5624: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x1a5624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_1a5628:
    // 0x1a5628: 0x40f809  jalr        $v0
label_1a562c:
    if (ctx->pc == 0x1A562Cu) {
        ctx->pc = 0x1A562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5628u;
        // 0x1a562c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5630u;
        goto label_1a5630;
    }
    ctx->pc = 0x1A5628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5630u);
        ctx->pc = 0x1A562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5628u;
        // 0x1a562c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5628u, 0x1A5630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5630u;
label_1a5630:
    // 0x1a5630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5634:
    // 0x1a5634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a5638:
    // 0x1a5638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a563c:
    // 0x1a563c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a563cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a5640:
    // 0x1a5640: 0x3e00008  jr          $ra
label_1a5644:
    if (ctx->pc == 0x1A5644u) {
        ctx->pc = 0x1A5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5640u;
        // 0x1a5644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5648u;
        goto label_fallthrough_0x1a5640;
    }
    ctx->pc = 0x1A5640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5640u;
        // 0x1a5644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5640:
    ctx->pc = 0x1A5648u;
}
