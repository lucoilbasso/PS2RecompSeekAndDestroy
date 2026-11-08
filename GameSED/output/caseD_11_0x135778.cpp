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

// Function: caseD_11
// Address: 0x135778 - 0x1357b8
void caseD_11_0x135778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x135778");
#endif

    ctx->pc = 0x135778u;

    // 0x135778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13577c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13577cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135780: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135784: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135788: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13578c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13578cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135794: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135798: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13579c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13579cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1357a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1357a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1357a4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1357a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1357a8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1357a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1357ac: 0x804feb0  j           func_13FAC0
    ctx->pc = 0x1357ACu;
    ctx->pc = 0x1357B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357ACu;
    // 0x1357b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAC0u;
    ApCameraSetPositionFree__FP7WcActorP9FVector32P9DVAngle32_0x13fac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1357B4u;
    // 0x1357b4: 0x0  nop
    ctx->pc = 0x1357b4u;
    // NOP
    ctx->pc = 0x1357b8u;
}
