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

// Function: entry_00148ed8
// Address: 0x148ed8 - 0x148ee4
void entry_00148ed8_0x148ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ed8_0x148ed8");
#endif

    ctx->pc = 0x148ed8u;

    // 0x148ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148edc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x148edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x148ee0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x148ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x148ee4u;
}
