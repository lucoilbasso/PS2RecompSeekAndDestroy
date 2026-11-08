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

// Function: entry_00155bcc
// Address: 0x155bcc - 0x155bd0
void entry_00155bcc_0x155bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155bcc_0x155bcc");
#endif

    ctx->pc = 0x155bccu;

    // 0x155bcc: 0x2607079c  addiu       $a3, $s0, 0x79C
    ctx->pc = 0x155bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
    ctx->pc = 0x155bd0u;
}
