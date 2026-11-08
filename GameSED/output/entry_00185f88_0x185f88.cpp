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

// Function: entry_00185f88
// Address: 0x185f88 - 0x185f90
void entry_00185f88_0x185f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185f88_0x185f88");
#endif

    ctx->pc = 0x185f88u;

    // 0x185f88: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x185f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x185f8c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x185f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x185f90u;
}
