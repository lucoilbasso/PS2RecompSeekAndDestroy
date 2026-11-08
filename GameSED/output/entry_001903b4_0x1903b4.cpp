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

// Function: entry_001903b4
// Address: 0x1903b4 - 0x1903b8
void entry_001903b4_0x1903b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001903b4_0x1903b4");
#endif

    ctx->pc = 0x1903b4u;

    // 0x1903b4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x1903b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    ctx->pc = 0x1903b8u;
}
