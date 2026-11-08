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

// Function: Cmd_MULTI_OBJ_CLR_Entry__FP15BsSCDEntControl
// Address: 0x1104d0 - 0x110558
void Cmd_MULTI_OBJ_CLR_Entry__FP15BsSCDEntControl_0x1104d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MULTI_OBJ_CLR_Entry__FP15BsSCDEntControl_0x1104d0");
#endif

    switch (ctx->pc) {
        case 0x110504u: goto label_110504;
        case 0x110510u: goto label_110510;
        case 0x11051cu: goto label_11051c;
        case 0x11053cu: goto label_11053c;
        default: break;
    }

    ctx->pc = 0x1104d0u;

    // 0x1104d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1104d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1104d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1104d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1104d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1104d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1104dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1104dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1104e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1104e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1104e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1104e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1104ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1104ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1104f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1104f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1104f4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1104f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1104f8: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x1104f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1104fc: 0xc04110c  jal         func_104430
    ctx->pc = 0x1104FCu;
    SET_GPR_U32(ctx, 31, 0x110504u);
    ctx->pc = 0x110500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104FCu;
    // 0x110500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1104FCu, 0x110504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110504u;
label_110504:
    // 0x110504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110508: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x110508u;
    SET_GPR_U32(ctx, 31, 0x110510u);
    ctx->pc = 0x11050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110508u;
    // 0x11050c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x110508u, 0x110510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110510u;
label_110510:
    // 0x110510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110514: 0xc044156  jal         func_110558
    ctx->pc = 0x110514u;
    SET_GPR_U32(ctx, 31, 0x11051Cu);
    ctx->pc = 0x110518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110514u;
    // 0x110518: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110558u, 0x110514u, 0x11051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11051Cu;
label_11051c:
    // 0x11051c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110520: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x110520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x110524: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x110524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x110528: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x110528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11052c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11052Cu;
    {
        const bool branch_taken_0x11052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x110530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11052Cu;
        // 0x110530: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11052c) {
            ctx->pc = 0x11053Cu;
            goto label_11053c;
        }
    }
    ctx->pc = 0x110534u;
    // 0x110534: 0xc040d98  jal         func_103660
    ctx->pc = 0x110534u;
    SET_GPR_U32(ctx, 31, 0x11053Cu);
    ctx->pc = 0x103660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103660u, 0x110534u, 0x11053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11053Cu;
label_11053c:
    // 0x11053c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11053cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x110544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110548: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x110548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11054c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110550: 0x3e00008  jr          $ra
    ctx->pc = 0x110550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110550u;
        // 0x110554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110558u;
}
