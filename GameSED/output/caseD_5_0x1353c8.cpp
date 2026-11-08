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

// Function: caseD_5
// Address: 0x1353c8 - 0x135408
void caseD_5_0x1353c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1353c8");
#endif

    switch (ctx->pc) {
        case 0x1353d0u: goto label_1353d0;
        default: break;
    }

    ctx->pc = 0x1353c8u;

    // 0x1353c8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1353C8u;
    SET_GPR_U32(ctx, 31, 0x1353D0u);
    ctx->pc = 0x1353CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353C8u;
    // 0x1353cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1353C8u, 0x1353D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353D0u;
label_1353d0:
    // 0x1353d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1353d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1353d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1353d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1353d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1353dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1353dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1353e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1353e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1353e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1353e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1353e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1353e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1353ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1353ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1353f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1353f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1353f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1353f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1353f8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1353f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1353fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1353fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135400: 0x8050930  j           func_1424C0
    ctx->pc = 0x135400u;
    ctx->pc = 0x135404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135400u;
    // 0x135404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1424C0u;
    ApCMTraceSetHeightLimit__FP7WcActorf_0x1424c0(rdram, ctx, runtime); return;
    ctx->pc = 0x135408u;
}
