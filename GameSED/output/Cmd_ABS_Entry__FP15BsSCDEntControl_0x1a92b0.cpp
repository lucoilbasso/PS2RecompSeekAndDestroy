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

// Function: Cmd_ABS_Entry__FP15BsSCDEntControl
// Address: 0x1a92b0 - 0x1a933c
void Cmd_ABS_Entry__FP15BsSCDEntControl_0x1a92b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ABS_Entry__FP15BsSCDEntControl_0x1a92b0");
#endif

    switch (ctx->pc) {
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a9314u: goto label_1a9314;
        default: break;
    }

    ctx->pc = 0x1a92b0u;

    // 0x1a92b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a92b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a92b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a92b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a92b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a92b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a92bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a92bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a92c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a92c4: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a92c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a92c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a92c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a92cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a92d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a92d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a92d8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A92D8u;
    SET_GPR_U32(ctx, 31, 0x1A92E0u);
    ctx->pc = 0x1A92DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A92D8u;
    // 0x1a92dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A92D8u, 0x1A92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92E0u;
label_1a92e0:
    // 0x1a92e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a92e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a92e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a92ec: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a92f0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a92f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a92f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a92f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a92f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a92fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a9300: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a9300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a9304: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9304u;
    {
        const bool branch_taken_0x1a9304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9304u;
        // 0x1a9308: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9304) {
            ctx->pc = 0x1A9318u;
            goto label_1a9318;
        }
    }
    ctx->pc = 0x1A930Cu;
    // 0x1a930c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A930Cu;
    SET_GPR_U32(ctx, 31, 0x1A9314u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A930Cu, 0x1A9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9314u;
label_1a9314:
    // 0x1a9314: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9318:
    // 0x1a9318: 0x70051068  pabsw       $v0, $a1
    ctx->pc = 0x1a9318u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x1a931c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a9320: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a9320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a9324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a932c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a932cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9330: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a9330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9334: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9334u;
        // 0x1a9338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A933Cu;
}
