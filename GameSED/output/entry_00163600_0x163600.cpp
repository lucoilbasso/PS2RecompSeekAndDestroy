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

// Function: entry_00163600
// Address: 0x163600 - 0x163604
void entry_00163600_0x163600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163600_0x163600");
#endif

    ctx->pc = 0x163600u;

    // 0x163600: 0xae320048  sw          $s2, 0x48($s1)
    ctx->pc = 0x163600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
    ctx->pc = 0x163604u;
}
