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

// Function: entry_0012d264
// Address: 0x12d264 - 0x12d268
void entry_0012d264_0x12d264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d264_0x12d264");
#endif

    ctx->pc = 0x12d264u;

    // 0x12d264: 0xaca300c4  sw          $v1, 0xC4($a1)
    ctx->pc = 0x12d264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 3));
    ctx->pc = 0x12d268u;
}
