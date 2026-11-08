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

// Function: entry_0019e638
// Address: 0x19e638 - 0x19e63c
void entry_0019e638_0x19e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e638_0x19e638");
#endif

    ctx->pc = 0x19e638u;

    // 0x19e638: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19e638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    ctx->pc = 0x19e63cu;
}
