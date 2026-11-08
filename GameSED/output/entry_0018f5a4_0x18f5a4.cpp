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

// Function: entry_0018f5a4
// Address: 0x18f5a4 - 0x18f5ac
void entry_0018f5a4_0x18f5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f5a4_0x18f5a4");
#endif

    ctx->pc = 0x18f5a4u;

    // 0x18f5a4: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x18f5a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18f5a8: 0xd6bbc  dsll32      $t5, $t5, 14
    ctx->pc = 0x18f5a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 14));
    ctx->pc = 0x18f5acu;
}
