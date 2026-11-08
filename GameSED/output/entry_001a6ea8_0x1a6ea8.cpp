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

// Function: entry_001a6ea8
// Address: 0x1a6ea8 - 0x1a6eb0
void entry_001a6ea8_0x1a6ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6ea8_0x1a6ea8");
#endif

    ctx->pc = 0x1a6ea8u;

    // 0x1a6ea8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a6eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a6eb0u;
}
