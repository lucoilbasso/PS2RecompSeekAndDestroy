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

// Function: caseD_c
// Address: 0x1089d0 - 0x108a20
void caseD_c_0x1089d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1089d0");
#endif

    switch (ctx->pc) {
        case 0x1089e0u: goto label_1089e0;
        case 0x1089ecu: goto label_1089ec;
        case 0x108a00u: goto label_108a00;
        case 0x108a18u: goto label_108a18;
        default: break;
    }

    ctx->pc = 0x1089d0u;

    // 0x1089d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1089d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1089d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d8: 0xc042144  jal         func_108510
    ctx->pc = 0x1089D8u;
    SET_GPR_U32(ctx, 31, 0x1089E0u);
    ctx->pc = 0x1089DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089D8u;
    // 0x1089dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x1089D8u, 0x1089E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089E0u;
label_1089e0:
    // 0x1089e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1089e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089e4: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x1089E4u;
    SET_GPR_U32(ctx, 31, 0x1089ECu);
    ctx->pc = 0x1089E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089E4u;
    // 0x1089e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x1089E4u, 0x1089ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089ECu;
label_1089ec:
    // 0x1089ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1089ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1089f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1089f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f8: 0xc042144  jal         func_108510
    ctx->pc = 0x1089F8u;
    SET_GPR_U32(ctx, 31, 0x108A00u);
    ctx->pc = 0x1089FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089F8u;
    // 0x1089fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x1089F8u, 0x108A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A00u;
label_108a00:
    // 0x108a00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a08: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108a08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108a0c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x108a0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x108a10: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x108A10u;
    SET_GPR_U32(ctx, 31, 0x108A18u);
    ctx->pc = 0x108A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A10u;
    // 0x108a14: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x108A10u, 0x108A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A18u;
label_108a18:
    // 0x108a18: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x108A18u;
    {
        const bool branch_taken_0x108a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A18u;
        // 0x108a1c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a18) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108A20u;
}
