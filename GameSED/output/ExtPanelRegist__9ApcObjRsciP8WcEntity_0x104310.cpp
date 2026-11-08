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

// Function: ExtPanelRegist__9ApcObjRsciP8WcEntity
// Address: 0x104310 - 0x104390
void ExtPanelRegist__9ApcObjRsciP8WcEntity_0x104310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelRegist__9ApcObjRsciP8WcEntity_0x104310");
#endif

    switch (ctx->pc) {
        case 0x104330u: goto label_104330;
        case 0x104358u: goto label_104358;
        default: break;
    }

    ctx->pc = 0x104310u;

    // 0x104310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104318: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x104318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10431c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104324: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x104324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x104328: 0xc0410e4  jal         func_104390
    ctx->pc = 0x104328u;
    SET_GPR_U32(ctx, 31, 0x104330u);
    ctx->pc = 0x10432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104328u;
    // 0x10432c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x104328u, 0x104330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104330u;
label_104330:
    // 0x104330: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x104330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104334: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x104338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10433c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104340: 0x24a51bb8  addiu       $a1, $a1, 0x1BB8
    ctx->pc = 0x104340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7096));
    // 0x104344: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x104344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x104348: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104348u;
    {
        const bool branch_taken_0x104348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104348u;
        // 0x10434c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104348) {
            ctx->pc = 0x104358u;
            goto label_104358;
        }
    }
    ctx->pc = 0x104350u;
    // 0x104350: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104350u;
    SET_GPR_U32(ctx, 31, 0x104358u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104350u, 0x104358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104358u;
label_104358:
    // 0x104358: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104358u;
        // 0x10435c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104358) {
            ctx->pc = 0x104374u;
            goto label_104374;
        }
    }
    ctx->pc = 0x104360u;
    // 0x104360: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x104360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x104364: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x104364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x104368: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x104368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x10436c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10436cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x104370: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x104370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_104374:
    // 0x104374: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x104374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10437c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10437cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104384: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x104384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104388: 0x3e00008  jr          $ra
    ctx->pc = 0x104388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104388u;
        // 0x10438c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104390u;
}
