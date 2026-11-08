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

// Function: caseD_12
// Address: 0x108bf0 - 0x108c20
void caseD_12_0x108bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x108bf0");
#endif

    switch (ctx->pc) {
        case 0x108c04u: goto label_108c04;
        default: break;
    }

    ctx->pc = 0x108bf0u;

    // 0x108bf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf8: 0xc7968024  lwc1        $f22, -0x7FDC($gp)
    ctx->pc = 0x108bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x108bfc: 0xc042144  jal         func_108510
    ctx->pc = 0x108BFCu;
    SET_GPR_U32(ctx, 31, 0x108C04u);
    ctx->pc = 0x108C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BFCu;
    // 0x108c00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108BFCu, 0x108C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C04u;
label_108c04:
    // 0x108c04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108c08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x108c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x108c0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x108c0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x108c10: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x108c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c14: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x108c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c18: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x108c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108c1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x108c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108c20u;
}
