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

// Function: entry_001431bc
// Address: 0x1431bc - 0x1431c4
void entry_001431bc_0x1431bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001431bc_0x1431bc");
#endif

    ctx->pc = 0x1431bcu;

    // 0x1431bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1431bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1431c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1431c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x1431c4u;
}
