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

// Function: entry_001a578c
// Address: 0x1a578c - 0x1a5794
void entry_001a578c_0x1a578c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a578c_0x1a578c");
#endif

    ctx->pc = 0x1a578cu;

    // 0x1a578c: 0x24463ef8  addiu       $a2, $v0, 0x3EF8
    ctx->pc = 0x1a578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16120));
    // 0x1a5790: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x1a5790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->pc = 0x1a5794u;
}
