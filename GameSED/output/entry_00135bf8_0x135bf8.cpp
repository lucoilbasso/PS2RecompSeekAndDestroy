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

// Function: entry_00135bf8
// Address: 0x135bf8 - 0x135c30
void entry_00135bf8_0x135bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135bf8_0x135bf8");
#endif

    ctx->pc = 0x135bf8u;

    // 0x135bf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135bfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135bfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135c00: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135c08: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x135c08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x135c0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135c10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135c14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135c14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135c18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135c18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135c1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135c1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135c20: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135c24: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135c28: 0x804fc56  j           func_13F158
    ctx->pc = 0x135C28u;
    ctx->pc = 0x135C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C28u;
    // 0x135c2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F158u;
    ApCameraZoomSetup__FP7WcActorff_0x13f158(rdram, ctx, runtime); return;
    ctx->pc = 0x135C30u;
}
