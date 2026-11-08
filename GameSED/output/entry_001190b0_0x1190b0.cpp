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

// Function: entry_001190b0
// Address: 0x1190b0 - 0x1190c0
void entry_001190b0_0x1190b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001190b0_0x1190b0");
#endif

    ctx->pc = 0x1190b0u;

    // 0x1190b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1190b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1190b4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1190b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1190b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1190bc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1190bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1190c0u;
}
