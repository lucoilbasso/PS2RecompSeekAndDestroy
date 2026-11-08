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

// Function: caseD_24
// Address: 0x135df8 - 0x135e38
void caseD_24_0x135df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_24_0x135df8");
#endif

    ctx->pc = 0x135df8u;

    // 0x135df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135e08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135e0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135e10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x135e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135e18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135e1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135e1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135e20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135e20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135e24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135e28: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135e2c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135e30: 0x80503ac  j           func_140EB0
    ctx->pc = 0x135E30u;
    ctx->pc = 0x135E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E30u;
    // 0x135e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140EB0u;
    ApCameraSetParaLockMode__FP7WcActorT0P9FVector32P9DVAngle32_0x140eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x135E38u;
}
