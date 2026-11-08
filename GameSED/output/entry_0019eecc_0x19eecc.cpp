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

// Function: entry_0019eecc
// Address: 0x19eecc - 0x19eed0
void entry_0019eecc_0x19eecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eecc_0x19eecc");
#endif

    ctx->pc = 0x19eeccu;

    // 0x19eecc: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x19eeccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    ctx->pc = 0x19eed0u;
}
