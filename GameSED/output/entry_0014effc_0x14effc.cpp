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

// Function: entry_0014effc
// Address: 0x14effc - 0x14f000
void entry_0014effc_0x14effc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014effc_0x14effc");
#endif

    ctx->pc = 0x14effcu;

    // 0x14effc: 0xae000814  sw          $zero, 0x814($s0)
    ctx->pc = 0x14effcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 0));
    ctx->pc = 0x14f000u;
}
