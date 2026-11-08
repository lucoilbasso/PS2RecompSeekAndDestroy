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

// Function: entry_0015c570
// Address: 0x15c570 - 0x15c578
void entry_0015c570_0x15c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c570_0x15c570");
#endif

    ctx->pc = 0x15c570u;

    // 0x15c570: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x15c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x15c574: 0xa6e20016  sh          $v0, 0x16($s7)
    ctx->pc = 0x15c574u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15c578u;
}
