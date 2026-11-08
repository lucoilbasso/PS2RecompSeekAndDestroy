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

// Function: Cmd_THREAD_CALL_Entry__FP15BsSCDEntControl
// Address: 0x106800 - 0x1068b0
void Cmd_THREAD_CALL_Entry__FP15BsSCDEntControl_0x106800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_THREAD_CALL_Entry__FP15BsSCDEntControl_0x106800");
#endif

    switch (ctx->pc) {
        case 0x10683cu: goto label_10683c;
        case 0x106858u: goto label_106858;
        case 0x106874u: goto label_106874;
        case 0x10688cu: goto label_10688c;
        default: break;
    }

    ctx->pc = 0x106800u;

    // 0x106800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10680c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106810: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x106810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x106814: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x106814u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x106818: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x106818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10681c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10681cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106820: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x106820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x106824: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x106824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10682c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x106830: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106834: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106834u;
    SET_GPR_U32(ctx, 31, 0x10683Cu);
    ctx->pc = 0x106838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106834u;
    // 0x106838: 0x8c520040  lw          $s2, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106834u, 0x10683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10683Cu;
label_10683c:
    // 0x10683c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106840: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x106840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106844: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106848: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x106848u;
    {
        const bool branch_taken_0x106848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106848u;
        // 0x10684c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106848) {
            ctx->pc = 0x10685Cu;
            goto label_10685c;
        }
    }
    ctx->pc = 0x106850u;
    // 0x106850: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106850u;
    SET_GPR_U32(ctx, 31, 0x106858u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106850u, 0x106858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106858u;
label_106858:
    // 0x106858: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x106858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10685c:
    // 0x10685c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106864: 0x50730005  beql        $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x106864u;
    {
        const bool branch_taken_0x106864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x106864) {
            ctx->pc = 0x106868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106864u;
            // 0x106868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10687Cu;
            goto label_10687c;
        }
    }
    ctx->pc = 0x10686Cu;
    // 0x10686c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10686Cu;
    SET_GPR_U32(ctx, 31, 0x106874u);
    ctx->pc = 0x106870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10686Cu;
    // 0x106870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10686Cu, 0x106874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106874u;
label_106874:
    // 0x106874: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x106874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10687c:
    // 0x10687c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106880: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x106880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106884: 0xc046dca  jal         func_11B728
    ctx->pc = 0x106884u;
    SET_GPR_U32(ctx, 31, 0x10688Cu);
    ctx->pc = 0x106888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106884u;
    // 0x106888: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B728u, 0x106884u, 0x10688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10688Cu;
label_10688c:
    // 0x10688c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10688cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106898: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x106898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10689c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10689cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1068a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1068a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1068a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1068a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1068a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1068A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1068ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068A8u;
        // 0x1068ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1068A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1068B0u;
}
