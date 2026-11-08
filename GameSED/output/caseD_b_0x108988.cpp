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

// Function: caseD_b
// Address: 0x108988 - 0x1089d0
void caseD_b_0x108988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x108988");
#endif

    switch (ctx->pc) {
        case 0x108998u: goto label_108998;
        case 0x1089acu: goto label_1089ac;
        case 0x1089c4u: goto label_1089c4;
        default: break;
    }

    ctx->pc = 0x108988u;

    // 0x108988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10898c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108990: 0xc042144  jal         func_108510
    ctx->pc = 0x108990u;
    SET_GPR_U32(ctx, 31, 0x108998u);
    ctx->pc = 0x108994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108990u;
    // 0x108994: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108990u, 0x108998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108998u;
label_108998:
    // 0x108998: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10899c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10899cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1089a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089a4: 0xc042144  jal         func_108510
    ctx->pc = 0x1089A4u;
    SET_GPR_U32(ctx, 31, 0x1089ACu);
    ctx->pc = 0x1089A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089A4u;
    // 0x1089a8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x1089A4u, 0x1089ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089ACu;
label_1089ac:
    // 0x1089ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1089acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1089b0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1089b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x1089b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1089b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1089b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089bc: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x1089BCu;
    SET_GPR_U32(ctx, 31, 0x1089C4u);
    ctx->pc = 0x1089C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089BCu;
    // 0x1089c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x1089BCu, 0x1089C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089C4u;
label_1089c4:
    // 0x1089c4: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x1089C4u;
    {
        const bool branch_taken_0x1089c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089C4u;
        // 0x1089c8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089c4) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x1089CCu;
    // 0x1089cc: 0x0  nop
    ctx->pc = 0x1089ccu;
    // NOP
    ctx->pc = 0x1089d0u;
}
