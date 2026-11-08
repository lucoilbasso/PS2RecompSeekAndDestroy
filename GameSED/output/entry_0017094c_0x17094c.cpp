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

// Function: entry_0017094c
// Address: 0x17094c - 0x17095c
void entry_0017094c_0x17094c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017094c_0x17094c");
#endif

    ctx->pc = 0x17094cu;

    // 0x17094c: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x17094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x170950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170954: 0x805c470  j           func_1711C0
    ctx->pc = 0x170954u;
    ctx->pc = 0x170958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170954u;
    // 0x170958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1711C0u;
    audioDecSendToIOP_0x1711c0(rdram, ctx, runtime); return;
    ctx->pc = 0x17095Cu;
}
