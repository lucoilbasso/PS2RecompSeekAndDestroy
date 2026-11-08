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

// Function: entry_001d5428
// Address: 0x1d5428 - 0x1d5430
void entry_001d5428_0x1d5428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5428_0x1d5428");
#endif

    ctx->pc = 0x1d5428u;

    // 0x1d5428: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d5428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d542c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x1d5430u;
}
