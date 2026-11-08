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

// Function: entry_00130810
// Address: 0x130810 - 0x13081c
void entry_00130810_0x130810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130810_0x130810");
#endif

    ctx->pc = 0x130810u;

    // 0x130810: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x130810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x130814: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x130814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x130818: 0xa62300c6  sh          $v1, 0xC6($s1)
    ctx->pc = 0x130818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 198), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13081cu;
}
