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

// Function: entry_0017a3bc
// Address: 0x17a3bc - 0x17a3c4
void entry_0017a3bc_0x17a3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3bc_0x17a3bc");
#endif

    ctx->pc = 0x17a3bcu;

    // 0x17a3bc: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x17a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x17a3c0: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x17a3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    ctx->pc = 0x17a3c4u;
}
