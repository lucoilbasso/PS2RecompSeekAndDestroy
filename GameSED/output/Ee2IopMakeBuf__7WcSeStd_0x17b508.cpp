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

// Function: Ee2IopMakeBuf__7WcSeStd
// Address: 0x17b508 - 0x17b5ec
void Ee2IopMakeBuf__7WcSeStd_0x17b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ee2IopMakeBuf__7WcSeStd_0x17b508");
#endif

    switch (ctx->pc) {
        case 0x17b530u: goto label_17b530;
        case 0x17b560u: goto label_17b560;
        case 0x17b580u: goto label_17b580;
        case 0x17b59cu: goto label_17b59c;
        case 0x17b5bcu: goto label_17b5bc;
        default: break;
    }

    ctx->pc = 0x17b508u;

    // 0x17b508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b50c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b510: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b514: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b51c: 0x26420500  addiu       $v0, $s2, 0x500
    ctx->pc = 0x17b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
    // 0x17b520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b524: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x17b524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x17b528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b52c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17b530:
    // 0x17b530: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17b534: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b538: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x17b538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17b53c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17b540: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x17b540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x17b544: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x17b544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x17b548: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17B548u;
    {
        const bool branch_taken_0x17b548 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B548u;
        // 0x17b54c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b548) {
            ctx->pc = 0x17B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b530;
        }
    }
    ctx->pc = 0x17B550u;
    // 0x17b550: 0x265001a0  addiu       $s0, $s2, 0x1A0
    ctx->pc = 0x17b550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x17b554: 0x26510500  addiu       $s1, $s2, 0x500
    ctx->pc = 0x17b554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
    // 0x17b558: 0x24130017  addiu       $s3, $zero, 0x17
    ctx->pc = 0x17b558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x17b55c: 0x0  nop
    ctx->pc = 0x17b55cu;
    // NOP
label_17b560:
    // 0x17b560: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b564: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B564u;
    {
        const bool branch_taken_0x17b564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B564u;
        // 0x17b568: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b564) {
            ctx->pc = 0x17B5C0u;
            goto label_17b5c0;
        }
    }
    ctx->pc = 0x17B56Cu;
    // 0x17b56c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B56Cu;
    {
        const bool branch_taken_0x17b56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B56Cu;
        // 0x17b570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b56c) {
            ctx->pc = 0x17B584u;
            goto label_17b584;
        }
    }
    ctx->pc = 0x17B574u;
    // 0x17b574: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b578: 0xc05eed4  jal         func_17BB50
    ctx->pc = 0x17B578u;
    SET_GPR_U32(ctx, 31, 0x17B580u);
    ctx->pc = 0x17B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B578u;
    // 0x17b57c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB50u, 0x17B578u, 0x17B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B580u;
label_17b580:
    // 0x17b580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b584:
    // 0x17b584: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17b588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B588u;
    {
        const bool branch_taken_0x17b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B588u;
        // 0x17b58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b588) {
            ctx->pc = 0x17B59Cu;
            goto label_17b59c;
        }
    }
    ctx->pc = 0x17B590u;
    // 0x17b590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b594: 0xc05eef6  jal         func_17BBD8
    ctx->pc = 0x17B594u;
    SET_GPR_U32(ctx, 31, 0x17B59Cu);
    ctx->pc = 0x17B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B594u;
    // 0x17b598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BBD8u, 0x17B594u, 0x17B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B59Cu;
label_17b59c:
    // 0x17b59c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b5a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x17b5a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B5A4u;
    {
        const bool branch_taken_0x17b5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5A4u;
        // 0x17b5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5a4) {
            ctx->pc = 0x17B5BCu;
            goto label_17b5bc;
        }
    }
    ctx->pc = 0x17B5ACu;
    // 0x17b5ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5b4: 0xc05ef08  jal         func_17BC20
    ctx->pc = 0x17B5B4u;
    SET_GPR_U32(ctx, 31, 0x17B5BCu);
    ctx->pc = 0x17B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5B4u;
    // 0x17b5b8: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC20u, 0x17B5B4u, 0x17B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5BCu;
label_17b5bc:
    // 0x17b5bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17b5c0:
    // 0x17b5c0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x17b5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x17b5c4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x17b5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x17b5c8: 0x661ffe5  bgez        $s3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17B5C8u;
    {
        const bool branch_taken_0x17b5c8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x17B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5C8u;
        // 0x17b5cc: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5c8) {
            ctx->pc = 0x17B560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b560;
        }
    }
    ctx->pc = 0x17B5D0u;
    // 0x17b5d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b5d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b5d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b5d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b5dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b5e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5E4u;
        // 0x17b5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B5ECu;
}
