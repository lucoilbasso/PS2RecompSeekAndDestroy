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

// Function: entry_001d512c
// Address: 0x1d512c - 0x1d5134
void entry_001d512c_0x1d512c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d512c_0x1d512c");
#endif

    ctx->pc = 0x1d512cu;

    // 0x1d512c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1d512cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d5130: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d5130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1d5134u;
}
