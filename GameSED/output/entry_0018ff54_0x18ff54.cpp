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

// Function: entry_0018ff54
// Address: 0x18ff54 - 0x18ff98
void entry_0018ff54_0x18ff54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff54_0x18ff54");
#endif

    ctx->pc = 0x18ff54u;

    // 0x18ff54: 0x52e00011  beql        $s7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18FF54u;
    {
        const bool branch_taken_0x18ff54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff54) {
            ctx->pc = 0x18FF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FF54u;
            // 0x18ff58: 0x8d630000  lw          $v1, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FF9Cu;
            return;
        }
    }
    ctx->pc = 0x18FF5Cu;
    // 0x18ff5c: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x18FF5Cu;
    {
        const bool branch_taken_0x18ff5c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF5Cu;
        // 0x18ff60: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff5c) {
            ctx->pc = 0x18FF98u;
            return;
        }
    }
    ctx->pc = 0x18FF64u;
    // 0x18ff64: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x18ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x18ff68: 0x91e50007  lbu         $a1, 0x7($t7)
    ctx->pc = 0x18ff68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 7)));
    // 0x18ff6c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18ff6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18ff70: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x18ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x18ff74: 0x93a200c3  lbu         $v0, 0xC3($sp)
    ctx->pc = 0x18ff74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x18ff78: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x18ff78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18ff7c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x18ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x18ff80: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x18ff80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ff84: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x18ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x18ff88: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x18ff88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18ff8c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18ff90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FF90u;
    {
        const bool branch_taken_0x18ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF90u;
        // 0x18ff94: 0xfc8e0008  sd          $t6, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff90) {
            ctx->pc = 0x18FFB0u;
            return;
        }
    }
    ctx->pc = 0x18FF98u;
}
