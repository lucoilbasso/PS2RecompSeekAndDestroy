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

// Function: entry_00104ec8
// Address: 0x104ec8 - 0x104ecc
void entry_00104ec8_0x104ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ec8_0x104ec8");
#endif

    ctx->pc = 0x104ec8u;

    // 0x104ec8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x104ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x104eccu;
}
