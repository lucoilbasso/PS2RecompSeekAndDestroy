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

// Function: WSpriteSetSequence__FP8WcSpriteP15WSpriteSequence
// Address: 0x18a8a8 - 0x18a978
void WSpriteSetSequence__FP8WcSpriteP15WSpriteSequence_0x18a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteSetSequence__FP8WcSpriteP15WSpriteSequence_0x18a8a8");
#endif

    switch (ctx->pc) {
        case 0x18a8dcu: goto label_18a8dc;
        case 0x18a8e8u: goto label_18a8e8;
        case 0x18a910u: goto label_18a910;
        case 0x18a930u: goto label_18a930;
        case 0x18a93cu: goto label_18a93c;
        case 0x18a960u: goto label_18a960;
        default: break;
    }

    ctx->pc = 0x18a8a8u;

    // 0x18a8a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a8b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18a8b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18a8b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18a8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18a8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18a8c8: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18a8cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A8CCu;
    {
        const bool branch_taken_0x18a8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8CCu;
        // 0x18a8d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8cc) {
            ctx->pc = 0x18A8DCu;
            goto label_18a8dc;
        }
    }
    ctx->pc = 0x18A8D4u;
    // 0x18a8d4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18A8D4u;
    SET_GPR_U32(ctx, 31, 0x18A8DCu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18A8D4u, 0x18A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8DCu;
label_18a8dc:
    // 0x18a8dc: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x18a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x18a8e0: 0xc062d8a  jal         func_18B628
    ctx->pc = 0x18A8E0u;
    SET_GPR_U32(ctx, 31, 0x18A8E8u);
    ctx->pc = 0x18A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8E0u;
    // 0x18a8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B628u, 0x18A8E0u, 0x18A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8E8u;
label_18a8e8:
    // 0x18a8e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18a8ec: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18a8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18a8f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8f4: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x18a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x18a8f8: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x18A8F8u;
    {
        const bool branch_taken_0x18a8f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8F8u;
        // 0x18a8fc: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8f8) {
            ctx->pc = 0x18A960u;
            goto label_18a960;
        }
    }
    ctx->pc = 0x18A900u;
    // 0x18a900: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18A900u;
    {
        const bool branch_taken_0x18a900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a900) {
            ctx->pc = 0x18A904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A900u;
            // 0x18a904: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A908u;
            goto label_18a908;
        }
    }
    ctx->pc = 0x18A908u;
label_18a908:
    // 0x18a908: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18A908u;
    SET_GPR_U32(ctx, 31, 0x18A910u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18A908u, 0x18A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A910u;
label_18a910:
    // 0x18a910: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x18a914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18a914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a918: 0x24a57f90  addiu       $a1, $a1, 0x7F90
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32656));
    // 0x18a91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a920: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A920u;
    {
        const bool branch_taken_0x18a920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A920u;
        // 0x18a924: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a920) {
            ctx->pc = 0x18A930u;
            goto label_18a930;
        }
    }
    ctx->pc = 0x18A928u;
    // 0x18a928: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18A928u;
    SET_GPR_U32(ctx, 31, 0x18A930u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18A928u, 0x18A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A930u;
label_18a930:
    // 0x18a930: 0xae110208  sw          $s1, 0x208($s0)
    ctx->pc = 0x18a930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 17));
    // 0x18a934: 0xc062d76  jal         func_18B5D8
    ctx->pc = 0x18A934u;
    SET_GPR_U32(ctx, 31, 0x18A93Cu);
    ctx->pc = 0x18A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A934u;
    // 0x18a938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B5D8u, 0x18A934u, 0x18A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A93Cu;
label_18a93c:
    // 0x18a93c: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18a93cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18a940: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x18a940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x18a944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a948: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18a94c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x18a950: 0xa6020200  sh          $v0, 0x200($s0)
    ctx->pc = 0x18a950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a954: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18a954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18a958: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18A958u;
    SET_GPR_U32(ctx, 31, 0x18A960u);
    ctx->pc = 0x18A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A958u;
    // 0x18a95c: 0xa620000e  sh          $zero, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18A958u, 0x18A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A960u;
label_18a960:
    // 0x18a960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a96c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18a970: 0x3e00008  jr          $ra
    ctx->pc = 0x18A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A970u;
        // 0x18a974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A978u;
}
