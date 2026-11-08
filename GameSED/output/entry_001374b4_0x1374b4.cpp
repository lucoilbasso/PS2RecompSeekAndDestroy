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

// Function: entry_001374b4
// Address: 0x1374b4 - 0x1374e4
void entry_001374b4_0x1374b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001374b4_0x1374b4");
#endif

    ctx->pc = 0x1374b4u;

    // 0x1374b4: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x1374b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1374b8: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1374b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x1374bc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1374bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1374c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1374c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1374c4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1374c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1374c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1374cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1374ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1374d0: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1374d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1374d4: 0x2a82000f  slti        $v0, $s4, 0xF
    ctx->pc = 0x1374d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1374d8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1374d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1374dc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1374dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1374e0: 0xa2a00a  movz        $s4, $a1, $v0
    ctx->pc = 0x1374e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 5));
    ctx->pc = 0x1374e4u;
}
