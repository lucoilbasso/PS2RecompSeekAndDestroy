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

// Function: entry_00108d30
// Address: 0x108d30 - 0x108d40
void entry_00108d30_0x108d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108d30_0x108d30");
#endif

    ctx->pc = 0x108d30u;

    // 0x108d30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x108d34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108d38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108d40u;
}
