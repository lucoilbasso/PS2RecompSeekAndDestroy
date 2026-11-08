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

// Function: entry_0013f9a4
// Address: 0x13f9a4 - 0x13f9ac
void entry_0013f9a4_0x13f9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f9a4_0x13f9a4");
#endif

    ctx->pc = 0x13f9a4u;

    // 0x13f9a4: 0x11302b  sltu        $a2, $zero, $s1
    ctx->pc = 0x13f9a4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13f9a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x13f9acu;
}
