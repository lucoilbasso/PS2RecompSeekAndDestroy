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

// Function: ApMotionGroundTraceSetup__FP7WcActor
// Address: 0x13a4f8 - 0x13a5c8
void ApMotionGroundTraceSetup__FP7WcActor_0x13a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionGroundTraceSetup__FP7WcActor_0x13a4f8");
#endif

    switch (ctx->pc) {
        case 0x13a530u: goto label_13a530;
        case 0x13a548u: goto label_13a548;
        case 0x13a55cu: goto label_13a55c;
        case 0x13a570u: goto label_13a570;
        default: break;
    }

    ctx->pc = 0x13a4f8u;

    // 0x13a4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a4fc: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x13a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x13a500: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13a504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a50c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a510: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13a514: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13a518: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13a51c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A51Cu;
    {
        const bool branch_taken_0x13a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A51Cu;
        // 0x13a520: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a51c) {
            ctx->pc = 0x13A530u;
            goto label_13a530;
        }
    }
    ctx->pc = 0x13A524u;
    // 0x13a524: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x13a524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13a528: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13A528u;
    SET_GPR_U32(ctx, 31, 0x13A530u);
    ctx->pc = 0x13A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A528u;
    // 0x13a52c: 0x24a56808  addiu       $a1, $a1, 0x6808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13A528u, 0x13A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A530u;
label_13a530:
    // 0x13a530: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x13a530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x13a534: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x13a534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13a538: 0x2610a400  addiu       $s0, $s0, -0x5C00
    ctx->pc = 0x13a538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943744));
    // 0x13a53c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a540: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13A540u;
    SET_GPR_U32(ctx, 31, 0x13A548u);
    ctx->pc = 0x13A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A540u;
    // 0x13a544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13A540u, 0x13A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A548u;
label_13a548:
    // 0x13a548: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13a54c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x13a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13a550: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13a550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a554: 0xc06164c  jal         func_185930
    ctx->pc = 0x13A554u;
    SET_GPR_U32(ctx, 31, 0x13A55Cu);
    ctx->pc = 0x13A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A554u;
    // 0x13a558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13A554u, 0x13A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A55Cu;
label_13a55c:
    // 0x13a55c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a564: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13a564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a568: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13A568u;
    SET_GPR_U32(ctx, 31, 0x13A570u);
    ctx->pc = 0x13A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A568u;
    // 0x13a56c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13A568u, 0x13A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A570u;
label_13a570:
    // 0x13a570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a578: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a57c: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13a580: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a584: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13a588: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A588u;
    {
        const bool branch_taken_0x13a588 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A588u;
        // 0x13a58c: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a588) {
            ctx->pc = 0x13A598u;
            goto label_13a598;
        }
    }
    ctx->pc = 0x13A590u;
    // 0x13a590: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x13a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13a594: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13a594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a598:
    // 0x13a598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a59c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13a5a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a5a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a5a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a5a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13a5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a5ac: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x13a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x13a5b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x13a5b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13a5b8: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x13a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x13a5bc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13a5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5C0u;
        // 0x13a5c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A5C8u;
}
