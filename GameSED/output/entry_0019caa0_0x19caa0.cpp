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

// Function: entry_0019caa0
// Address: 0x19caa0 - 0x19cab8
void entry_0019caa0_0x19caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019caa0_0x19caa0");
#endif

    ctx->pc = 0x19caa0u;

    // 0x19caa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19caa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19caa4: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x19caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x19caa8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x19caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19caac: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x19caacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19cab0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x19cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19cab4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19cab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    ctx->pc = 0x19cab8u;
}
