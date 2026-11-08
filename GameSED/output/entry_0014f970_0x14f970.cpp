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

// Function: entry_0014f970
// Address: 0x14f970 - 0x14f978
void entry_0014f970_0x14f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f970_0x14f970");
#endif

    ctx->pc = 0x14f970u;

    // 0x14f970: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x14f970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f974: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14f974u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x14f978u;
}
