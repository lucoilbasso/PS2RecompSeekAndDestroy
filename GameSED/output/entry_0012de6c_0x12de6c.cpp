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

// Function: entry_0012de6c
// Address: 0x12de6c - 0x12de78
void entry_0012de6c_0x12de6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012de6c_0x12de6c");
#endif

    ctx->pc = 0x12de6cu;

    // 0x12de6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12de70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12de70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de74: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x12de74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->pc = 0x12de78u;
}
