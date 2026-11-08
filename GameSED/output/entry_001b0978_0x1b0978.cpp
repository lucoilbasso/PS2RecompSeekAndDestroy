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

// Function: entry_001b0978
// Address: 0x1b0978 - 0x1b0998
void entry_001b0978_0x1b0978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0978_0x1b0978");
#endif

    ctx->pc = 0x1b0978u;

    // 0x1b0978: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b0978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b097c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b097cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0980: 0x2484aad0  addiu       $a0, $a0, -0x5530
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945488));
    // 0x1b0984: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0988: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b0988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b098c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b098cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0990: 0x806c3e2  j           func_1B0F88
    ctx->pc = 0x1B0990u;
    ctx->pc = 0x1B0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0990u;
    // 0x1b0994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    kprintf_0x1b0f88(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0998u;
}
