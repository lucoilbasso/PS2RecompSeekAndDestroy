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

// Function: Cmd_SET_MY_CAMOUFLAGE_Entry__FP15BsSCDEntControl
// Address: 0x119798 - 0x11980c
void Cmd_SET_MY_CAMOUFLAGE_Entry__FP15BsSCDEntControl_0x119798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_MY_CAMOUFLAGE_Entry__FP15BsSCDEntControl_0x119798");
#endif

    switch (ctx->pc) {
        case 0x1197b4u: goto label_1197b4;
        case 0x1197d8u: goto label_1197d8;
        default: break;
    }

    ctx->pc = 0x119798u;

    // 0x119798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11979c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1197a0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x1197a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1197a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1197a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1197a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1197a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1197ac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1197ACu;
    SET_GPR_U32(ctx, 31, 0x1197B4u);
    ctx->pc = 0x1197B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1197ACu;
    // 0x1197b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1197ACu, 0x1197B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197B4u;
label_1197b4:
    // 0x1197b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1197b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1197b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1197bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1197bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1197c0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1197c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1197c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1197c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1197c8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1197C8u;
    {
        const bool branch_taken_0x1197c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197C8u;
        // 0x1197cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197c8) {
            ctx->pc = 0x1197DCu;
            goto label_1197dc;
        }
    }
    ctx->pc = 0x1197D0u;
    // 0x1197d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1197D0u;
    SET_GPR_U32(ctx, 31, 0x1197D8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1197D0u, 0x1197D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197D8u;
label_1197d8:
    // 0x1197d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1197d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1197dc:
    // 0x1197dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1197dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1197e0: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x1197e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x1197e4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1197e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1197e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1197e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1197ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1197ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1197f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1197f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1197f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1197f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1197f8: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1197f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1197fc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1197fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x119800: 0xac24d52c  sw          $a0, -0x2AD4($at)
    ctx->pc = 0x119800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956332), GPR_U32(ctx, 4));
    // 0x119804: 0x3e00008  jr          $ra
    ctx->pc = 0x119804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119804u;
        // 0x119808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11980Cu;
}
