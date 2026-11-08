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

// Function: entry_001c3498
// Address: 0x1c3498 - 0x1c34ac
void entry_001c3498_0x1c3498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3498_0x1c3498");
#endif

    ctx->pc = 0x1c3498u;

    // 0x1c3498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c349c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c349cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c34a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c34a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c34a4: 0x8070c7e  j           func_1C31F8
    ctx->pc = 0x1C34A4u;
    ctx->pc = 0x1C34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34A4u;
    // 0x1c34a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C31F8u;
    _markOutput_0x1c31f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C34ACu;
}
