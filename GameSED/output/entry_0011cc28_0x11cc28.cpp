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

// Function: entry_0011cc28
// Address: 0x11cc28 - 0x11cc30
void entry_0011cc28_0x11cc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc28_0x11cc28");
#endif

    ctx->pc = 0x11cc28u;

    // 0x11cc28: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x11cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x11cc2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11cc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11cc30u;
}
