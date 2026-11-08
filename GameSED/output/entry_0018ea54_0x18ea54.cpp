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

// Function: entry_0018ea54
// Address: 0x18ea54 - 0x18ea58
void entry_0018ea54_0x18ea54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea54_0x18ea54");
#endif

    ctx->pc = 0x18ea54u;

    // 0x18ea54: 0xa4860246  sh          $a2, 0x246($a0)
    ctx->pc = 0x18ea54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x18ea58u;
}
