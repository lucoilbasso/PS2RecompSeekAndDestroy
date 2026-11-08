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

// Function: entry_00163fb4
// Address: 0x163fb4 - 0x163fb8
void entry_00163fb4_0x163fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163fb4_0x163fb4");
#endif

    ctx->pc = 0x163fb4u;

    // 0x163fb4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x163fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x163fb8u;
}
