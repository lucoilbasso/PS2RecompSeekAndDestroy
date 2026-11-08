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

// Function: entry_0017a8cc
// Address: 0x17a8cc - 0x17a8d0
void entry_0017a8cc_0x17a8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a8cc_0x17a8cc");
#endif

    ctx->pc = 0x17a8ccu;

    // 0x17a8cc: 0x26330040  addiu       $s3, $s1, 0x40
    ctx->pc = 0x17a8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x17a8d0u;
}
