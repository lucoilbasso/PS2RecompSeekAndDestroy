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

// Function: iSyncDCache
// Address: 0x1afdd8 - 0x1afdec
void iSyncDCache_0x1afdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iSyncDCache_0x1afdd8");
#endif

    ctx->pc = 0x1afdd8u;

    // 0x1afdd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1afddc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x1afddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x1afde0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1afde0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1afde4: 0x806bf2c  j           func_1AFCB0
    ctx->pc = 0x1AFDE4u;
    ctx->pc = 0x1AFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDE4u;
    // 0x1afde8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFCB0u;
    _sceSDC_0x1afcb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1AFDECu;
}
