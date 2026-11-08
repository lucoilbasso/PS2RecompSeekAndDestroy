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

// Function: entry_00163570
// Address: 0x163570 - 0x16357c
void entry_00163570_0x163570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163570_0x163570");
#endif

    ctx->pc = 0x163570u;

    // 0x163570: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x163570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x163574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163578: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x163578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    ctx->pc = 0x16357cu;
}
