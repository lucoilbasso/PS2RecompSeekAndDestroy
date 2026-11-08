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

// Function: entry_00141cac
// Address: 0x141cac - 0x141cb4
void entry_00141cac_0x141cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141cac_0x141cac");
#endif

    ctx->pc = 0x141cacu;

    // 0x141cac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x141cacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x141cb0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x141cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x141cb4u;
}
