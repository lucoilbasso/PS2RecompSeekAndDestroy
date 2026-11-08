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
// Address: 0x1357b8 - 0x1357f8
void caseD_12_0x1357b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x1357b8");
#endif

    ctx->pc = 0x1357b8u;

    // 0x1357b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1357b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1357bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1357c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1357c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1357c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1357c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1357c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1357ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1357d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1357d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1357d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1357d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1357d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1357d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1357dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1357dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1357e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1357e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1357e4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1357e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1357e8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1357e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1357ec: 0x804fefa  j           func_13FBE8
    ctx->pc = 0x1357ECu;
    ctx->pc = 0x1357F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357ECu;
    // 0x1357f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBE8u;
    ApCameraSetPositionWarp__FP7WcActorP9FVector32P9DVAngle32_0x13fbe8(rdram, ctx, runtime); return;
    ctx->pc = 0x1357F4u;
    // 0x1357f4: 0x0  nop
    ctx->pc = 0x1357f4u;
    // NOP
    ctx->pc = 0x1357f8u;
}
