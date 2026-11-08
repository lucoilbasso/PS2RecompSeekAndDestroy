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

// Function: entry_00135a8c
// Address: 0x135a8c - 0x135ac8
void entry_00135a8c_0x135a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135a8c_0x135a8c");
#endif

    ctx->pc = 0x135a8cu;

    // 0x135a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135a94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135aa4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135aa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135aa8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135aa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135aac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135aacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135ab0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135ab4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135ab8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135abc: 0x8050794  j           func_141E50
    ctx->pc = 0x135ABCu;
    ctx->pc = 0x135AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135ABCu;
    // 0x135ac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E50u;
    ApCameraSetPositionRefer__FP7WcActorP9FVector32T1_0x141e50(rdram, ctx, runtime); return;
    ctx->pc = 0x135AC4u;
    // 0x135ac4: 0x0  nop
    ctx->pc = 0x135ac4u;
    // NOP
    ctx->pc = 0x135ac8u;
}
