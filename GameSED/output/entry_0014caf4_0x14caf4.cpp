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

// Function: entry_0014caf4
// Address: 0x14caf4 - 0x14cafc
void entry_0014caf4_0x14caf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014caf4_0x14caf4");
#endif

    ctx->pc = 0x14caf4u;

    // 0x14caf4: 0x8e2301bc  lw          $v1, 0x1BC($s1)
    ctx->pc = 0x14caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x14caf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14caf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14cafcu;
}
