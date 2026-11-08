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

// Function: entry_0012a704
// Address: 0x12a704 - 0x12a708
void entry_0012a704_0x12a704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a704_0x12a704");
#endif

    ctx->pc = 0x12a704u;

    // 0x12a704: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x12a704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->pc = 0x12a708u;
}
