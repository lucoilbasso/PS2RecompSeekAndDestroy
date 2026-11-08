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

// Function: entry_00141c0c
// Address: 0x141c0c - 0x141c18
void entry_00141c0c_0x141c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c0c_0x141c0c");
#endif

    ctx->pc = 0x141c0cu;

    // 0x141c0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x141c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x141c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c14: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x141c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->pc = 0x141c18u;
}
