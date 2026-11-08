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

// Function: entry_0014c570
// Address: 0x14c570 - 0x14c574
void entry_0014c570_0x14c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c570_0x14c570");
#endif

    ctx->pc = 0x14c570u;

    // 0x14c570: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14c570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x14c574u;
}
