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

// Function: entry_001398a4
// Address: 0x1398a4 - 0x1398ac
void entry_001398a4_0x1398a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001398a4_0x1398a4");
#endif

    ctx->pc = 0x1398a4u;

    // 0x1398a4: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x1398a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x1398a8: 0x26109770  addiu       $s0, $s0, -0x6890
    ctx->pc = 0x1398a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940528));
    ctx->pc = 0x1398acu;
}
