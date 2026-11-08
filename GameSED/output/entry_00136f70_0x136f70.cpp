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

// Function: entry_00136f70
// Address: 0x136f70 - 0x136f7c
void entry_00136f70_0x136f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136f70_0x136f70");
#endif

    ctx->pc = 0x136f70u;

    // 0x136f70: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x136f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x136f74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x136f74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x136f78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x136f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->pc = 0x136f7cu;
}
