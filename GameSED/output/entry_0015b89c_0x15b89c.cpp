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

// Function: entry_0015b89c
// Address: 0x15b89c - 0x15b8b8
void entry_0015b89c_0x15b89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b89c_0x15b89c");
#endif

    ctx->pc = 0x15b89cu;

    // 0x15b89c: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x15b89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
    // 0x15b8a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b8a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15b8a8: 0xae460028  sw          $a2, 0x28($s2)
    ctx->pc = 0x15b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 6));
    // 0x15b8ac: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x15b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x15b8b0: 0xa6c20016  sh          $v0, 0x16($s6)
    ctx->pc = 0x15b8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b8b4: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x15b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x15b8b8u;
}
