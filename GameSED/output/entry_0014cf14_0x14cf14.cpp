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

// Function: entry_0014cf14
// Address: 0x14cf14 - 0x14cf24
void entry_0014cf14_0x14cf14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cf14_0x14cf14");
#endif

    ctx->pc = 0x14cf14u;

    // 0x14cf14: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x14cf14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf18: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14cf18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf1c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14cf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf20: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x14cf20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14cf24u;
}
