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

// Function: entry_0017bffc
// Address: 0x17bffc - 0x17c000
void entry_0017bffc_0x17bffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bffc_0x17bffc");
#endif

    ctx->pc = 0x17bffcu;

    // 0x17bffc: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x17bffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    ctx->pc = 0x17c000u;
}
