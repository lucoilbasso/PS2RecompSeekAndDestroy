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

// Function: entry_00179020
// Address: 0x179020 - 0x179030
void entry_00179020_0x179020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179020_0x179020");
#endif

    ctx->pc = 0x179020u;

    // 0x179020: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x179024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179028: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x179028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17902c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x179030u;
}
