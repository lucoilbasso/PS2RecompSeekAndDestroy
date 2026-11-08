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

// Function: entry_00146978
// Address: 0x146978 - 0x14697c
void entry_00146978_0x146978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146978_0x146978");
#endif

    ctx->pc = 0x146978u;

    // 0x146978: 0x9543001c  lhu         $v1, 0x1C($t2)
    ctx->pc = 0x146978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    ctx->pc = 0x14697cu;
}
