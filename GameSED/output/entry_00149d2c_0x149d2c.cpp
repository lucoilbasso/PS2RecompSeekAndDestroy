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

// Function: entry_00149d2c
// Address: 0x149d2c - 0x149d34
void entry_00149d2c_0x149d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149d2c_0x149d2c");
#endif

    ctx->pc = 0x149d2cu;

    // 0x149d2c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149d30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x149d34u;
}
