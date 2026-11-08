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

// Function: entry_00121590
// Address: 0x121590 - 0x1215ac
void entry_00121590_0x121590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121590_0x121590");
#endif

    ctx->pc = 0x121590u;

    // 0x121590: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x121590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x121594: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x121594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x121598: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12159c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1215a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1215a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1215a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1215a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1215a8: 0xc4c00104  lwc1        $f0, 0x104($a2)
    ctx->pc = 0x1215a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1215acu;
}
