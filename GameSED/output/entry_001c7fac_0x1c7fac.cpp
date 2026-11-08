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

// Function: entry_001c7fac
// Address: 0x1c7fac - 0x1c7fb8
void entry_001c7fac_0x1c7fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7fac_0x1c7fac");
#endif

    ctx->pc = 0x1c7facu;

    // 0x1c7fac: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x1c7facu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x1c7fb0: 0xf11024  and         $v0, $a3, $s1
    ctx->pc = 0x1c7fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x1c7fb4: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x1c7fb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    ctx->pc = 0x1c7fb8u;
}
