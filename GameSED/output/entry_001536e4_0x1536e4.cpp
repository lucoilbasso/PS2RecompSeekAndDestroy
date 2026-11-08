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

// Function: entry_001536e4
// Address: 0x1536e4 - 0x1536e8
void entry_001536e4_0x1536e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001536e4_0x1536e4");
#endif

    ctx->pc = 0x1536e4u;

    // 0x1536e4: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x1536e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    ctx->pc = 0x1536e8u;
}
