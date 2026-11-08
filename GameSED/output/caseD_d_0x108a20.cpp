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

// Function: caseD_d
// Address: 0x108a20 - 0x108a68
void caseD_d_0x108a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x108a20");
#endif

    switch (ctx->pc) {
        case 0x108a30u: goto label_108a30;
        case 0x108a3cu: goto label_108a3c;
        case 0x108a48u: goto label_108a48;
        case 0x108a60u: goto label_108a60;
        default: break;
    }

    ctx->pc = 0x108a20u;

    // 0x108a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a28: 0xc042144  jal         func_108510
    ctx->pc = 0x108A28u;
    SET_GPR_U32(ctx, 31, 0x108A30u);
    ctx->pc = 0x108A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A28u;
    // 0x108a2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108A28u, 0x108A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A30u;
label_108a30:
    // 0x108a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a34: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x108A34u;
    SET_GPR_U32(ctx, 31, 0x108A3Cu);
    ctx->pc = 0x108A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A34u;
    // 0x108a38: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x108A34u, 0x108A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A3Cu;
label_108a3c:
    // 0x108a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a40: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x108A40u;
    SET_GPR_U32(ctx, 31, 0x108A48u);
    ctx->pc = 0x108A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A40u;
    // 0x108a44: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x108A40u, 0x108A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A48u;
label_108a48:
    // 0x108a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a50: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108a54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x108a54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x108a58: 0xc069310  jal         func_1A4C40
    ctx->pc = 0x108A58u;
    SET_GPR_U32(ctx, 31, 0x108A60u);
    ctx->pc = 0x108A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A58u;
    // 0x108a5c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C40u, 0x108A58u, 0x108A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A60u;
label_108a60:
    // 0x108a60: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x108A60u;
    {
        const bool branch_taken_0x108a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A60u;
        // 0x108a64: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a60) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108A68u;
}
