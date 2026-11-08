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

// Function: entry_0015ec48
// Address: 0x15ec48 - 0x15ec4c
void entry_0015ec48_0x15ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec48_0x15ec48");
#endif

    ctx->pc = 0x15ec48u;

    // 0x15ec48: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x15ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    ctx->pc = 0x15ec4cu;
}
