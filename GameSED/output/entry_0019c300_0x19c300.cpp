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

// Function: entry_0019c300
// Address: 0x19c300 - 0x19c30c
void entry_0019c300_0x19c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c300_0x19c300");
#endif

    ctx->pc = 0x19c300u;

    // 0x19c300: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x19c300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c304: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19c308: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19c308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x19c30cu;
}
