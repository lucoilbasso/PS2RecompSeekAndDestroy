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

// Function: entry_0012d164
// Address: 0x12d164 - 0x12d16c
void entry_0012d164_0x12d164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d164_0x12d164");
#endif

    ctx->pc = 0x12d164u;

    // 0x12d164: 0xaed200c4  sw          $s2, 0xC4($s6)
    ctx->pc = 0x12d164u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 18));
    // 0x12d168: 0xae5600c0  sw          $s6, 0xC0($s2)
    ctx->pc = 0x12d168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 22));
    ctx->pc = 0x12d16cu;
}
