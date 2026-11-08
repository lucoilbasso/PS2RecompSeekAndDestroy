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

// Function: entry_001cde44
// Address: 0x1cde44 - 0x1cde58
void entry_001cde44_0x1cde44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cde44_0x1cde44");
#endif

    ctx->pc = 0x1cde44u;

    // 0x1cde44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cde44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde48: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cde48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cde4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cde4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cde50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cde50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cde54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cde54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cde58u;
}
