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

// Function: entry_00135bf0
// Address: 0x135bf0 - 0x135bf8
void entry_00135bf0_0x135bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135bf0_0x135bf0");
#endif

    ctx->pc = 0x135bf0u;

    // 0x135bf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135bf4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x135bf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x135bf8u;
}
