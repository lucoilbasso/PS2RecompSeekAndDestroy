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

// Function: sceDevConsSetColor
// Address: 0x1ad718 - 0x1ad730
void sceDevConsSetColor_0x1ad718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsSetColor_0x1ad718");
#endif

    ctx->pc = 0x1ad718u;

    // 0x1ad718: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x1ad718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1ad71c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ad71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ad720: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1ad720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ad724: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1ad724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ad728: 0x806b440  j           func_1AD100
    ctx->pc = 0x1AD728u;
    ctx->pc = 0x1AD72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD728u;
    // 0x1ad72c: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD100u;
    sceDevFontSetColor_0x1ad100(rdram, ctx, runtime); return;
    ctx->pc = 0x1AD730u;
}
