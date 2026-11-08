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

// Function: entry_001aef30
// Address: 0x1aef30 - 0x1aef3c
void entry_001aef30_0x1aef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aef30_0x1aef30");
#endif

    ctx->pc = 0x1aef30u;

    // 0x1aef30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1aef30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef34: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1aef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1aef38: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1aef38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1aef3cu;
}
