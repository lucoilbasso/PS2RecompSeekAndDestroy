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

// Function: entry_001d54cc
// Address: 0x1d54cc - 0x1d54dc
void entry_001d54cc_0x1d54cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d54cc_0x1d54cc");
#endif

    ctx->pc = 0x1d54ccu;

    // 0x1d54cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d54d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d54d4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x1d54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x1d54d8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1d54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    ctx->pc = 0x1d54dcu;
}
