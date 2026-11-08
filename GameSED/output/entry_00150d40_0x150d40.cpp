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

// Function: entry_00150d40
// Address: 0x150d40 - 0x150d68
void entry_00150d40_0x150d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150d40_0x150d40");
#endif

    ctx->pc = 0x150d40u;

    // 0x150d40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x150d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150d44: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x150d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x150d48: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x150d4c: 0x2240018  mult        $zero, $s1, $a0
    ctx->pc = 0x150d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x150d50: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x150d50u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x150d54: 0x70008830  pmfhl.lw    $s1
    ctx->pc = 0x150d54u;
    SET_GPR_VEC(ctx, 17, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x150d58: 0x118bfb  dsra        $s1, $s1, 15
    ctx->pc = 0x150d58u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> 15);
    // 0x150d5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150D5Cu;
    {
        const bool branch_taken_0x150d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D5Cu;
        // 0x150d60: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d5c) {
            ctx->pc = 0x150D74u;
            return;
        }
    }
    ctx->pc = 0x150D64u;
    // 0x150d64: 0x0  nop
    ctx->pc = 0x150d64u;
    // NOP
    ctx->pc = 0x150d68u;
}
