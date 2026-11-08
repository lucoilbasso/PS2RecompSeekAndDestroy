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

// Function: entry_00135d08
// Address: 0x135d08 - 0x135d38
void entry_00135d08_0x135d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135d08_0x135d08");
#endif

    ctx->pc = 0x135d08u;

    // 0x135d08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135d14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135d18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135d18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135d1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135d1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135d20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135d20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135d24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135d28: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135d2c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135d30: 0x804fca4  j           func_13F290
    ctx->pc = 0x135D30u;
    ctx->pc = 0x135D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D30u;
    // 0x135d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F290u;
    ApCameraZoomReset__FP7WcActor_0x13f290(rdram, ctx, runtime); return;
    ctx->pc = 0x135D38u;
}
