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

// Function: Cmd_TANK_DELETE_Entry__FP15BsSCDEntControl
// Address: 0x119668 - 0x1196e4
void Cmd_TANK_DELETE_Entry__FP15BsSCDEntControl_0x119668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_DELETE_Entry__FP15BsSCDEntControl_0x119668");
#endif

    switch (ctx->pc) {
        case 0x119684u: goto label_119684;
        case 0x1196a8u: goto label_1196a8;
        default: break;
    }

    ctx->pc = 0x119668u;

    // 0x119668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11966c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119670: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x119670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x119674: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x119674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x119678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11967c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11967Cu;
    SET_GPR_U32(ctx, 31, 0x119684u);
    ctx->pc = 0x119680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11967Cu;
    // 0x119680: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11967Cu, 0x119684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119684u;
label_119684:
    // 0x119684: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x119684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x119688: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x119688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11968c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11968cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119690: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x119690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x119694: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119698: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119698u;
    {
        const bool branch_taken_0x119698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x11969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119698u;
        // 0x11969c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119698) {
            ctx->pc = 0x1196ACu;
            goto label_1196ac;
        }
    }
    ctx->pc = 0x1196A0u;
    // 0x1196a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1196A0u;
    SET_GPR_U32(ctx, 31, 0x1196A8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1196A0u, 0x1196A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1196A8u;
label_1196a8:
    // 0x1196a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1196a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1196ac:
    // 0x1196ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1196acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1196b0: 0x24030934  addiu       $v1, $zero, 0x934
    ctx->pc = 0x1196b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2356));
    // 0x1196b4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1196b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1196b8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1196b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1196bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1196bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1196c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1196c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1196c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1196c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1196c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1196c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1196cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1196ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1196d0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1196d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1196d4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1196d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1196d8: 0xac20d370  sw          $zero, -0x2C90($at)
    ctx->pc = 0x1196d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955888), GPR_U32(ctx, 0));
    // 0x1196dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1196DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196DCu;
        // 0x1196e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196E4u;
}
