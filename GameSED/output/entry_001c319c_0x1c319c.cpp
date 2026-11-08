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

// Function: entry_001c319c
// Address: 0x1c319c - 0x1c31c8
void entry_001c319c_0x1c319c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c319c_0x1c319c");
#endif

    ctx->pc = 0x1c319cu;

    // 0x1c319c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1c31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1c31a4: 0x8ce200e4  lw          $v0, 0xE4($a3)
    ctx->pc = 0x1c31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
    // 0x1c31a8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c31ac: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x1c31acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c31b0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1c31b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31b4: 0xe00013  mtlo        $a3
    ctx->pc = 0x1c31b4u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x1c31b8: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x1c31b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1c31bc: 0x3812  mflo        $a3
    ctx->pc = 0x1c31bcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1c31c0: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1C31C0u;
    {
        const bool branch_taken_0x1c31c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31C0u;
        // 0x1c31c4: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31c0) {
            ctx->pc = 0x1C3050u;
            return;
        }
    }
    ctx->pc = 0x1C31C8u;
}
