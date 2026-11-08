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

// Function: caseD_b
// Address: 0x135608 - 0x135648
void caseD_b_0x135608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x135608");
#endif

    ctx->pc = 0x135608u;

    // 0x135608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13560c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13560cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135614: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13561c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13561cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x135624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13562c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13562cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135630: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135634: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135638: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13563c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135640: 0x80508ae  j           func_1422B8
    ctx->pc = 0x135640u;
    ctx->pc = 0x135644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135640u;
    // 0x135644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1422B8u;
    ApCameraSetTraceAngle__FP7WcActorT0P18ApCMTraceParameterb_0x1422b8(rdram, ctx, runtime); return;
    ctx->pc = 0x135648u;
}
