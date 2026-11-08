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

// Function: entry_0013a274
// Address: 0x13a274 - 0x13a284
void entry_0013a274_0x13a274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a274_0x13a274");
#endif

    ctx->pc = 0x13a274u;

    // 0x13a274: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x13a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x13a278: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13a27c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x13a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x13a280: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x13a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x13a284u;
}
