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

// Function: entry_00185a64
// Address: 0x185a64 - 0x185a6c
void entry_00185a64_0x185a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a64_0x185a64");
#endif

    ctx->pc = 0x185a64u;

    // 0x185a64: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x185a68: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x185a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->pc = 0x185a6cu;
}
