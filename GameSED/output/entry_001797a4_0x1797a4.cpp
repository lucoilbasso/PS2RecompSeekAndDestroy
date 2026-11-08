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

// Function: entry_001797a4
// Address: 0x1797a4 - 0x1797b0
void entry_001797a4_0x1797a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001797a4_0x1797a4");
#endif

    ctx->pc = 0x1797a4u;

    // 0x1797a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1797a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1797a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1797ac: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x1797b0u;
}
