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

// Function: WSpriteStopSequence__FP8WcSpritei
// Address: 0x18b518 - 0x18b5d4
void WSpriteStopSequence__FP8WcSpritei_0x18b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteStopSequence__FP8WcSpritei_0x18b518");
#endif

    switch (ctx->pc) {
        case 0x18b54cu: goto label_18b54c;
        case 0x18b560u: goto label_18b560;
        case 0x18b568u: goto label_18b568;
        case 0x18b5a0u: goto label_18b5a0;
        case 0x18b5a8u: goto label_18b5a8;
        default: break;
    }

    ctx->pc = 0x18b518u;

    // 0x18b518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b51c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18b520: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18b520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18b528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18b52c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18b530: 0x4a0001f  bltz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x18B530u;
    {
        const bool branch_taken_0x18b530 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B530u;
        // 0x18b534: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b530) {
            ctx->pc = 0x18B5B0u;
            goto label_18b5b0;
        }
    }
    ctx->pc = 0x18B538u;
    // 0x18b538: 0x8e710208  lw          $s1, 0x208($s3)
    ctx->pc = 0x18b538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
    // 0x18b53c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b540: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x18b540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b544: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B544u;
    SET_GPR_U32(ctx, 31, 0x18B54Cu);
    ctx->pc = 0x18B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B544u;
    // 0x18b548: 0xa620000e  sh          $zero, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B544u, 0x18B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B54Cu;
label_18b54c:
    // 0x18b54c: 0x5e000010  bgtzl       $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18B54Cu;
    {
        const bool branch_taken_0x18b54c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x18b54c) {
            ctx->pc = 0x18B550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B54Cu;
            // 0x18b550: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B590u;
            goto label_18b590;
        }
    }
    ctx->pc = 0x18B554u;
    // 0x18b554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B554u;
    {
        const bool branch_taken_0x18b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B554u;
        // 0x18b558: 0x9622000e  lhu         $v0, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b554) {
            ctx->pc = 0x18B56Cu;
            goto label_18b56c;
        }
    }
    ctx->pc = 0x18B55Cu;
    // 0x18b55c: 0x0  nop
    ctx->pc = 0x18b55cu;
    // NOP
label_18b560:
    // 0x18b560: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B560u;
    SET_GPR_U32(ctx, 31, 0x18B568u);
    ctx->pc = 0x18B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B560u;
    // 0x18b564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B560u, 0x18B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B568u;
label_18b568:
    // 0x18b568: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18b568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_18b56c:
    // 0x18b56c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18b570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b574: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18b578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b57c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18B57Cu;
    {
        const bool branch_taken_0x18b57c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B57Cu;
        // 0x18b580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b57c) {
            ctx->pc = 0x18B560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b560;
        }
    }
    ctx->pc = 0x18B584u;
    // 0x18b584: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B584u;
    {
        const bool branch_taken_0x18b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B584u;
        // 0x18b588: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b584) {
            ctx->pc = 0x18B5B0u;
            goto label_18b5b0;
        }
    }
    ctx->pc = 0x18B58Cu;
    // 0x18b58c: 0x0  nop
    ctx->pc = 0x18b58cu;
    // NOP
label_18b590:
    // 0x18b590: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B590u;
    {
        const bool branch_taken_0x18b590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b590) {
            ctx->pc = 0x18B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B590u;
            // 0x18b594: 0x8e620208  lw          $v0, 0x208($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B5B4u;
            goto label_18b5b4;
        }
    }
    ctx->pc = 0x18B598u;
    // 0x18b598: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18b598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18b59c: 0x0  nop
    ctx->pc = 0x18b59cu;
    // NOP
label_18b5a0:
    // 0x18b5a0: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B5A0u;
    SET_GPR_U32(ctx, 31, 0x18B5A8u);
    ctx->pc = 0x18B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5A0u;
    // 0x18b5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B5A0u, 0x18B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5A8u;
label_18b5a8:
    // 0x18b5a8: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x18B5A8u;
    {
        const bool branch_taken_0x18b5a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5A8u;
        // 0x18b5ac: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5a8) {
            ctx->pc = 0x18B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b5a0;
        }
    }
    ctx->pc = 0x18B5B0u;
label_18b5b0:
    // 0x18b5b0: 0x8e620208  lw          $v0, 0x208($s3)
    ctx->pc = 0x18b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
label_18b5b4:
    // 0x18b5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b5b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18b5b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b5bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18b5bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b5c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18b5c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18b5c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b5c8: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x18b5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x18B5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5CCu;
        // 0x18b5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B5D4u;
}
