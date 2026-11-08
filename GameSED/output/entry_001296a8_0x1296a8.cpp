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

// Function: entry_001296a8
// Address: 0x1296a8 - 0x1296b0
void entry_001296a8_0x1296a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001296a8_0x1296a8");
#endif

    ctx->pc = 0x1296a8u;

    // 0x1296a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1296a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1296ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1296acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1296b0u;
}
