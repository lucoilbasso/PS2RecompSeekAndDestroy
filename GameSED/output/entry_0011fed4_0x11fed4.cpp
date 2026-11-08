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

// Function: entry_0011fed4
// Address: 0x11fed4 - 0x11fed8
void entry_0011fed4_0x11fed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fed4_0x11fed4");
#endif

    ctx->pc = 0x11fed4u;

    // 0x11fed4: 0x24517260  addiu       $s1, $v0, 0x7260
    ctx->pc = 0x11fed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
    ctx->pc = 0x11fed8u;
}
