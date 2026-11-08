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

// Function: WRscVsyncCallThreadProc__FP8BcThread
// Address: 0x17a3f8 - 0x17a464
void WRscVsyncCallThreadProc__FP8BcThread_0x17a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WRscVsyncCallThreadProc__FP8BcThread_0x17a3f8");
#endif

    switch (ctx->pc) {
        case 0x17a420u: goto label_17a420;
        case 0x17a428u: goto label_17a428;
        case 0x17a448u: goto label_17a448;
        case 0x17a45cu: goto label_17a45c;
        default: break;
    }

    ctx->pc = 0x17a3f8u;

    // 0x17a3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a408: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a40c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a410: 0x48800  sll         $s1, $a0, 0
    ctx->pc = 0x17a410u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x17a414: 0x8f928d10  lw          $s2, -0x72F0($gp)
    ctx->pc = 0x17a414u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a418: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x17a418u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x17a41c: 0x0  nop
    ctx->pc = 0x17a41cu;
    // NOP
label_17a420:
    // 0x17a420: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17A420u;
    SET_GPR_U32(ctx, 31, 0x17A428u);
    ctx->pc = 0x17A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A420u;
    // 0x17a424: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17A420u, 0x17A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A428u;
label_17a428:
    // 0x17a428: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17a428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a42c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a430: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x17a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17a434: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x17a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x17a438: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17A438u;
    {
        const bool branch_taken_0x17a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A438u;
        // 0x17a43c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a438) {
            ctx->pc = 0x17A420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a420;
        }
    }
    ctx->pc = 0x17A440u;
    // 0x17a440: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x17A440u;
    SET_GPR_U32(ctx, 31, 0x17A448u);
    ctx->pc = 0x17A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A440u;
    // 0x17a444: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x17A440u, 0x17A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A448u;
label_17a448:
    // 0x17a448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a44c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A44Cu;
    {
        const bool branch_taken_0x17a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A44Cu;
        // 0x17a450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a44c) {
            ctx->pc = 0x17A420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a420;
        }
    }
    ctx->pc = 0x17A454u;
    // 0x17a454: 0xc05db08  jal         func_176C20
    ctx->pc = 0x17A454u;
    SET_GPR_U32(ctx, 31, 0x17A45Cu);
    ctx->pc = 0x176C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C20u, 0x17A454u, 0x17A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A45Cu;
label_17a45c:
    // 0x17a45c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x17A45Cu;
    {
        const bool branch_taken_0x17a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a45c) {
            ctx->pc = 0x17A420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a420;
        }
    }
    ctx->pc = 0x17A464u;
}
