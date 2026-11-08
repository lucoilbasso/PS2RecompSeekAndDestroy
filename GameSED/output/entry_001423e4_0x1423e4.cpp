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

// Function: entry_001423e4
// Address: 0x1423e4 - 0x1423ec
void entry_001423e4_0x1423e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001423e4_0x1423e4");
#endif

    ctx->pc = 0x1423e4u;

    // 0x1423e4: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1423e8: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x1423e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
    ctx->pc = 0x1423ecu;
}
