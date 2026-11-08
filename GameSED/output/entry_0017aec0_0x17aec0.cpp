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

// Function: entry_0017aec0
// Address: 0x17aec0 - 0x17aed8
void entry_0017aec0_0x17aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aec0_0x17aec0");
#endif

    ctx->pc = 0x17aec0u;

    // 0x17aec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17aec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17aecc: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17aed0: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17aed4: 0x0  nop
    ctx->pc = 0x17aed4u;
    // NOP
    ctx->pc = 0x17aed8u;
}
