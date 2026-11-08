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

// Function: entry_0016fb48
// Address: 0x16fb48 - 0x16fb50
void entry_0016fb48_0x16fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fb48_0x16fb48");
#endif

    ctx->pc = 0x16fb48u;

    // 0x16fb48: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x16fb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16fb4c: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x16fb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16fb50u;
}
