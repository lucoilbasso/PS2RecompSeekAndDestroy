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

// Function: caseD_19
// Address: 0x135a20 - 0x135a58
void caseD_19_0x135a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x135a20");
#endif

    ctx->pc = 0x135a20u;

    // 0x135a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135a34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135a34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135a38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135a3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135a3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135a40: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135a44: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135a48: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135a4c: 0x8050780  j           func_141E00
    ctx->pc = 0x135A4Cu;
    ctx->pc = 0x135A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A4Cu;
    // 0x135a50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    ApCameraResetReffer__FP7WcActor_0x141e00(rdram, ctx, runtime); return;
    ctx->pc = 0x135A54u;
    // 0x135a54: 0x0  nop
    ctx->pc = 0x135a54u;
    // NOP
    ctx->pc = 0x135a58u;
}
