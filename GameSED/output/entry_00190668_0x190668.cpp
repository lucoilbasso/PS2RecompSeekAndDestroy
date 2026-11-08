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

// Function: entry_00190668
// Address: 0x190668 - 0x190670
void entry_00190668_0x190668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190668_0x190668");
#endif

    ctx->pc = 0x190668u;

    // 0x190668: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x190668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19066c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19066cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x190670u;
}
