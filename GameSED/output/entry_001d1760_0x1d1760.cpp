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

// Function: entry_001d1760
// Address: 0x1d1760 - 0x1d1770
void entry_001d1760_0x1d1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1760_0x1d1760");
#endif

    ctx->pc = 0x1d1760u;

    // 0x1d1760: 0x3a240067  xori        $a0, $s1, 0x67
    ctx->pc = 0x1d1760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)103);
    // 0x1d1764: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1d1768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d176c: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x1d176cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    ctx->pc = 0x1d1770u;
}
