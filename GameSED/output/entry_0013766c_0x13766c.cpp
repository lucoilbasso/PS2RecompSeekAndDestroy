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

// Function: entry_0013766c
// Address: 0x13766c - 0x137688
void entry_0013766c_0x13766c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013766c_0x13766c");
#endif

    ctx->pc = 0x13766cu;

    // 0x13766c: 0x8e9001b0  lw          $s0, 0x1B0($s4)
    ctx->pc = 0x13766cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x137670: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
    ctx->pc = 0x137670u;
    {
        const bool branch_taken_0x137670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137670) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137678u;
    // 0x137678: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x137678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x13767c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13767cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x137680: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x137680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137684: 0x0  nop
    ctx->pc = 0x137684u;
    // NOP
    ctx->pc = 0x137688u;
}
