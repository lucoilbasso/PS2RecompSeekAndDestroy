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

// Function: entry_001191bc
// Address: 0x1191bc - 0x1191c0
void entry_001191bc_0x1191bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001191bc_0x1191bc");
#endif

    ctx->pc = 0x1191bcu;

    // 0x1191bc: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1191bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1191c0u;
}
