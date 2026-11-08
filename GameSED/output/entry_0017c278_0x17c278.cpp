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

// Function: entry_0017c278
// Address: 0x17c278 - 0x17c290
void entry_0017c278_0x17c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c278_0x17c278");
#endif

    ctx->pc = 0x17c278u;

    // 0x17c278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c27c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x17c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x17c280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c284: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c288: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17c288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17c28c: 0x0  nop
    ctx->pc = 0x17c28cu;
    // NOP
    ctx->pc = 0x17c290u;
}
