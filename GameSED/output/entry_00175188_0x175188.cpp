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

// Function: entry_00175188
// Address: 0x175188 - 0x17518c
void entry_00175188_0x175188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175188_0x175188");
#endif

    ctx->pc = 0x175188u;

    // 0x175188: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x175188u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    ctx->pc = 0x17518cu;
}
