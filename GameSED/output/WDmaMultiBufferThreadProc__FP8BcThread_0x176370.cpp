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

// Function: WDmaMultiBufferThreadProc__FP8BcThread
// Address: 0x176370 - 0x1763f0
void WDmaMultiBufferThreadProc__FP8BcThread_0x176370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WDmaMultiBufferThreadProc__FP8BcThread_0x176370");
#endif

    switch (ctx->pc) {
        case 0x176390u: goto label_176390;
        case 0x176398u: goto label_176398;
        case 0x1763a0u: goto label_1763a0;
        case 0x1763b8u: goto label_1763b8;
        case 0x1763e0u: goto label_1763e0;
        case 0x1763e8u: goto label_1763e8;
        default: break;
    }

    ctx->pc = 0x176370u;

    // 0x176370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x176378: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17637c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176384: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x176384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x176388: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x176388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17638c: 0x0  nop
    ctx->pc = 0x17638cu;
    // NOP
label_176390:
    // 0x176390: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176390u;
    SET_GPR_U32(ctx, 31, 0x176398u);
    ctx->pc = 0x176394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176390u;
    // 0x176394: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176390u, 0x176398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176398u;
label_176398:
    // 0x176398: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176398u;
    SET_GPR_U32(ctx, 31, 0x1763A0u);
    ctx->pc = 0x17639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176398u;
    // 0x17639c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176398u, 0x1763A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763A0u;
label_1763a0:
    // 0x1763a0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1763a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1763a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1763A4u;
    {
        const bool branch_taken_0x1763a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1763a4) {
            ctx->pc = 0x176390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176390;
        }
    }
    ctx->pc = 0x1763ACu;
    // 0x1763ac: 0x8e300090  lw          $s0, 0x90($s1)
    ctx->pc = 0x1763acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1763b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1763B0u;
    SET_GPR_U32(ctx, 31, 0x1763B8u);
    ctx->pc = 0x1763B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763B0u;
    // 0x1763b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1763B0u, 0x1763B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763B8u;
label_1763b8:
    // 0x1763b8: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x1763b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1763bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1763bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1763c0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x1763c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1763c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1763c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1763c8: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1763c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1763cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1763ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1763d0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x1763d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1763d4: 0xae30008c  sw          $s0, 0x8C($s1)
    ctx->pc = 0x1763d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
    // 0x1763d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1763D8u;
    SET_GPR_U32(ctx, 31, 0x1763E0u);
    ctx->pc = 0x1763DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763D8u;
    // 0x1763dc: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1763D8u, 0x1763E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763E0u;
label_1763e0:
    // 0x1763e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1763E0u;
    SET_GPR_U32(ctx, 31, 0x1763E8u);
    ctx->pc = 0x1763E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763E0u;
    // 0x1763e4: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1763E0u, 0x1763E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763E8u;
label_1763e8:
    // 0x1763e8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1763E8u;
    {
        const bool branch_taken_0x1763e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1763e8) {
            ctx->pc = 0x176390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176390;
        }
    }
    ctx->pc = 0x1763F0u;
}
