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

// Function: entry_0018b608
// Address: 0x18b608 - 0x18b614
void entry_0018b608_0x18b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b608_0x18b608");
#endif

    ctx->pc = 0x18b608u;

    // 0x18b608: 0x96020202  lhu         $v0, 0x202($s0)
    ctx->pc = 0x18b608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x18b60c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18b610: 0xa6020202  sh          $v0, 0x202($s0)
    ctx->pc = 0x18b610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 514), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18b614u;
}
