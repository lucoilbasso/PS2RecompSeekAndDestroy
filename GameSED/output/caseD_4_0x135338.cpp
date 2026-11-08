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

// Function: caseD_4
// Address: 0x135338 - 0x135388
void caseD_4_0x135338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x135338");
#endif

    switch (ctx->pc) {
        case 0x135354u: goto label_135354;
        case 0x135360u: goto label_135360;
        case 0x13536cu: goto label_13536c;
        case 0x135384u: goto label_135384;
        default: break;
    }

    ctx->pc = 0x135338u;

    // 0x135338: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13533c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13533cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135344: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x135344u;
    {
        const bool branch_taken_0x135344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135344u;
        // 0x135348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135344) {
            ctx->pc = 0x135388u;
            return;
        }
    }
    ctx->pc = 0x13534Cu;
    // 0x13534c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x13534Cu;
    SET_GPR_U32(ctx, 31, 0x135354u);
    ctx->pc = 0x135350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13534Cu;
    // 0x135350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x13534Cu, 0x135354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135354u;
label_135354:
    // 0x135354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135358: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135358u;
    SET_GPR_U32(ctx, 31, 0x135360u);
    ctx->pc = 0x13535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135358u;
    // 0x13535c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135358u, 0x135360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135360u;
label_135360:
    // 0x135360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135364: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135364u;
    SET_GPR_U32(ctx, 31, 0x13536Cu);
    ctx->pc = 0x135368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135364u;
    // 0x135368: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135364u, 0x13536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13536Cu;
label_13536c:
    // 0x13536c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x13536cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x135370: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x135370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x135374: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135378: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x135378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13537c: 0xc05087a  jal         func_1421E8
    ctx->pc = 0x13537Cu;
    SET_GPR_U32(ctx, 31, 0x135384u);
    ctx->pc = 0x135380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13537Cu;
    // 0x135380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421E8u, 0x13537Cu, 0x135384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135384u;
label_135384:
    // 0x135384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x135384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135388u;
}
