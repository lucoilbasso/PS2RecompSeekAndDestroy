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

// Function: entry_00101910
// Address: 0x101910 - 0x10191c
void entry_00101910_0x101910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101910_0x101910");
#endif

    ctx->pc = 0x101910u;

    // 0x101910: 0x2662007f  addiu       $v0, $s3, 0x7F
    ctx->pc = 0x101910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 127));
    // 0x101914: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x101914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x101918: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x101918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x10191cu;
}
