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

// Function: entry_0015ec54
// Address: 0x15ec54 - 0x15ec58
void entry_0015ec54_0x15ec54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec54_0x15ec54");
#endif

    ctx->pc = 0x15ec54u;

    // 0x15ec54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15ec54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x15ec58u;
}
