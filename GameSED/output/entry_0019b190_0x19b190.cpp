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

// Function: entry_0019b190
// Address: 0x19b190 - 0x19b198
void entry_0019b190_0x19b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b190_0x19b190");
#endif

    ctx->pc = 0x19b190u;

    // 0x19b190: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x19b190u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x19b194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19b194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19b198u;
}
