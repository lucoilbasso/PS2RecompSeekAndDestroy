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

// Function: entry_0018e9dc
// Address: 0x18e9dc - 0x18e9e0
void entry_0018e9dc_0x18e9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e9dc_0x18e9dc");
#endif

    ctx->pc = 0x18e9dcu;

    // 0x18e9dc: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x18e9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x18e9e0u;
}
