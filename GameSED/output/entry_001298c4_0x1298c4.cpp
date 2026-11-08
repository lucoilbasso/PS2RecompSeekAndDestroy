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

// Function: entry_001298c4
// Address: 0x1298c4 - 0x1298f0
void entry_001298c4_0x1298c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001298c4_0x1298c4");
#endif

    ctx->pc = 0x1298c4u;

    // 0x1298c4: 0x92620027  lbu         $v0, 0x27($s3)
    ctx->pc = 0x1298c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
    // 0x1298c8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1298c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1298cc: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1298ccu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1298d0: 0xc6750000  lwc1        $f21, 0x0($s3)
    ctx->pc = 0x1298d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1298d4: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x1298d4u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x1298d8: 0xc67a001c  lwc1        $f26, 0x1C($s3)
    ctx->pc = 0x1298d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1298dc: 0xc6790020  lwc1        $f25, 0x20($s3)
    ctx->pc = 0x1298dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1298e0: 0xc6740018  lwc1        $f20, 0x18($s3)
    ctx->pc = 0x1298e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1298e4: 0x1012  mflo        $v0
    ctx->pc = 0x1298e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1298e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1298e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1298ec: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1298ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->pc = 0x1298f0u;
}
