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

// Function: entry_0017501c
// Address: 0x17501c - 0x175028
void entry_0017501c_0x17501c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017501c_0x17501c");
#endif

    ctx->pc = 0x17501cu;

    // 0x17501c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x175020: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x175020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175024: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x175024u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    ctx->pc = 0x175028u;
}
