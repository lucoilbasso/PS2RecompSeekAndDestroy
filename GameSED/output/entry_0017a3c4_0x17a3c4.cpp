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

// Function: entry_0017a3c4
// Address: 0x17a3c4 - 0x17a3cc
void entry_0017a3c4_0x17a3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3c4_0x17a3c4");
#endif

    ctx->pc = 0x17a3c4u;

    // 0x17a3c4: 0x240400a9  addiu       $a0, $zero, 0xA9
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x17a3c8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->pc = 0x17a3ccu;
}
