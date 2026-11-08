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

// Function: entry_00156ea8
// Address: 0x156ea8 - 0x156eac
void entry_00156ea8_0x156ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ea8_0x156ea8");
#endif

    ctx->pc = 0x156ea8u;

    // 0x156ea8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x156ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x156eacu;
}
