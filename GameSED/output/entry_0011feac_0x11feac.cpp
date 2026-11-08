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

// Function: entry_0011feac
// Address: 0x11feac - 0x11feb0
void entry_0011feac_0x11feac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011feac_0x11feac");
#endif

    ctx->pc = 0x11feacu;

    // 0x11feac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x11feacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->pc = 0x11feb0u;
}
