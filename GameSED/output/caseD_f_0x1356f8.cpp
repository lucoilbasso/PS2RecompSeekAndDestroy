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

// Function: caseD_f
// Address: 0x1356f8 - 0x135738
void caseD_f_0x1356f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1356f8");
#endif

    ctx->pc = 0x1356f8u;

    // 0x1356f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1356f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1356fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135700: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135704: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135708: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x13570c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13570cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13571c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13571cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135720: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135720u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135724: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135728: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13572c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135730: 0x80502ce  j           func_140B38
    ctx->pc = 0x135730u;
    ctx->pc = 0x135734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135730u;
    // 0x135734: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140B38u;
    ApCameraSetCockpitView__FP7WcActorT0P9FVector32P9DVAngle32_0x140b38(rdram, ctx, runtime); return;
    ctx->pc = 0x135738u;
}
