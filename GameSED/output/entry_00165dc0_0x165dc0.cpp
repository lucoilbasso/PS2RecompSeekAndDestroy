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

// Function: entry_00165dc0
// Address: 0x165dc0 - 0x165dd0
void entry_00165dc0_0x165dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165dc0_0x165dc0");
#endif

    ctx->pc = 0x165dc0u;

    // 0x165dc0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x165dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x165dc4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x165dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165dc8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x165dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165dcc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x165dccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x165dd0u;
}
