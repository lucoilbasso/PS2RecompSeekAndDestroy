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

// Function: entry_00199018
// Address: 0x199018 - 0x199028
void entry_00199018_0x199018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199018_0x199018");
#endif

    ctx->pc = 0x199018u;

    // 0x199018: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x199018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x19901c: 0xace80238  sw          $t0, 0x238($a3)
    ctx->pc = 0x19901cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 568), GPR_U32(ctx, 8));
    // 0x199020: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x199020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x199024: 0xace2023c  sw          $v0, 0x23C($a3)
    ctx->pc = 0x199024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 2));
    ctx->pc = 0x199028u;
}
