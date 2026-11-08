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

// Function: entry_0012b528
// Address: 0x12b528 - 0x12b52c
void entry_0012b528_0x12b528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b528_0x12b528");
#endif

    ctx->pc = 0x12b528u;

    // 0x12b528: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x12b528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x12b52cu;
}
