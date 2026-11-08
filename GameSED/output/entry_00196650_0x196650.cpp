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

// Function: entry_00196650
// Address: 0x196650 - 0x196658
void entry_00196650_0x196650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196650_0x196650");
#endif

    ctx->pc = 0x196650u;

    // 0x196650: 0xe6620190  swc1        $f2, 0x190($s3)
    ctx->pc = 0x196650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 400), bits); }
    // 0x196654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x196658u;
}
