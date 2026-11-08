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

// Function: entry_00179ffc
// Address: 0x179ffc - 0x17a000
void entry_00179ffc_0x179ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ffc_0x179ffc");
#endif

    ctx->pc = 0x179ffcu;

    // 0x179ffc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x179ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->pc = 0x17a000u;
}
