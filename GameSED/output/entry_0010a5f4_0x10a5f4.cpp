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

// Function: entry_0010a5f4
// Address: 0x10a5f4 - 0x10a5f8
void entry_0010a5f4_0x10a5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a5f4_0x10a5f4");
#endif

    ctx->pc = 0x10a5f4u;

    // 0x10a5f4: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x10a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x10a5f8u;
}
