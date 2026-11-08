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

// Function: entry_0013b300
// Address: 0x13b300 - 0x13b314
void entry_0013b300_0x13b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b300_0x13b300");
#endif

    ctx->pc = 0x13b300u;

    // 0x13b300: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13b304: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x13b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13b308: 0xe616017c  swc1        $f22, 0x17C($s0)
    ctx->pc = 0x13b308u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x13b30c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b310: 0xe6030180  swc1        $f3, 0x180($s0)
    ctx->pc = 0x13b310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
    ctx->pc = 0x13b314u;
}
