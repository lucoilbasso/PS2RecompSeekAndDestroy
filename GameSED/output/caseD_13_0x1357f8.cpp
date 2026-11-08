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
// Address: 0x1357f8 - 0x135838
void caseD_13_0x1357f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1357f8");
#endif

    ctx->pc = 0x1357f8u;

    // 0x1357f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1357f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1357fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135804: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135808: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13580c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13580cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135818: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135818u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13581c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13581cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135820: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135824: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135828: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13582c: 0x8050764  j           func_141D90
    ctx->pc = 0x13582Cu;
    ctx->pc = 0x135830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13582Cu;
    // 0x135830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D90u;
    ApCameraSetActorFixed__FP7WcActorT0P9FVector32_0x141d90(rdram, ctx, runtime); return;
    ctx->pc = 0x135834u;
    // 0x135834: 0x0  nop
    ctx->pc = 0x135834u;
    // NOP
    ctx->pc = 0x135838u;
}
