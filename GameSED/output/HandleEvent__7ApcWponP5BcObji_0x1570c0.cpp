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

// Function: HandleEvent__7ApcWponP5BcObji
// Address: 0x1570c0 - 0x157178
void HandleEvent__7ApcWponP5BcObji_0x1570c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HandleEvent__7ApcWponP5BcObji_0x1570c0");
#endif

    switch (ctx->pc) {
        case 0x1570c0u: goto label_1570c0;
        case 0x1570c4u: goto label_1570c4;
        case 0x1570c8u: goto label_1570c8;
        case 0x1570ccu: goto label_1570cc;
        case 0x1570d0u: goto label_1570d0;
        case 0x1570d4u: goto label_1570d4;
        case 0x1570d8u: goto label_1570d8;
        case 0x1570dcu: goto label_1570dc;
        case 0x1570e0u: goto label_1570e0;
        case 0x1570e4u: goto label_1570e4;
        case 0x1570e8u: goto label_1570e8;
        case 0x1570ecu: goto label_1570ec;
        case 0x1570f0u: goto label_1570f0;
        case 0x1570f4u: goto label_1570f4;
        case 0x1570f8u: goto label_1570f8;
        case 0x1570fcu: goto label_1570fc;
        case 0x157100u: goto label_157100;
        case 0x157104u: goto label_157104;
        case 0x157108u: goto label_157108;
        case 0x15710cu: goto label_15710c;
        case 0x157110u: goto label_157110;
        case 0x157114u: goto label_157114;
        case 0x157118u: goto label_157118;
        case 0x15711cu: goto label_15711c;
        case 0x157120u: goto label_157120;
        case 0x157124u: goto label_157124;
        case 0x157128u: goto label_157128;
        case 0x15712cu: goto label_15712c;
        case 0x157130u: goto label_157130;
        case 0x157134u: goto label_157134;
        case 0x157138u: goto label_157138;
        case 0x15713cu: goto label_15713c;
        case 0x157140u: goto label_157140;
        case 0x157144u: goto label_157144;
        case 0x157148u: goto label_157148;
        case 0x15714cu: goto label_15714c;
        case 0x157150u: goto label_157150;
        case 0x157154u: goto label_157154;
        case 0x157158u: goto label_157158;
        case 0x15715cu: goto label_15715c;
        case 0x157160u: goto label_157160;
        case 0x157164u: goto label_157164;
        case 0x157168u: goto label_157168;
        case 0x15716cu: goto label_15716c;
        case 0x157170u: goto label_157170;
        case 0x157174u: goto label_157174;
        default: break;
    }

    ctx->pc = 0x1570c0u;

label_1570c0:
    // 0x1570c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1570c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1570c4:
    // 0x1570c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1570c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1570c8:
    // 0x1570c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1570c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1570cc:
    // 0x1570cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1570ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1570d0:
    // 0x1570d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1570d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1570d4:
    // 0x1570d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1570d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1570d8:
    // 0x1570d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1570d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1570dc:
    // 0x1570dc: 0xc053222  jal         func_14C888
label_1570e0:
    if (ctx->pc == 0x1570E0u) {
        ctx->pc = 0x1570E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570DCu;
        // 0x1570e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570E4u;
        goto label_1570e4;
    }
    ctx->pc = 0x1570DCu;
    SET_GPR_U32(ctx, 31, 0x1570E4u);
    ctx->pc = 0x1570E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570DCu;
    // 0x1570e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C888u, 0x1570DCu, 0x1570E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570E4u;
label_1570e4:
    // 0x1570e4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1570e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1570e8:
    // 0x1570e8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1570e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1570ec:
    // 0x1570ec: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_1570f0:
    if (ctx->pc == 0x1570F0u) {
        ctx->pc = 0x1570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570ECu;
        // 0x1570f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570F4u;
        goto label_1570f4;
    }
    ctx->pc = 0x1570ECu;
    {
        const bool branch_taken_0x1570ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570ECu;
        // 0x1570f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570ec) {
            ctx->pc = 0x157160u;
            goto label_157160;
        }
    }
    ctx->pc = 0x1570F4u;
label_1570f4:
    // 0x1570f4: 0x5604001b  bnel        $s0, $a0, . + 4 + (0x1B << 2)
