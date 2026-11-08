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

// Function: entry_0014d2b8
// Address: 0x14d2b8 - 0x14d2d0
void entry_0014d2b8_0x14d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d2b8_0x14d2b8");
#endif

    ctx->pc = 0x14d2b8u;

    // 0x14d2b8: 0x8ca23620  lw          $v0, 0x3620($a1)
    ctx->pc = 0x14d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13856)));
    // 0x14d2bc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x14d2c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14d2c4: 0xaca23620  sw          $v0, 0x3620($a1)
    ctx->pc = 0x14d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 13856), GPR_U32(ctx, 2));
    // 0x14d2c8: 0xac62d16c  sw          $v0, -0x2E94($v1)
    ctx->pc = 0x14d2c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1ED16Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1ED16Cu, _value); } while (0);
    // 0x14d2cc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x14d2d0u;
}
