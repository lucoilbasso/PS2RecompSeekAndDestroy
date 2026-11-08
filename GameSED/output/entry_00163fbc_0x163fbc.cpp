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

// Function: entry_00163fbc
// Address: 0x163fbc - 0x163fc0
void entry_00163fbc_0x163fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163fbc_0x163fbc");
#endif

    ctx->pc = 0x163fbcu;

    // 0x163fbc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x163fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x163fc0u;
}
