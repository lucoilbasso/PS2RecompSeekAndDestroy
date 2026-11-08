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

// Function: entry_0014c078
// Address: 0x14c078 - 0x14c088
void entry_0014c078_0x14c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c078_0x14c078");
#endif

    ctx->pc = 0x14c078u;

    // 0x14c078: 0xe62001e4  swc1        $f0, 0x1E4($s1)
    ctx->pc = 0x14c078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
    // 0x14c07c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14c080: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x14c080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x14c084: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x14c084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x14c088u;
}
