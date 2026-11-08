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

// Function: entry_00101a84
// Address: 0x101a84 - 0x101a88
void entry_00101a84_0x101a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a84_0x101a84");
#endif

    ctx->pc = 0x101a84u;

    // 0x101a84: 0xa6450014  sh          $a1, 0x14($s2)
    ctx->pc = 0x101a84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x101a88u;
}