label_1570f8:
    if (ctx->pc == 0x1570F8u) {
        ctx->pc = 0x1570F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F4u;
        // 0x1570f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570FCu;
        goto label_1570fc;
    }
    ctx->pc = 0x1570F4u;
    {
        const bool branch_taken_0x1570f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x1570f4) {
            ctx->pc = 0x1570F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1570F4u;
            // 0x1570f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x1570FCu;
label_1570fc:
    // 0x1570fc: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1570fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_157100:
    // 0x157100: 0x56420018  bnel        $s2, $v0, . + 4 + (0x18 << 2)
label_157104:
    if (ctx->pc == 0x157104u) {
        ctx->pc = 0x157104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157100u;
        // 0x157104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157108u;
        goto label_157108;
    }
    ctx->pc = 0x157100u;
    {
        const bool branch_taken_0x157100 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x157100) {
            ctx->pc = 0x157104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157100u;
            // 0x157104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157164u;
            goto label_157164;
        }
    }
    ctx->pc = 0x157108u;
label_157108:
    // 0x157108: 0x8e230170  lw          $v1, 0x170($s1)
    ctx->pc = 0x157108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_15710c:
    // 0x15710c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15710cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157110:
    // 0x157110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157114:
    // 0x157114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157118:
    // 0x157118: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_15711c:
    // 0x15711c: 0xc0667ce  jal         func_199F38
label_157120:
    if (ctx->pc == 0x157120u) {
        ctx->pc = 0x157120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15711Cu;
        // 0x157120: 0x8c500098  lw          $s0, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157124u;
        goto label_157124;
    }
    ctx->pc = 0x15711Cu;
    SET_GPR_U32(ctx, 31, 0x157124u);
    ctx->pc = 0x157120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15711Cu;
    // 0x157120: 0x8c500098  lw          $s0, 0x98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F38u, 0x15711Cu, 0x157124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157124u;
label_157124:
    // 0x157124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157128:
    // 0x157128: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x157128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15712c:
    // 0x15712c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x15712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_157130:
    // 0x157130: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x157130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_157134:
    // 0x157134: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x157134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_157138:
    // 0x157138: 0x60f809  jalr        $v1
label_15713c:
    if (ctx->pc == 0x15713Cu) {
        ctx->pc = 0x15713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157138u;
        // 0x15713c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157140u;
        goto label_157140;
    }
    ctx->pc = 0x157138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157140u);
        ctx->pc = 0x15713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157138u;
        // 0x15713c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157138u, 0x157140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157140u;
label_157140:
    // 0x157140: 0xc04e2b8  jal         func_138AE0
label_157144:
    if (ctx->pc == 0x157144u) {
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157140u;
        // 0x157144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157148u;
        goto label_157148;
    }
    ctx->pc = 0x157140u;
    SET_GPR_U32(ctx, 31, 0x157148u);
    ctx->pc = 0x157144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157140u;
    // 0x157144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138AE0u, 0x157140u, 0x157148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157148u;
label_157148:
    // 0x157148: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_15714c:
    if (ctx->pc == 0x15714Cu) {
        ctx->pc = 0x15714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157148u;
        // 0x15714c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157150u;
        goto label_157150;
    }
    ctx->pc = 0x157148u;
    {
        const bool branch_taken_0x157148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157148) {
            ctx->pc = 0x15714Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157148u;
            // 0x15714c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157150u;
            goto label_157150;
        }
    }
    ctx->pc = 0x157150u;
label_157150:
    // 0x157150: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x157150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_157154:
    // 0x157154: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x157154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_157158:
    // 0x157158: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x157158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15715c:
    // 0x15715c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x15715cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_157160:
    // 0x157160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157164:
    // 0x157164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_157168:
    // 0x157168: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15716c:
    // 0x15716c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15716cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_157170:
    // 0x157170: 0x3e00008  jr          $ra
label_157174:
    if (ctx->pc == 0x157174u) {
        ctx->pc = 0x157174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157170u;
        // 0x157174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157178u;
        goto label_fallthrough_0x157170;
    }
    ctx->pc = 0x157170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157170u;
        // 0x157174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157170:
    ctx->pc = 0x157178u;
}
