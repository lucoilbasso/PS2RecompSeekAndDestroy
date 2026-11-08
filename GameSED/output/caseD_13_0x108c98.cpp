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

// Function: caseD_13
// Address: 0x108c98 - 0x108ce8
void caseD_13_0x108c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x108c98");
#endif

    switch (ctx->pc) {
        case 0x108ca8u: goto label_108ca8;
        case 0x108cbcu: goto label_108cbc;
        case 0x108ce4u: goto label_108ce4;
        default: break;
    }

    ctx->pc = 0x108c98u;

    // 0x108c98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ca0: 0xc042144  jal         func_108510
    ctx->pc = 0x108CA0u;
    SET_GPR_U32(ctx, 31, 0x108CA8u);
    ctx->pc = 0x108CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CA0u;
    // 0x108ca4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108CA0u, 0x108CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CA8u;
label_108ca8:
    // 0x108ca8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cb4: 0xc042144  jal         func_108510
    ctx->pc = 0x108CB4u;
    SET_GPR_U32(ctx, 31, 0x108CBCu);
    ctx->pc = 0x108CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CB4u;
    // 0x108cb8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108CB4u, 0x108CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CBCu;
label_108cbc:
    // 0x108cbc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108cc0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108cc4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x108cc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x108cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108cd0: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108CD0u;
    {
        const bool branch_taken_0x108cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x108CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CD0u;
        // 0x108cd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cd0) {
            ctx->pc = 0x108CE8u;
            return;
        }
    }
    ctx->pc = 0x108CD8u;
    // 0x108cd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cdc: 0xc042144  jal         func_108510
    ctx->pc = 0x108CDCu;
    SET_GPR_U32(ctx, 31, 0x108CE4u);
    ctx->pc = 0x108CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CDCu;
    // 0x108ce0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108CDCu, 0x108CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CE4u;
label_108ce4:
    // 0x108ce4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108ce8u;
}
