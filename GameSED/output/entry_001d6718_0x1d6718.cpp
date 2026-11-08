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

// Function: entry_001d6718
// Address: 0x1d6718 - 0x1d6724
void entry_001d6718_0x1d6718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6718_0x1d6718");
#endif

    ctx->pc = 0x1d6718u;

    // 0x1d6718: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d6718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d671c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6720: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d6720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d6724u;
}
