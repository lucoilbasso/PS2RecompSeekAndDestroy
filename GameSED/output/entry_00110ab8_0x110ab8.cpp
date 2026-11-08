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

// Function: entry_00110ab8
// Address: 0x110ab8 - 0x110abc
void entry_00110ab8_0x110ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ab8_0x110ab8");
#endif

    ctx->pc = 0x110ab8u;

    // 0x110ab8: 0x249100a0  addiu       $s1, $a0, 0xA0
    ctx->pc = 0x110ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->pc = 0x110abcu;
}
