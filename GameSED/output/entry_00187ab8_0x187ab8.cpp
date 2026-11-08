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

// Function: entry_00187ab8
// Address: 0x187ab8 - 0x187abc
void entry_00187ab8_0x187ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ab8_0x187ab8");
#endif

    ctx->pc = 0x187ab8u;

    // 0x187ab8: 0xfd8b0008  sd          $t3, 0x8($t4)
    ctx->pc = 0x187ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 11));
    ctx->pc = 0x187abcu;
}
