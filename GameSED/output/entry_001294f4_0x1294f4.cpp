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

// Function: entry_001294f4
// Address: 0x1294f4 - 0x1294f8
void entry_001294f4_0x1294f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001294f4_0x1294f4");
#endif

    ctx->pc = 0x1294f4u;

    // 0x1294f4: 0x24147fff  addiu       $s4, $zero, 0x7FFF
    ctx->pc = 0x1294f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->pc = 0x1294f8u;
}
