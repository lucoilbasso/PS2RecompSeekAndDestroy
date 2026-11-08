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

// Function: entry_0016fdf0
// Address: 0x16fdf0 - 0x16fdfc
void entry_0016fdf0_0x16fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fdf0_0x16fdf0");
#endif

    ctx->pc = 0x16fdf0u;

    // 0x16fdf0: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x16fdf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16fdf4: 0xae630180  sw          $v1, 0x180($s3)
    ctx->pc = 0x16fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 3));
    // 0x16fdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16fdfcu;
}
