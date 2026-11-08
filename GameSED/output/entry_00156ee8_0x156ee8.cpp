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

// Function: entry_00156ee8
// Address: 0x156ee8 - 0x156ef0
void entry_00156ee8_0x156ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ee8_0x156ee8");
#endif

    ctx->pc = 0x156ee8u;

    // 0x156ee8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x156ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156eec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x156ef0u;
}
