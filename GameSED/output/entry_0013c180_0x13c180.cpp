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

// Function: entry_0013c180
// Address: 0x13c180 - 0x13c18c
void entry_0013c180_0x13c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c180_0x13c180");
#endif

    ctx->pc = 0x13c180u;

    // 0x13c180: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x13c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x13c184: 0xa0e20020  sb          $v0, 0x20($a3)
    ctx->pc = 0x13c184u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x13c188: 0xe4e10098  swc1        $f1, 0x98($a3)
    ctx->pc = 0x13c188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
    ctx->pc = 0x13c18cu;
}
