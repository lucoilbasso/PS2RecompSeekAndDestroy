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

// Function: entry_001423ec
// Address: 0x1423ec - 0x1423f4
void entry_001423ec_0x1423ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001423ec_0x1423ec");
#endif

    ctx->pc = 0x1423ecu;

    // 0x1423ec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1423ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1423f0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1423f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1423f4u;
}
