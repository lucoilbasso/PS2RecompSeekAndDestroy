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

// Function: entry_001d4b58
// Address: 0x1d4b58 - 0x1d4b60
void entry_001d4b58_0x1d4b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4b58_0x1d4b58");
#endif

    ctx->pc = 0x1d4b58u;

    // 0x1d4b58: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1d4b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d4b5c: 0x0  nop
    ctx->pc = 0x1d4b5cu;
    // NOP
    ctx->pc = 0x1d4b60u;
}
