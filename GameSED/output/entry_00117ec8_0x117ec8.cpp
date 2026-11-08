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

// Function: entry_00117ec8
// Address: 0x117ec8 - 0x117ee0
void entry_00117ec8_0x117ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117ec8_0x117ec8");
#endif

    ctx->pc = 0x117ec8u;

    // 0x117ec8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x117ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x117ecc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x117eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x117ed0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117ed4: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x117ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
    // 0x117ed8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x117ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x117edc: 0x2456c540  addiu       $s6, $v0, -0x3AC0
    ctx->pc = 0x117edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    ctx->pc = 0x117ee0u;
}
