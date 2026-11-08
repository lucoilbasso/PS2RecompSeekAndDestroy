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

// Function: entry_0017af14
// Address: 0x17af14 - 0x17af18
void entry_0017af14_0x17af14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017af14_0x17af14");
#endif

    ctx->pc = 0x17af14u;

    // 0x17af14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x17af18u;
}
