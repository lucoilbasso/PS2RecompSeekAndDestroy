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

// Function: entry_00195e38
// Address: 0x195e38 - 0x195e88
void entry_00195e38_0x195e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195e38_0x195e38");
#endif

    ctx->pc = 0x195e38u;

    // 0x195e38: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x195e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x195e3c: 0x30840200  andi        $a0, $a0, 0x200
    ctx->pc = 0x195e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x195e40: 0x36820040  ori         $v0, $s4, 0x40
    ctx->pc = 0x195e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64);
    // 0x195e44: 0x8e100160  lw          $s0, 0x160($s0)
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x195e48: 0x43a00b  movn        $s4, $v0, $v1
    ctx->pc = 0x195e48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x195e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x195e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e50: 0x36820200  ori         $v0, $s4, 0x200
    ctx->pc = 0x195e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)512);
    // 0x195e54: 0x12c00058  beqz        $s6, . + 4 + (0x58 << 2)
    ctx->pc = 0x195E54u;
    {
        const bool branch_taken_0x195e54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E54u;
        // 0x195e58: 0x44a00b  movn        $s4, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e54) {
            ctx->pc = 0x195FB8u;
            return;
        }
    }
    ctx->pc = 0x195E5Cu;
    // 0x195e5c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x195e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x195e60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195e64: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x195e68: 0x1e13fc  dsll32      $v0, $fp, 15
    ctx->pc = 0x195e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 15));
    // 0x195e6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195e70: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x195e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195e74: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x195e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x195e78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x195e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x195e7c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x195e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e80: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x195e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x195e84: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x195e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195e88u;
}
