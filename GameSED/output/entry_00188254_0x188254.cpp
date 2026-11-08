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

// Function: entry_00188254
// Address: 0x188254 - 0x188258
void entry_00188254_0x188254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188254_0x188254");
#endif

    ctx->pc = 0x188254u;

    // 0x188254: 0x24d7d640  addiu       $s7, $a2, -0x29C0
    ctx->pc = 0x188254u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
    ctx->pc = 0x188258u;
}
