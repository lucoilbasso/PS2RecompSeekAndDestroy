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

// Function: entry_001950dc
// Address: 0x1950dc - 0x1950f0
void entry_001950dc_0x1950dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001950dc_0x1950dc");
#endif

    ctx->pc = 0x1950dcu;

    // 0x1950dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1950dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1950e0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1950e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1950e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1950e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1950e8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1950e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1950ec: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1950ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1950f0u;
}
