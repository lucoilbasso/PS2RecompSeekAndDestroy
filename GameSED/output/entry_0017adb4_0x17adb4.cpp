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

// Function: entry_0017adb4
// Address: 0x17adb4 - 0x17adb8
void entry_0017adb4_0x17adb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017adb4_0x17adb4");
#endif

    ctx->pc = 0x17adb4u;

    // 0x17adb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    ctx->pc = 0x17adb8u;
}
