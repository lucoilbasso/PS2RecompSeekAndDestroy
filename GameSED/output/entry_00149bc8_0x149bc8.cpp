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

// Function: entry_00149bc8
// Address: 0x149bc8 - 0x149bcc
void entry_00149bc8_0x149bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149bc8_0x149bc8");
#endif

    ctx->pc = 0x149bc8u;

    // 0x149bc8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x149bccu;
}
