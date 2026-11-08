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

// Function: entry_00132fc8
// Address: 0x132fc8 - 0x132fd0
void entry_00132fc8_0x132fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132fc8_0x132fc8");
#endif

    ctx->pc = 0x132fc8u;

    // 0x132fc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132fd0u;
}
