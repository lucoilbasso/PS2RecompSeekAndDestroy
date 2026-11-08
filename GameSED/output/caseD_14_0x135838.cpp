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

// Function: caseD_14
// Address: 0x135838 - 0x135880
void caseD_14_0x135838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x135838");
#endif

    switch (ctx->pc) {
        case 0x135848u: goto label_135848;
        default: break;
    }

    ctx->pc = 0x135838u;

    // 0x135838: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13583c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13583cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135840: 0xc050764  jal         func_141D90
    ctx->pc = 0x135840u;
    SET_GPR_U32(ctx, 31, 0x135848u);
    ctx->pc = 0x135844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135840u;
    // 0x135844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141D90u, 0x135840u, 0x135848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135848u;
label_135848:
    // 0x135848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13584c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13584cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13585c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13585cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135860: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135864: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135864u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135868: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13586c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135870: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135874: 0x804ff38  j           func_13FCE0
    ctx->pc = 0x135874u;
    ctx->pc = 0x135878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135874u;
    // 0x135878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    ApCameraZeroRate__FP7WcActor_0x13fce0(rdram, ctx, runtime); return;
    ctx->pc = 0x13587Cu;
    // 0x13587c: 0x0  nop
    ctx->pc = 0x13587cu;
    // NOP
    ctx->pc = 0x135880u;
}
