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

// Function: entry_00135388
// Address: 0x135388 - 0x1353c8
void entry_00135388_0x135388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135388_0x135388");
#endif

    ctx->pc = 0x135388u;

    // 0x135388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13538c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13538cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135390: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135394: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13539c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13539cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1353a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1353a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1353a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1353a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1353a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1353ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1353acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1353b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1353b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1353b4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1353b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1353b8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1353b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1353bc: 0x8050890  j           func_142240
    ctx->pc = 0x1353BCu;
    ctx->pc = 0x1353C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353BCu;
    // 0x1353c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142240u;
    ApCameraSetTraceMode__FP7WcActorT0P18ApCMTraceParameterb_0x142240(rdram, ctx, runtime); return;
    ctx->pc = 0x1353C4u;
    // 0x1353c4: 0x0  nop
    ctx->pc = 0x1353c4u;
    // NOP
    ctx->pc = 0x1353c8u;
}
