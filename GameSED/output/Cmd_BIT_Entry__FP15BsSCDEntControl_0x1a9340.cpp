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

// Function: Cmd_BIT_Entry__FP15BsSCDEntControl
// Address: 0x1a9340 - 0x1a93cc
void Cmd_BIT_Entry__FP15BsSCDEntControl_0x1a9340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_BIT_Entry__FP15BsSCDEntControl_0x1a9340");
#endif

    switch (ctx->pc) {
        case 0x1a9370u: goto label_1a9370;
        case 0x1a93a4u: goto label_1a93a4;
        default: break;
    }

    ctx->pc = 0x1a9340u;

    // 0x1a9340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a934c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a934cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9354: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a9354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a9358: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a9358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a935c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9360: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9364: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9368: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A9368u;
    SET_GPR_U32(ctx, 31, 0x1A9370u);
    ctx->pc = 0x1A936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9368u;
    // 0x1a936c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A9368u, 0x1A9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9370u;
label_1a9370:
    // 0x1a9370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a9374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a937c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a9380: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a9380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9384: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a9388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a938c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a938cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a9390: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a9390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a9394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9394u;
    {
        const bool branch_taken_0x1a9394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9394u;
        // 0x1a9398: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9394) {
            ctx->pc = 0x1A93A8u;
            goto label_1a93a8;
        }
    }
    ctx->pc = 0x1A939Cu;
    // 0x1a939c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A939Cu;
    SET_GPR_U32(ctx, 31, 0x1A93A4u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A939Cu, 0x1A93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A93A4u;
label_1a93a4:
    // 0x1a93a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a93a8:
    // 0x1a93a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a93ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a93acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a93b0: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1a93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a93b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a93b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a93b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a93bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a93bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a93c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a93c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a93c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A93C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93C4u;
        // 0x1a93c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A93C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A93CCu;
}
