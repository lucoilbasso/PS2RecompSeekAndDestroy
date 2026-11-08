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

// Function: entry_0016edcc
// Address: 0x16edcc - 0x16edd0
void entry_0016edcc_0x16edcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016edcc_0x16edcc");
#endif

    ctx->pc = 0x16edccu;

    // 0x16edcc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x16edccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x16edd0u;
}
