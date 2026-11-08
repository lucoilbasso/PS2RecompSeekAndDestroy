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

// Function: entry_00151038
// Address: 0x151038 - 0x15103c
void entry_00151038_0x151038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151038_0x151038");
#endif

    ctx->pc = 0x151038u;

    // 0x151038: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x151038u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    ctx->pc = 0x15103cu;
}
