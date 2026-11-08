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

// Function: entry_00141cb4
// Address: 0x141cb4 - 0x141cbc
void entry_00141cb4_0x141cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141cb4_0x141cb4");
#endif

    ctx->pc = 0x141cb4u;

    // 0x141cb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x141cb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x141cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x141cbcu;
}
