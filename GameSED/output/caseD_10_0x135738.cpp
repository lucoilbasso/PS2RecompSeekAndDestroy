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

// Function: caseD_10
// Address: 0x135738 - 0x135778
void caseD_10_0x135738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x135738");
#endif

    ctx->pc = 0x135738u;

    // 0x135738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13573c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13573cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135744: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135748: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x13574c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13574cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135758: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13575c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13575cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135760: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135764: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135768: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13576c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135770: 0x805030e  j           func_140C38
    ctx->pc = 0x135770u;
    ctx->pc = 0x135774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135770u;
    // 0x135774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140C38u;
    ApCameraSetTurretView__FP7WcActorT0P9FVector32P9DVAngle32_0x140c38(rdram, ctx, runtime); return;
    ctx->pc = 0x135778u;
}
