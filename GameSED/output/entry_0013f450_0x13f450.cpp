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

// Function: entry_0013f450
// Address: 0x13f450 - 0x13f464
void entry_0013f450_0x13f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f450_0x13f450");
#endif

    ctx->pc = 0x13f450u;

    // 0x13f450: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13f454: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13f454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f458: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x13f458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13f45c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13f45cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x13f460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x13f464u;
}
