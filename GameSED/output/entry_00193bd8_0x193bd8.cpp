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

// Function: entry_00193bd8
// Address: 0x193bd8 - 0x193bdc
void entry_00193bd8_0x193bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193bd8_0x193bd8");
#endif

    ctx->pc = 0x193bd8u;

    // 0x193bd8: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x193bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    ctx->pc = 0x193bdcu;
}
