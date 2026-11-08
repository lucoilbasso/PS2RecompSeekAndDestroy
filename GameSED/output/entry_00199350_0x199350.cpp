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

// Function: entry_00199350
// Address: 0x199350 - 0x199358
void entry_00199350_0x199350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199350_0x199350");
#endif

    ctx->pc = 0x199350u;

    // 0x199350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x199358u;
}
