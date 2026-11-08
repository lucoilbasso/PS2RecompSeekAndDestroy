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

// Function: entry_00177dc8
// Address: 0x177dc8 - 0x177dd0
void entry_00177dc8_0x177dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177dc8_0x177dc8");
#endif

    ctx->pc = 0x177dc8u;

    // 0x177dc8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x177dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x177dcc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x177dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->pc = 0x177dd0u;
}
