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

// Function: entry_00118ad4
// Address: 0x118ad4 - 0x118ad8
void entry_00118ad4_0x118ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118ad4_0x118ad4");
#endif

    ctx->pc = 0x118ad4u;

    // 0x118ad4: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x118ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x118ad8u;
}
