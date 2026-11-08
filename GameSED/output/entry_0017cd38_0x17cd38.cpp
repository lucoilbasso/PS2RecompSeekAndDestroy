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

// Function: entry_0017cd38
// Address: 0x17cd38 - 0x17cd3c
void entry_0017cd38_0x17cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd38_0x17cd38");
#endif

    ctx->pc = 0x17cd38u;

    // 0x17cd38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x17cd3cu;
}
