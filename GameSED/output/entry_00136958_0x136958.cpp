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

// Function: entry_00136958
// Address: 0x136958 - 0x13695c
void entry_00136958_0x136958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136958_0x136958");
#endif

    ctx->pc = 0x136958u;

    // 0x136958: 0x3c100020  lui         $s0, 0x20
    ctx->pc = 0x136958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x13695cu;
}
