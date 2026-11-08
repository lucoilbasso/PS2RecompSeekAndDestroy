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

// Function: __sigtramp_r
// Address: 0x1d0558 - 0x1d05f0
void ps2___sigtramp_r_0x1d0558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sigtramp_r_0x1d0558");
#endif

    switch (ctx->pc) {
        case 0x1d0558u: goto label_1d0558;
        case 0x1d055cu: goto label_1d055c;
        case 0x1d0560u: goto label_1d0560;
        case 0x1d0564u: goto label_1d0564;
        case 0x1d0568u: goto label_1d0568;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d0570u: goto label_1d0570;
        case 0x1d0574u: goto label_1d0574;
        case 0x1d0578u: goto label_1d0578;
        case 0x1d057cu: goto label_1d057c;
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        default: break;
    }

    ctx->pc = 0x1d0558u;

label_1d0558:
    // 0x1d0558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d055c:
    // 0x1d055c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0560:
    // 0x1d0560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d0564:
    // 0x1d0564: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d0564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0568:
    // 0x1d0568: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1d0568u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1d056c:
    // 0x1d056c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d0570:
    // 0x1d0570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d0574:
    // 0x1d0574: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d0578:
    if (ctx->pc == 0x1D0578u) {
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D057Cu;
        goto label_1d057c;
    }
    ctx->pc = 0x1D0574u;
    {
        const bool branch_taken_0x1d0574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0574) {
            ctx->pc = 0x1D05DCu;
            goto label_1d05dc;
        }
    }
    ctx->pc = 0x1D057Cu;
label_1d057c:
    // 0x1d057c: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x1d057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_1d0580:
    // 0x1d0580: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_1d0584:
    if (ctx->pc == 0x1D0584u) {
        ctx->pc = 0x1D0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0580u;
        // 0x1d0584: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0588u;
        goto label_1d0588;
    }
    ctx->pc = 0x1D0580u;
    {
        const bool branch_taken_0x1d0580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0580u;
        // 0x1d0584: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0580) {
            ctx->pc = 0x1D05A4u;
            goto label_1d05a4;
        }
    }
    ctx->pc = 0x1D0588u;
label_1d0588:
    // 0x1d0588: 0xc0740e4  jal         func_1D0390
label_1d058c:
    if (ctx->pc == 0x1D058Cu) {
        ctx->pc = 0x1D0590u;
        goto label_1d0590;
    }
    ctx->pc = 0x1D0588u;
    SET_GPR_U32(ctx, 31, 0x1D0590u);
    ctx->pc = 0x1D0390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0390u, 0x1D0588u, 0x1D0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0590u;
label_1d0590:
    // 0x1d0590: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1d0594:
    if (ctx->pc == 0x1D0594u) {
        ctx->pc = 0x1D0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0590u;
        // 0x1d0594: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0598u;
        goto label_1d0598;
    }
    ctx->pc = 0x1D0590u;
    {
        const bool branch_taken_0x1d0590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0590) {
            ctx->pc = 0x1D0594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0590u;
            // 0x1d0594: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D05A0u;
            goto label_1d05a0;
        }
    }
    ctx->pc = 0x1D0598u;
label_1d0598:
    // 0x1d0598: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d059c:
    if (ctx->pc == 0x1D059Cu) {
        ctx->pc = 0x1D059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0598u;
        // 0x1d059c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05A0u;
        goto label_1d05a0;
    }
    ctx->pc = 0x1D0598u;
    {
        const bool branch_taken_0x1d0598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0598u;
        // 0x1d059c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0598) {
            ctx->pc = 0x1D05DCu;
            goto label_1d05dc;
        }
    }
    ctx->pc = 0x1D05A0u;
label_1d05a0:
    // 0x1d05a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1d05a4:
    // 0x1d05a4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1d05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d05a8:
    // 0x1d05a8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d05a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d05ac:
    // 0x1d05ac: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1d05b0:
    if (ctx->pc == 0x1D05B0u) {
        ctx->pc = 0x1D05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05ACu;
        // 0x1d05b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05B4u;
        goto label_1d05b4;
    }
    ctx->pc = 0x1D05ACu;
    {
        const bool branch_taken_0x1d05ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05ACu;
        // 0x1d05b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05ac) {
            ctx->pc = 0x1D05DCu;
            goto label_1d05dc;
        }
    }
    ctx->pc = 0x1D05B4u;
label_1d05b4:
    // 0x1d05b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d05b8:
    // 0x1d05b8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1d05bc:
    if (ctx->pc == 0x1D05BCu) {
        ctx->pc = 0x1D05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B8u;
        // 0x1d05bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05C0u;
        goto label_1d05c0;
    }
    ctx->pc = 0x1D05B8u;
    {
        const bool branch_taken_0x1d05b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B8u;
        // 0x1d05bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05b8) {
            ctx->pc = 0x1D05DCu;
            goto label_1d05dc;
        }
    }
    ctx->pc = 0x1D05C0u;
label_1d05c0:
    // 0x1d05c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d05c4:
    // 0x1d05c4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_1d05c8:
    if (ctx->pc == 0x1D05C8u) {
        ctx->pc = 0x1D05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C4u;
        // 0x1d05c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05CCu;
        goto label_1d05cc;
    }
    ctx->pc = 0x1D05C4u;
    {
        const bool branch_taken_0x1d05c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C4u;
        // 0x1d05c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05c4) {
            ctx->pc = 0x1D05DCu;
            goto label_1d05dc;
        }
    }
    ctx->pc = 0x1D05CCu;
label_1d05cc:
    // 0x1d05cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1d05d0:
    // 0x1d05d0: 0xa0f809  jalr        $a1
label_1d05d4:
    if (ctx->pc == 0x1D05D4u) {
        ctx->pc = 0x1D05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D0u;
        // 0x1d05d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05D8u;
        goto label_1d05d8;
    }
    ctx->pc = 0x1D05D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D05D8u);
        ctx->pc = 0x1D05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D0u;
        // 0x1d05d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05D0u, 0x1D05D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D05D8u;
label_1d05d8:
    // 0x1d05d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d05d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d05dc:
    // 0x1d05dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d05dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d05e0:
    // 0x1d05e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d05e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d05e4:
    // 0x1d05e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d05e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d05e8:
    // 0x1d05e8: 0x3e00008  jr          $ra
label_1d05ec:
    if (ctx->pc == 0x1D05ECu) {
        ctx->pc = 0x1D05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05E8u;
        // 0x1d05ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05F0u;
        goto label_fallthrough_0x1d05e8;
    }
    ctx->pc = 0x1D05E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05E8u;
        // 0x1d05ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d05e8:
    ctx->pc = 0x1D05F0u;
}
