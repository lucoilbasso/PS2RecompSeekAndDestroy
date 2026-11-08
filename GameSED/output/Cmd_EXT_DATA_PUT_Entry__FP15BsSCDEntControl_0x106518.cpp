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

// Function: Cmd_EXT_DATA_PUT_Entry__FP15BsSCDEntControl
// Address: 0x106518 - 0x10658c
void Cmd_EXT_DATA_PUT_Entry__FP15BsSCDEntControl_0x106518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXT_DATA_PUT_Entry__FP15BsSCDEntControl_0x106518");
#endif

    switch (ctx->pc) {
        case 0x106538u: goto label_106538;
        case 0x106548u: goto label_106548;
        case 0x106568u: goto label_106568;
        default: break;
    }

    ctx->pc = 0x106518u;

    // 0x106518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10651c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x106528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x106528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10652c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106530: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106530u;
    SET_GPR_U32(ctx, 31, 0x106538u);
    ctx->pc = 0x106534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106530u;
    // 0x106534: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106530u, 0x106538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106538u;
label_106538:
    // 0x106538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x106538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10653c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106540: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106540u;
    SET_GPR_U32(ctx, 31, 0x106548u);
    ctx->pc = 0x106544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106540u;
    // 0x106544: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106540u, 0x106548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106548u;
label_106548:
    // 0x106548: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x106548u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x10654c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x10654cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x106550: 0x8e31ef8c  lw          $s1, -0x1074($s1)
    ctx->pc = 0x106550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963084)));
    // 0x106554: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x106554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x106558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10655c: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x10655cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x106560: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x106560u;
    SET_GPR_U32(ctx, 31, 0x106568u);
    ctx->pc = 0x106564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106560u;
    // 0x106564: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x106560u, 0x106568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106568u;
label_106568:
    // 0x106568: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x106568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x10656c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10656cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106570: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x106570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x106574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10657c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10657cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106584: 0x3e00008  jr          $ra
    ctx->pc = 0x106584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106584u;
        // 0x106588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10658Cu;
}
