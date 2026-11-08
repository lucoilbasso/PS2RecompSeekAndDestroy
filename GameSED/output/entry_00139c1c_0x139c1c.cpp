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

// Function: entry_00139c1c
// Address: 0x139c1c - 0x139c24
void entry_00139c1c_0x139c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139c1c_0x139c1c");
#endif

    ctx->pc = 0x139c1cu;

    // 0x139c1c: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x139c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x139c20: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x139c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    ctx->pc = 0x139c24u;
}
